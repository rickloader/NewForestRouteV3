// COPYRIGHT 2020 by the Open Rails project.
// 
// This file is part of Open Rails.
// 
// Open Rails is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Open Rails is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Open Rails.  If not, see <http://www.gnu.org/licenses/>.

using System;
using System.Collections.Generic;
using ORTS.Common;
using ORTS.Scripting.Api;

namespace ORTS.Scripting.Script
{
    public class TCS_AWS_UK : TrainControlSystem
    {
        enum CCS
        {
            AWS,        // UK AWS
        }

        CCS ActiveCCS = CCS.AWS;
        CCS PreviousCCS = CCS.AWS;

        enum MonitorState
        {
            Disabled,
            StandBy,
            Alarm,
            Emergency
        }

        // Train parameters
        bool AWSMonitor;                                 // AWS
 
    // AWS (Advance Warning System)
        // Parameters
        bool AWSInhibited;
        bool AWSBrakeImmediately = false;
        bool AWSTrainStopBeforeRelease = false;
        bool AWSActivationOnSpeedLimitReduction = true;
        float AWSSpeedLimitReductionForActivationMpS;
        float AWSBeaconDistanceToSignalM = 186f;
        float AWSBeaconDistanceToPostM = 1186f;
        bool AWSAppliesCutsPower = true;
        bool AWSFullBraking = false;
        bool AWSPreviousFullBraking = false;
        bool AWSPressed = false;
        bool AWSPreviousOverspeed = false;
        bool AWSPreAnnounceActive = false;
        bool AWSPreviousPreAnnounceActive = false;
        float AWSWarningTimerDelayS = 3f;
        Timer AWSWarningTimer;

     // Variables
        bool ExternalEmergencyBraking = false;
        bool SignalPassed = false;
        bool SignalBeaconPassed = false;
        bool PreviousSignalBeaconPassed = false;
        bool PostPassed = false;
        bool PostBeaconPassed = false;
        bool PreviousPostBeaconPassed = false;
        float previousSignalDistanceM = 0f;
        float AWSNextSignalDistanceM = 0f;
        float previousPostDistanceM = 0f;
        float nextPostDistanceM = 0f;
        Aspect AWSNextSignalAspect = Aspect.Stop;
        int UpdateCount;
        float distanceSignalDistanceM;
        float normalSignalDistanceM;
        bool normalSignalEligibleForAWS;
        Aspect nextNormalSignalDistanceHeadsAspect;

        // MSTS TCS emulation

        float EmergencyStopMonitorTimeLimitS = 66f;
        float EmergencyStopAlarmTimeLimitS = 60f;
        float EmergencyStopPenaltyTimeLimitS = 0f;
        float EmergencyStopCriticalLevelMpS = 0f;
        float EmergencyStopResetLevelMpS = 0f;
        bool EmergencyStopAppliesFullBrake = true;
        bool EmergencyStopAppliesEmergencyBrake;
        bool EmergencyStopAppliesCutsPower;
        bool EmergencyStopAppliesShutsDownEngine;

        float VigilanceMonitorTimeLimitS = 66f;
        float VigilanceAlarmTimeLimitS = 60f;
        float VigilancePenaltyTimeLimitS = 0f;
        float VigilanceCriticalLevelMpS = 0f;
        float VigilanceResetLevelMpS = 0f;
        bool VigilanceAppliesFullBrake = true;
        bool VigilanceAppliesEmergencyBrake;
        bool VigilanceAppliesCutsPower;
        bool VigilanceAppliesShutsDownEngine;
        bool VigilanceResetOnZeroSpeed = true;
        bool VigilanceResetOnDirectionNeutral;
        bool VigilanceResetOnResetButton;
        bool VigilanceRestartOnControlsMoved;

        float OverspeedMonitorTimeLimitS = 66f;
        float OverspeedAlarmTimeLimitS = 60f;
        float OverspeedPenaltyTimeLimitS = 0f;
        float OverspeedCriticalLevelMpS = 0f;
        float OverspeedResetLevelMpS = 0f;
        bool OverspeedAppliesFullBrake = true;
        bool OverspeedAppliesEmergencyBrake;
        bool OverspeedAppliesCutsPower;
        bool OverspeedAppliesShutsDownEngine;
        bool OverspeedDoesSuppressionReset;
        float OverspeedTriggerOnOverspeedMpS = 95f;
        bool OverspeedTriggerOnTrackOverspeed;
        bool OverspeedResetOnZeroSpeed = true;
        bool OverspeedResetOnResetButton;
        bool OverspeedResetOnDirectionNeutral;
        float OverspeedAlarmTimeBeforeOverspeedS = 5f;
        float OverspeedTriggerOnTrackOverspeedMarginMpS = 4f;


        Timer VigilanceAlarmTimer;
        Timer VigilanceEmergencyTimer;
        Timer VigilancePenaltyTimer;
        Timer OverspeedEmergencyTimer;
        Timer OverspeedPenaltyTimer;

        MonitorState VigilanceMonitorState;
        MonitorState OverspeedMonitorState;

        float VigilanceAlarmTimeoutS;
        float CurrentSpeedLimitMpS;
        float NextSpeedLimitMpS;

        MonitoringStatus Status;

        bool VigilanceMonitor = false;
        bool OverspeedMonitor = false;
        bool EmergencyStopMonitor = false;
        bool EmergencyCausesThrottleDown;
        bool EmergencyEngagesHorn;

        public TCS_AWS_UK() { }

        public bool ResetButtonPressed { get; private set; }

        public bool VigilanceSystemEnabled
        {
            get
            {
                bool enabled = true;

                enabled &= IsAlerterEnabled();

                if (VigilanceMonitor)
                {
                    if (VigilanceResetOnDirectionNeutral)
                    {
                        enabled &= CurrentDirection() != Direction.N;
                    }

                    if (VigilanceResetOnZeroSpeed)
                    {
                        enabled &= SpeedMpS() >= 0.1f;
                    }
                }

                return enabled;
            }
        }

        public bool VigilanceReset
        {
            get
            {
                bool vigilanceReset = true;

                if (VigilanceMonitor)
                {
                    if (VigilanceResetOnDirectionNeutral)
                    {
                        vigilanceReset &= CurrentDirection() == Direction.N;
                    }

                    if (VigilanceResetOnZeroSpeed)
                    {
                        vigilanceReset &= SpeedMpS() < 0.1f;
                    }

                    if (VigilanceResetOnResetButton)
                    {
                        vigilanceReset &= ResetButtonPressed;
                    }
                }

                return vigilanceReset;
            }
        }

        public bool SpeedControlSystemEnabled
        {
            get
            {
                bool enabled = true;

                enabled &= IsSpeedControlEnabled();

                return enabled;
            }
        }

        public bool Overspeed
        {
            get
            {
                bool overspeed = false;

                if (OverspeedMonitor)
                {
                    if (OverspeedTriggerOnOverspeedMpS > 0)
                    {
                        overspeed |= SpeedMpS() > OverspeedTriggerOnOverspeedMpS;
                    }

                    if (OverspeedCriticalLevelMpS > 0)
                    {
                        overspeed |= SpeedMpS() > OverspeedCriticalLevelMpS;
                    }

                    if (OverspeedTriggerOnTrackOverspeed)
                    {
                        overspeed |= SpeedMpS() > CurrentSpeedLimitMpS + OverspeedTriggerOnTrackOverspeedMarginMpS;
                    }
                }

                return overspeed;
            }
        }

        public bool OverspeedReset
        {
            get
            {
                bool overspeedReset = true;

                if (OverspeedMonitor)
                {
                    if (OverspeedResetOnDirectionNeutral)
                    {
                        overspeedReset &= CurrentDirection() == Direction.N;
                    }

                    if (OverspeedResetOnZeroSpeed)
                    {
                        overspeedReset &= SpeedMpS() < 0.1f;
                    }

                    if (OverspeedResetOnResetButton)
                    {
                        overspeedReset &= ResetButtonPressed;
                    }
                }

                return overspeedReset;
            }
        }

        public override void Initialize()
        {
            // General section
            AWSMonitor = GetBoolParameter("General", "AWSMonitor", false);
            VigilanceMonitor = GetBoolParameter("General", "VigilanceMonitor", false);
            EmergencyStopMonitor = GetBoolParameter("General", "EmergencyStopMonitor", false);
            OverspeedMonitor = GetBoolParameter("General", "OverspeedMonitor", false);

            // AWS section
            AWSInhibited = GetBoolParameter("AWS", "Inhibited", false);
            AWSWarningTimerDelayS = GetFloatParameter("AWS", "WarningTimerDelayS", 3f);
            AWSBrakeImmediately = GetBoolParameter("AWS", "BrakeImmediately", false);
            AWSTrainStopBeforeRelease = GetBoolParameter("AWS", "TrainStopBeforeRelease", false);
            AWSActivationOnSpeedLimitReduction = GetBoolParameter("AWS", "ActivationOnSpeedLimitReduction", false);
            AWSSpeedLimitReductionForActivationMpS = GetFloatParameter("AWS", "SpeedLimitReductionForActivationMpS", 11.176f);
            AWSBeaconDistanceToPostM = GetFloatParameter("AWS", "BeaconDistanceToPostM", AWSBeaconDistanceToPostM);
            AWSAppliesCutsPower = GetBoolParameter("AWS", "AppliesCutsPower", AWSAppliesCutsPower);

            // MSTS TCS Emulation of .eng parameters

            // Vigilance monitor
            EmergencyStopMonitorTimeLimitS = GetFloatParameter("EmergencyStopMonitor", "MonitorTimeLimitS", EmergencyStopMonitorTimeLimitS);
            EmergencyStopAlarmTimeLimitS = GetFloatParameter("EmergencyStopMonitor", "AlarmTimeLimitS", EmergencyStopAlarmTimeLimitS);
            EmergencyStopPenaltyTimeLimitS = GetFloatParameter("EmergencyStopMonitor", "PenaltyTimeLimitS", EmergencyStopPenaltyTimeLimitS);
            EmergencyStopCriticalLevelMpS = GetFloatParameter("EmergencyStopMonitor", "CriticalLevelMpS", EmergencyStopCriticalLevelMpS);
            EmergencyStopResetLevelMpS = GetFloatParameter("EmergencyStopMonitor", "ResetLevelMpS", EmergencyStopResetLevelMpS);
            EmergencyStopAppliesFullBrake = GetBoolParameter("EmergencyStopMonitor", "AppliesFullBrake", EmergencyStopAppliesFullBrake);
            EmergencyStopAppliesEmergencyBrake = GetBoolParameter("EmergencyStopMonitor", "AppliesEmergencyBrake", EmergencyStopAppliesEmergencyBrake);
            EmergencyStopAppliesCutsPower = GetBoolParameter("EmergencyStopMonitor", "AppliesCutsPower", EmergencyStopAppliesCutsPower);
            EmergencyStopAppliesShutsDownEngine = GetBoolParameter("EmergencyStopMonitor", "AppliesShutsDownEngine", EmergencyStopAppliesShutsDownEngine);

            VigilanceMonitorTimeLimitS = GetFloatParameter("VigilanceMonitor", "MonitorTimeLimitS", VigilanceMonitorTimeLimitS);
            VigilanceAlarmTimeLimitS = GetFloatParameter("VigilanceMonitor", "AlarmTimeLimitS", VigilanceAlarmTimeLimitS);
            VigilancePenaltyTimeLimitS = GetFloatParameter("VigilanceMonitor", "PenaltyTimeLimitS", VigilancePenaltyTimeLimitS);
            VigilanceCriticalLevelMpS = GetFloatParameter("VigilanceMonitor", "CriticalLevelMpS", VigilanceCriticalLevelMpS);
            VigilanceResetLevelMpS = GetFloatParameter("VigilanceMonitor", "ResetLevelMpS", VigilanceResetLevelMpS);
            VigilanceAppliesFullBrake = GetBoolParameter("VigilanceMonitor", "AppliesFullBrake", VigilanceAppliesFullBrake);
            VigilanceAppliesEmergencyBrake = GetBoolParameter("VigilanceMonitor", "AppliesEmergencyBrake", VigilanceAppliesEmergencyBrake);
            VigilanceAppliesCutsPower = GetBoolParameter("VigilanceMonitor", "AppliesCutsPower", VigilanceAppliesCutsPower);
            VigilanceAppliesShutsDownEngine = GetBoolParameter("VigilanceMonitor", "AppliesShutsDownEngine", VigilanceAppliesShutsDownEngine);
            VigilanceResetOnDirectionNeutral = GetBoolParameter("VigilanceMonitor", "ResetOnDirectionNeutral", VigilanceResetOnDirectionNeutral);
            VigilanceResetOnZeroSpeed = GetBoolParameter("VigilanceMonitor", "ResetOnZeroSpeed", VigilanceResetOnZeroSpeed);
            VigilanceResetOnResetButton = GetBoolParameter("VigilanceMonitor", "ResetOnResetButton", VigilanceResetOnResetButton);
            VigilanceRestartOnControlsMoved = GetBoolParameter("VigilanceMonitor", "RestartOnControlsMoved", VigilanceRestartOnControlsMoved);

            OverspeedMonitorTimeLimitS = GetFloatParameter("OverspeedMonitor", "MonitorTimeLimitS", OverspeedMonitorTimeLimitS);
            OverspeedAlarmTimeLimitS = GetFloatParameter("OverspeedMonitor", "AlarmTimeLimitS", OverspeedAlarmTimeLimitS);
            OverspeedPenaltyTimeLimitS = GetFloatParameter("OverspeedMonitor", "PenaltyTimeLimitS", OverspeedPenaltyTimeLimitS);
            OverspeedCriticalLevelMpS = GetFloatParameter("OverspeedMonitor", "CriticalLevelMpS", OverspeedCriticalLevelMpS);
            OverspeedResetLevelMpS = GetFloatParameter("OverspeedMonitor", "ResetLevelMpS", OverspeedResetLevelMpS);
            OverspeedAppliesFullBrake = GetBoolParameter("OverspeedMonitor", "AppliesFullBrake", OverspeedAppliesFullBrake);
            OverspeedAppliesEmergencyBrake = GetBoolParameter("OverspeedMonitor", "AppliesEmergencyBrake", OverspeedAppliesEmergencyBrake);
            OverspeedAppliesCutsPower = GetBoolParameter("OverspeedMonitor", "AppliesCutsPower", OverspeedAppliesCutsPower);
            OverspeedAppliesShutsDownEngine = GetBoolParameter("OverspeedMonitor", "AppliesShutsDownEngine", OverspeedAppliesShutsDownEngine);
            OverspeedDoesSuppressionReset = GetBoolParameter("OverspeedMonitor", "DoesSuppressionReset", OverspeedDoesSuppressionReset);
            OverspeedTriggerOnTrackOverspeed = GetBoolParameter("OverspeedMonitor", "TriggerOnTrackOverspeed", OverspeedTriggerOnTrackOverspeed);
            OverspeedTriggerOnOverspeedMpS = GetFloatParameter("OverspeedMonitor", "TriggerOnOverspeedMpS", OverspeedTriggerOnOverspeedMpS);
            OverspeedResetOnZeroSpeed = GetBoolParameter("OverspeedMonitor", "ResetOnZeroSpeed", OverspeedResetOnZeroSpeed);
            OverspeedResetOnResetButton = GetBoolParameter("OverspeedMonitor", "ResetOnResetButton", OverspeedResetOnResetButton);
            OverspeedResetOnDirectionNeutral = GetBoolParameter("OverspeedMonitor", "ResetOnDirectionNeutral", OverspeedResetOnDirectionNeutral);
            OverspeedAlarmTimeBeforeOverspeedS = GetFloatParameter("OverspeedMonitor", "AlarmTimeBeforeOverspeedS", OverspeedAlarmTimeBeforeOverspeedS);
            OverspeedTriggerOnTrackOverspeedMarginMpS = GetFloatParameter("OverspeedMonitor", "TriggerOnTrackOverspeedMarginMpS", OverspeedTriggerOnTrackOverspeedMarginMpS);

            // Variables initialization
            AWSWarningTimer = new Timer(this);
            AWSWarningTimer.Setup(AWSWarningTimerDelayS);

            Activated = true;
            previousSignalDistanceM = 0f;

            InitializeMSTSTCSEmulation();
        }

        protected void InitializeMSTSTCSEmulation()
        {
            {
                VigilanceAlarmTimer = new Timer(this);
                VigilanceEmergencyTimer = new Timer(this);
                VigilancePenaltyTimer = new Timer(this);
                OverspeedEmergencyTimer = new Timer(this);
                OverspeedPenaltyTimer = new Timer(this);

                if (VigilanceMonitor)
                {
                    if (VigilanceMonitorTimeLimitS > VigilanceAlarmTimeLimitS)
                        VigilanceAlarmTimeoutS = VigilanceMonitorTimeLimitS - VigilanceAlarmTimeLimitS;
                    VigilanceAlarmTimer.Setup(VigilanceAlarmTimeLimitS);
                    VigilanceEmergencyTimer.Setup(VigilanceAlarmTimeoutS);
                    VigilancePenaltyTimer.Setup(VigilancePenaltyTimeLimitS);
                }
                if (OverspeedMonitor)
                {
                    OverspeedEmergencyTimer.Setup(Math.Max(OverspeedAlarmTimeLimitS, OverspeedAlarmTimeBeforeOverspeedS));
                    OverspeedPenaltyTimer.Setup(OverspeedPenaltyTimeLimitS);
                }


            }
        }

        public override void Update()
        {
            // At startup not all variables are already available
            if (UpdateCount < 2)
            {
                UpdateCount++;
                return;
            }
            if (UpdateCount == 2)
            {
                FirstUpdateInitializations();
                UpdateCount++;
                return;
            }
            UpdateSignalAndBeaconPassed();
            UpdateInputs();

            if (IsTrainControlEnabled())
            {

                if (!AWSMonitor)
                {

                    SetNextSignalAspect(Aspect.Clear_1);

                    if (VigilanceMonitor)
                        UpdateVigilance();
                    if (OverspeedMonitor)
                        UpdateOverspeedMonitor();
                }
                else
                {
                    ActiveCCS = CCS.AWS;
                    UpdateAWS();
                    if (VigilanceMonitor)
                        UpdateVigilance();
                    if (OverspeedMonitor)
                        UpdateOverspeedMonitor();
                }
                bool EmergencyBrakingRequest = false;
                bool FullBrakingRequest = false;
                bool PowerCutRequest = false;
                if (VigilanceMonitor)
                {
                    if (VigilanceAppliesEmergencyBrake)
                        EmergencyBrakingRequest |= (VigilanceMonitorState == MonitorState.Emergency);
                    else if (VigilanceAppliesFullBrake)
                        FullBrakingRequest |= (VigilanceMonitorState == MonitorState.Emergency);

                    if (VigilanceAppliesCutsPower)
                        PowerCutRequest |= (VigilanceMonitorState == MonitorState.Emergency);
                }

                if (OverspeedMonitor)
                {
                    if (OverspeedAppliesEmergencyBrake)
                        EmergencyBrakingRequest |= (OverspeedMonitorState == MonitorState.Emergency);
                    else if (OverspeedAppliesFullBrake)
                        FullBrakingRequest |= (OverspeedMonitorState == MonitorState.Emergency);

                    if (OverspeedAppliesCutsPower)
                        PowerCutRequest |= (OverspeedMonitorState == MonitorState.Emergency);
                }

                if (EmergencyStopMonitor)
                {
                    if (EmergencyStopAppliesEmergencyBrake)
                        EmergencyBrakingRequest |= ExternalEmergencyBraking;
                    else if (EmergencyStopAppliesFullBrake)
                        FullBrakingRequest |= ExternalEmergencyBraking;

                    if (EmergencyStopAppliesCutsPower)
                        PowerCutRequest |= ExternalEmergencyBraking;
                }
                FullBrakingRequest |= AWSFullBraking;

                if (AWSMonitor)
                    if (AWSAppliesCutsPower)
                        PowerCutRequest |= AWSFullBraking;

 //               EmergencyBrakingRequest = RSOEmergencyBraking || VACMAEmergencyBraking || ExternalEmergencyBraking;
                SetEmergencyBrake(EmergencyBrakingRequest);
                SetFullBrake(!EmergencyBrakingRequest && FullBrakingRequest);
                SetPowerAuthorization(!PowerCutRequest);
                SetTractionAuthorization(!PowerCutRequest);

                SetPenaltyApplicationDisplay(IsBrakeEmergency() || IsBrakeFullService());

                                // Update monitoring status
                if (SpeedMpS() > CurrentSpeedLimitMpS)
                {
                    if (OverspeedMonitor && (OverspeedAppliesEmergencyBrake || OverspeedAppliesFullBrake))
                        Status = MonitoringStatus.Intervention;
                    else
                        Status = MonitoringStatus.Warning;
                }
                else if (NextSpeedLimitMpS < CurrentSpeedLimitMpS && SpeedMpS() > NextSpeedLimitMpS)
                {
                    if (Deceleration(SpeedMpS(), NextSpeedLimitMpS, NextSignalDistanceM(0)) > 0.7f)
                        Status = MonitoringStatus.Overspeed;
                    else
                        Status = MonitoringStatus.Indication;
                }
                else
                    Status = MonitoringStatus.Normal;
                SetMonitoringStatus(Status);

                PreviousCCS = ActiveCCS;
            }                
        }

        // First Update Initializations

        protected void FirstUpdateInitializations()
        {
            SetNextSignalAspect(Aspect.Approach_1);

            if (VigilanceMonitor)
                VigilanceAlarmTimer.Start();

            distanceSignalDistanceM = NextDistanceSignalDistanceM();
            normalSignalDistanceM = NextSignalDistanceM(0);
            normalSignalEligibleForAWS = false;
            if (normalSignalDistanceM > 0 && !DoesNextNormalSignalHaveTwoAspects()) normalSignalEligibleForAWS = true;
            if (normalSignalEligibleForAWS)
            {
                if (distanceSignalDistanceM > normalSignalDistanceM || distanceSignalDistanceM == 0 || distanceSignalDistanceM == float.MaxValue) AWSNextSignalDistanceM = normalSignalDistanceM;
                else AWSNextSignalDistanceM = distanceSignalDistanceM;
            }
            else AWSNextSignalDistanceM = distanceSignalDistanceM;
            previousSignalDistanceM = AWSNextSignalDistanceM;

            if (AWSNextSignalDistanceM != 0 && AWSNextSignalDistanceM < AWSBeaconDistanceToSignalM)
            {
                SignalBeaconPassed = true;
                PreviousSignalBeaconPassed = true;
            }
            else
            {
                SignalBeaconPassed = false;
                PreviousSignalBeaconPassed = false;
            }

            nextPostDistanceM = NextPostDistanceM(0);
            previousPostDistanceM = nextPostDistanceM;
            if (IsSpeedControlEnabled() && AWSActivationOnSpeedLimitReduction &&
             CurrentPostSpeedLimitMpS() - NextPostSpeedLimitMpS(0) > AWSSpeedLimitReductionForActivationMpS &&
             nextPostDistanceM != 0 && nextPostDistanceM < AWSBeaconDistanceToPostM)
            {
                PostBeaconPassed = true;
                PreviousPostBeaconPassed = true;
            }
            else
            {
                PostBeaconPassed = false;
                PreviousPostBeaconPassed = false;
            }
        }

        public void UpdateInputs()
        {
//            SetNextSignalAspect(NextSignalAspect(0));

            CurrentSpeedLimitMpS = CurrentSignalSpeedLimitMpS();
            if (CurrentSpeedLimitMpS < 0 || CurrentSpeedLimitMpS > TrainSpeedLimitMpS())
                CurrentSpeedLimitMpS = TrainSpeedLimitMpS();

            // TODO: NextSignalSpeedLimitMpS(0) should return 0 if the signal is at stop; cause seems to be updateSpeedInfo() within Train.cs
            NextSpeedLimitMpS = NextSignalAspect(0) != Aspect.Stop ? (NextSignalSpeedLimitMpS(0) > 0 && NextSignalSpeedLimitMpS(0) < TrainSpeedLimitMpS() ? NextSignalSpeedLimitMpS(0) : TrainSpeedLimitMpS()) : 0;

            SetCurrentSpeedLimitMpS(CurrentSpeedLimitMpS);
            SetNextSpeedLimitMpS(NextSpeedLimitMpS);
        }

        void UpdateVigilance()
        {
            switch (VigilanceMonitorState)
            {
                case MonitorState.Disabled:
                    if (VigilanceSystemEnabled)
                    {
                        VigilanceMonitorState = MonitorState.StandBy;
                    }
                    break;

                case MonitorState.StandBy:
                    if (!VigilanceSystemEnabled)
                    {
                        VigilanceAlarmTimer.Stop();
                        VigilanceMonitorState = MonitorState.Disabled;
                    }
                    else
                    {
                        if (!VigilanceAlarmTimer.Started && SpeedMpS() > 0.1f)
                        {
                            VigilanceAlarmTimer.Start();
                        }

                        if (VigilanceAlarmTimer.Started && SpeedMpS() < 0.1f)
                        {
                            VigilanceAlarmTimer.Stop();
                        }
                        
                        if (VigilanceEmergencyTimer.Started)
                        {
                            VigilanceEmergencyTimer.Stop();
                            TriggerSoundAlert2();
                        }

                        if (VigilanceAlarmTimer.Triggered)
                        {
                            VigilanceAlarmTimer.Stop();
                            VigilanceMonitorState = MonitorState.Alarm;
                            TriggerSoundAlert1();
                        }
                    }
                    break;

                case MonitorState.Alarm:
                    if (!VigilanceSystemEnabled)
                    {
                        VigilanceEmergencyTimer.Stop();
                        VigilanceMonitorState = MonitorState.Disabled;
                    }
                    else
                    {
                        if (!VigilanceEmergencyTimer.Started)
                        {
                            VigilanceEmergencyTimer.Start();
                        }

                        if (VigilanceEmergencyTimer.Triggered)
                        {
                            VigilanceEmergencyTimer.Stop();
                            TriggerSoundAlert2();
                            TriggerSoundPenalty1();
                            VigilanceMonitorState = MonitorState.Emergency;
                        }
                    }
                    break;

                case MonitorState.Emergency:
                    if (!VigilancePenaltyTimer.Started)
                    {
                        VigilancePenaltyTimer.Start();
                    }

                    if (VigilancePenaltyTimer.Triggered && VigilanceReset)
                    {
                        VigilanceEmergencyTimer.Stop();
                        VigilanceMonitorState = (VigilanceSystemEnabled ? MonitorState.StandBy : MonitorState.Disabled);
                        TriggerSoundPenalty2();
                    }
                    break;
            }

            SetVigilanceAlarmDisplay(VigilanceMonitorState == MonitorState.Alarm);
            SetVigilanceEmergencyDisplay(VigilanceMonitorState == MonitorState.Emergency);
        }

        void UpdateOverspeedMonitor()
        {
            var interventionSpeedMpS = CurrentSpeedLimitMpS + MpS.FromKpH(5.0f); // Default margin : 5 km/h

            if (OverspeedTriggerOnTrackOverspeed)
            {
                interventionSpeedMpS = CurrentSpeedLimitMpS + OverspeedTriggerOnTrackOverspeedMarginMpS;
            }

            SetInterventionSpeedLimitMpS(interventionSpeedMpS);

            switch (OverspeedMonitorState)
            {
                case MonitorState.Disabled:
                    if (SpeedControlSystemEnabled)
                    {
                        OverspeedMonitorState = MonitorState.StandBy;
                    }
                    break;

                case MonitorState.StandBy:
                    if (!SpeedControlSystemEnabled)
                    {
                        OverspeedMonitorState = MonitorState.Disabled;
                    }
                    else
                    {
                        if (Overspeed)
                        {
                            OverspeedMonitorState = MonitorState.Alarm;
                        }
                    }
                    break;

                case MonitorState.Alarm:
                    if (!SpeedControlSystemEnabled)
                    {
                        OverspeedMonitorState = MonitorState.Disabled;
                    }
                    else
                    {
                        if (!OverspeedEmergencyTimer.Started)
                        {
                            OverspeedEmergencyTimer.Start();
                            TriggerSoundWarning1();
                            SetNextSignalAspect(Aspect.Approach_3);
                        }

                        if (!Overspeed)
                        {
                            OverspeedEmergencyTimer.Stop();
                            OverspeedMonitorState = MonitorState.StandBy;
                            TriggerSoundWarning2();
                        }
                        else if (OverspeedEmergencyTimer.Triggered)
                        {
                            OverspeedEmergencyTimer.Stop();
                            OverspeedMonitorState = MonitorState.Emergency;
                        }
                    }
                    break;

                case MonitorState.Emergency:
                    if (!OverspeedPenaltyTimer.Started)
                    {
                        OverspeedPenaltyTimer.Start();
                    }

                    if (OverspeedPenaltyTimer.Triggered && OverspeedReset)
                    {
                        OverspeedPenaltyTimer.Stop();
                        OverspeedMonitorState = MonitorState.StandBy;
                        TriggerSoundWarning2();
                    }
                    break;
            }

            SetOverspeedWarningDisplay(OverspeedMonitorState >= MonitorState.Alarm);
        }


        public override void SetEmergency(bool emergency)
        {
            ExternalEmergencyBraking = emergency;
        }


        protected void UpdateAWS()
        {
            if (AWSPressed && AWSWarningTimer.Started)
            {
                TriggerSoundWarning2();
                AWSWarningTimer.Stop();
            }
            if (AWSPressed && AWSFullBraking && !AWSTrainStopBeforeRelease)
            {
                if (!AWSTrainStopBeforeRelease || SpeedMpS() == 0)
                {
                    TriggerSoundWarning2();
                    AWSFullBraking = false;
                }
            }
            if(AWSWarningTimer.Started && AWSWarningTimer.Triggered)
            {
                AWSFullBraking = true;
                AWSWarningTimer.Stop();
            }

            if (SignalBeaconPassed && !PreviousSignalBeaconPassed && !AWSWarningTimer.Started && !AWSFullBraking)
            {
                if (AWSNextSignalAspect == Aspect.Clear_2 || AWSNextSignalAspect == Aspect.Clear_1)
                {
                    TriggerSoundInfo1();
                    SetNextSignalAspect(Aspect.Clear_2);
                }
                else if (AWSNextSignalAspect != Aspect.Clear_2 && AWSNextSignalAspect != Aspect.Clear_1)
                {
                    TriggerSoundWarning1();
                    SetNextSignalAspect(AWSNextSignalAspect);
                    if (AWSBrakeImmediately)
                        AWSFullBraking = true;
                    else
                        AWSWarningTimer.Start();
                }
            }
            if (PostBeaconPassed && !PreviousPostBeaconPassed && !AWSWarningTimer.Started && !AWSFullBraking)
            {
                TriggerSoundWarning1();
                SetNextSignalAspect(Aspect.Approach_3);
                if (AWSBrakeImmediately)
                    AWSFullBraking = true;
                else
                    AWSWarningTimer.Start();
            }

        }

         public override void HandleEvent(TCSEvent evt, string message)
        {
            switch (evt)
            {
                case TCSEvent.AlerterPressed:
                    AWSPressed = true;
                    break;

                case TCSEvent.AlerterReleased:
                    AWSPressed = false;
                    break;
            }
            switch (evt)
            {
                case TCSEvent.AlerterPressed:
                case TCSEvent.AlerterReleased:
                    if (Activated)
                    {
                        switch (VigilanceMonitorState)
                        {
                            // case VigilanceState.Disabled: do nothing

                            case MonitorState.StandBy:
                                VigilanceAlarmTimer.Stop();
                                break;

                            case MonitorState.Alarm:
//                                VigilanceEmergencyTimer.Stop();
                                VigilanceMonitorState = MonitorState.StandBy;
                                break;

                                // case VigilanceState.Emergency: do nothing
                        }
                    }
                    break;
                case TCSEvent.AlerterReset:
                    if (Activated && VigilanceRestartOnControlsMoved)
                    {
                        switch (VigilanceMonitorState)
                        {
                            // case VigilanceState.Disabled: do nothing

                            case MonitorState.StandBy:
                                VigilanceAlarmTimer.Stop();
                                break;

                            case MonitorState.Alarm:
                                //                                VigilanceEmergencyTimer.Stop();
                                VigilanceMonitorState = MonitorState.StandBy;
                                break;

                                // case VigilanceState.Emergency: do nothing
                        }
                    }
                    break;
            }

            switch (evt)
            {
                case TCSEvent.AlerterPressed:
                    ResetButtonPressed = true;
                    break;

                case TCSEvent.AlerterReleased:
                    ResetButtonPressed = false;
                    break;
            }
        }

        protected void UpdateSignalAndBeaconPassed()
        {
            // select signal
            distanceSignalDistanceM = NextDistanceSignalDistanceM();
            normalSignalDistanceM = NextSignalDistanceM(0);
            normalSignalEligibleForAWS = false;
            if (normalSignalDistanceM > 0 && !DoesNextNormalSignalHaveTwoAspects()) normalSignalEligibleForAWS = true;
            if (normalSignalEligibleForAWS)
            {
                if (distanceSignalDistanceM > normalSignalDistanceM || distanceSignalDistanceM == 0 || distanceSignalDistanceM == float.MaxValue)
                {
                    AWSNextSignalDistanceM = normalSignalDistanceM;
                    nextNormalSignalDistanceHeadsAspect = NextNormalSignalDistanceHeadsAspect();
                    if (nextNormalSignalDistanceHeadsAspect == Aspect.None)
                        AWSNextSignalAspect = NextSignalAspect(0);
                    else
                        AWSNextSignalAspect = nextNormalSignalDistanceHeadsAspect;

                }
                else
                {
                    AWSNextSignalDistanceM = distanceSignalDistanceM;
                    AWSNextSignalAspect = NextDistanceSignalAspect();
                }
            }
            else
            {
                AWSNextSignalDistanceM = distanceSignalDistanceM;
                AWSNextSignalAspect = NextDistanceSignalAspect();
            }

            nextPostDistanceM = 0;
            if (PostBeaconPassed) PreviousPostBeaconPassed = true;
            if (SignalBeaconPassed) PreviousSignalBeaconPassed = true;
            if (IsSpeedControlEnabled() && AWSActivationOnSpeedLimitReduction &&
                CurrentPostSpeedLimitMpS() - NextPostSpeedLimitMpS(0) > AWSSpeedLimitReductionForActivationMpS)
                nextPostDistanceM = NextPostDistanceM(0);
            if (nextPostDistanceM != 0)
            {
                PostBeaconPassed = nextPostDistanceM < AWSBeaconDistanceToPostM && SpeedMpS() > 0;
                PostPassed = nextPostDistanceM > previousPostDistanceM + 1 && SpeedMpS() > 0;
                if (PostPassed)
                {
                    PostBeaconPassed = false;
                    PreviousPostBeaconPassed = false;
                }
            }
            else
            // Don't see next speedpost
            {
                PostPassed = true;
                PostBeaconPassed = false;
                PreviousPostBeaconPassed = false;
            }

            if (AWSNextSignalDistanceM != 0)
            {
                SignalBeaconPassed = AWSNextSignalDistanceM < AWSBeaconDistanceToSignalM && SpeedMpS() > 0;
                SignalPassed = AWSNextSignalDistanceM > previousSignalDistanceM + 1 && SpeedMpS() > 0;
                if (SignalPassed)
                {
                    SignalBeaconPassed = false;
                    PreviousSignalBeaconPassed = false;
                }
            }
            else
            // Don't see next signal
            {
                SignalPassed = true;
                SignalBeaconPassed = false;
                PreviousSignalBeaconPassed = false;
            }
            previousPostDistanceM = nextPostDistanceM;
            previousSignalDistanceM = AWSNextSignalDistanceM;
        }
    }
}
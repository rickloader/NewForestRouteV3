
Comment ( **Based on SR U 2-6-0 locomotive** )
Comment ( * new build U class - left hand drive * )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 36in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 53.5t-uk )  Comment ( new build 53.5t-uk, K-class rebuilds 54.6t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 262ft^3 )
ORTSEvaporationArea ( 1526ft^2 ) Comment ( tubes 1391 + firebox 135 )
ORTSSuperheatArea ( 285ft^2 )
MaxBoilerPressure ( 200psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 28in )
CylinderDiameter ( 19in )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 25.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

MaxTenderCoalMass ( 5t-uk )
MaxTenderWaterMass ( 35000lb )
IsTenderRequired( 1 )

Comment ( ************************* Gearing (If used) *************************
                  Included in this section - Gear type, ratio, etc
      *********************************************************************** )

Comment ( ************************** Brake System *********************************************
            Included in this section - Compressor, Reservoir, Application rates, etc
     ************************************************************************************* )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.05 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Super Dreadnought ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.27 )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 240lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( preserved U class loco is fitted with SJ type ejector dating from 1940s, presumed to originally have Dreadnought ejector )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.095 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )
Comment ( Steam Reverser )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSSmallEjector ( 0 1 0.1 0.0 NumNotches ( 0 ) )

Brake_Brakeman ( 0 1 0.2 0.0
NumNotches ( 1
Notch( 0 1 BrakemanBrakesControllerManualBrakingStart ) ) )

FireDoor ( 0 1 0.2 0 NumNotches ( 0 ) )

Sanding( 0 1 0 )

Blower ( 0 1 0.025 0.2 NumNotches ( 0 ) )

ORTSSteamHeat( 0 1 0.05 0 )

Shovel ( 0 1 0.1 0 NumNotches ( 0 ) )

DampersFront ( 0 1 0.1 1 NumNotches ( 0 ) )
DampersBack ( 0 1 0.1 0 NumNotches ( 0 ) )

Injector1Steam ( 0 1 0 )
Injector2Steam ( 0 1 1 )
Injector1Water ( 0 1 0.1 0
NumNotches( 5
Notch ( 0.00 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )
Injector2Water ( 0 1 0.1 0
NumNotches( 5
Notch ( 0.00 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )

CylinderCocks ( 0 1 1 )
Whistle ( 0 1 0 )

)

Comment ( ********************** Miscellaneous Information *********************
           Included in this section - Alternate Views, Sounds, Names, etc
      *********************************************************************** )

CabView ( "..\\..\\common.cab\\SR_U\\31806LHD.cvf" )
HeadOut (  -1.5 3.0 -5.5 )

Sound ( "..\\..\\Common.Sound\\LMS-Crab\\LMS-Hughes_cab.sms" )

Effects (
SteamSpecialEffects (

WhistleFX (
0 4.00 -3.6
0 0.8 0
0.15 )

SafetyValvesFX (
0 4.45 -2.55
0 -0.80 0
0.350 )
SafetyValvesFX (
0 4.45 -2.55
0 1.3 0
0.15 )
StackFX (
0 3.95 3.05
0 0.95 0
0.25 )

DrainpipeFX (
-1.5 1.258 -3.886
-0.4 -1 -0.2
0.05 )

CylindersFX (
-1.14 0.37 3.8
0 0 1.3
0.1 )
Cylinders2FX (
1.14 0.37 3.8
0 0 1.3
0.1 )
Cylinders2FX (
-1.14 0.30 3.5
0 0 1.3
0.1 )
CylindersFX (
1.14 0.30 3.5
0 0 1.3
0.1 )

Injectors1FX (
1.00 0.60 -4.90
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.60 -4.90
0 -1 -1
0.1 )

SteamBrakeFX (
 0.65 0.70 -4.2
 0.3 -1 0
 0.05 )
SteamBrakeFX (
 -0.65 0.70 -4.2
 -0.3 -1 0
 0.05 )

LargeEjectorFX (
 -1.05 1.20 -4.50
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 -1.05 1.20 -4.50
 -0.2 -1.0 -0.1
 0.10 )

)
)


Comment ( BR Mk1 SLC with original bogies - D4 - AS301 )
Comment ( BR1 bogie, vacuum brake, cast iron brake blocks, steam heat )
MaxVelocity ( 90mph ) Comment ( use MaxVelocity 40.24 x in consists )

Mass ( 40.5t-uk ) Comment ( Estimated Tare 39.5t-uk with BR1 bogies )
Include ( ..\\Common_Carriages\\DropheadBuckeyeCoupling.inc )

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType ( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType ( Vacuum_single_pipe )
MaxBrakeForce( 87kN ) Comment ( * Brake force approx 27t-uk, coefficient of friction 0.31 * )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 1.65ft^3 )
ORTSBrakeCylinderSize ( 21in )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )
MaxReleaseRate ( 5.0inHg/s )
MaxApplicationRate ( 5.0inHg/s )
ORTSDirectAdmissionValve ( 1 )
 
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( * Cast Iron Brakeshoes * )

Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, etc
          *************************************************************** )

CentreOfGravity ( 0.0m 1.8m 0.0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 8ft 6in )
ORTSUnbalancedSuperelevation ( 6in )

ORTSBearingType ( Friction )

ORTSDavis_A ( 527 )
ORTSDavis_B ( 5.8 )
ORTSDavis_C ( 0.97 )

ORTSWagonFrontalArea ( 95ft^2 )
ORTSDavisDragConstant ( 0.0004 )

Comment ( ************************ Lights (If used) ************************
          Included in this section - Type, Colour, Location, Size, Control, etc
          ******************************************************************** )

Comment ( ********************* Wagon Visual Effects *********************
                    Included in this section - Effect type, etc
         ****************************************************************** )

Effects(
     SpecialEffects(

Comment(==== Steam Heating Leaks ====)
 HeatingHoseFX(
  0.0 0.4 -10.45
  0 1 0
  0.13 )
 HeatingMainPipeSteamTrapFX(
  1.1 1.1 8.5
  0 -1 0
  0.05 )
 HeatingMainPipeSteamTrapFX(
  -1.1 1.1 8.5
  0 -1 0
  0.05 )

 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -6.88
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -6.88
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -5.53
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -5.53
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -4.18
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -4.18
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -2.83
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -2.83
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -1.47
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -1.47
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -0.12
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -0.12
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 1.23
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 1.23
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 2.58
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 2.58
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 3.94
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 3.94
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 5.29
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 5.29
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 6.64
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 6.64
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 8.09
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 8.09
  0 -1 0
  0.03 )
 ) )

Comment ( **************************** Wagon Heating (If used) ****************************
          Included in this section - Car Temperature set point, heating pipe dimensions, etc
          ********************************************************************************* )

ORTSHeatingCompartmentTemperatureSet ( 18 )
ORTSHeatingCompartmentPipeAreaFactor ( 1.50 )
ORTSHeatingWindowDeratingFactor ( 0.19 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 2.07in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.5in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )

Sound ("GenPassWagSteam.sms")
PassengerCapacity ( 17 )


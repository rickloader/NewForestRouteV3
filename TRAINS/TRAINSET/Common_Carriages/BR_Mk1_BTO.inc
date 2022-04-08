
Comment ( BR Mk1 BTO with original bogies - D184 - AE202 )
Comment ( BR1 bogie, vacuum brake, cast iron brake blocks, steam heat )
MaxVelocity ( 90mph ) Comment ( use MaxVelocity 40.24 x in consists )

Mass ( 39t-uk ) Comment ( Tare 36.35t-uk )
Include ( ..\\Common_Carriages\\DropheadBuckeyeCoupling.inc )

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType ( Handbrake, Vacuum_brake, Auxilary_reservoir )
BrakeSystemType ( Vacuum_single_pipe )
MaxBrakeForce( 87kN ) Comment ( * Brake force approx 27t-uk, coefficient of friction 0.31 * )
MaxHandbrakeForce( 25kN )
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

ORTSDavis_A ( 518 )
ORTSDavis_B ( 5.5 )
ORTSDavis_C ( 0.97 )

ORTSWagonFrontalArea ( 95ft^2 )
ORTSDavisDragConstant ( 0.0004 )

Comment ( ************************ Lights (If used) ************************
          Included in this section - Type, Colour, Location, Size, Control, etc
          ******************************************************************** )

Comment( *Lights Section - In Service Dim and Full Operation Specified *)

Lights(1

Light(
comment( Tail Lamp )
Type( 0 )
Conditions(
Headlight ( 4 )
Unit ( 3 )Service( 2 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(1
State(
Duration ( 0.0 )
     LightColour ( f0ff0000 )
Position ( 0.671093 1.956407 -10.589623 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 0.5 )
)
)
)
)

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
  1.1 1.1 0.01
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 0.01
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 4.83
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 4.83
  0 -1 0
  0.03 )

 ) )

Comment ( **************************** Wagon Heating (If used) ****************************
          Included in this section - Car Temperature set point, heating pipe dimensions, etc
          ********************************************************************************* )

ORTSHeatingCompartmentTemperatureSet ( 18 )
ORTSHeatingCompartmentPipeAreaFactor ( 2.25 )
ORTSHeatingWindowDeratingFactor ( 0.26 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 2.07in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.5in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )

Sound ("GenPassWagSteam.sms")
PassengerCapacity ( 39 )


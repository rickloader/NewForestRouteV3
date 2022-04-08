
Comment ( * SR D25 Ironclad Corridor Third * )
Comment ( * ex D475 Corridor First * )

Mass ( 34t-uk ) Comment ( Tare = 32t-uk )
WheelRadius ( 21.75in )
ORTSNumberAxles ( 4 )

Comment ( *** Brakes *** )
BrakeEquipmentType ( "Vacuum_brake, Auxilary_reservoir" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce( 65kN ) Comment ( * Braked approx 70% tare mass * )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
ORTSBrakeCylinderSize ( 18in )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 6.48ft^3 )
Brakepipevolume ( 1.55ft^3 )
MaxReleaseRate ( 5.0 )
MaxApplicationRate ( 5.0 )
ORTSDirectAdmissionValve ( 0 )
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 

Comment ( ******************************* Friction ****************
          Included in this section - Friction, Bearing Type
   ********************************************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 510 )
ORTSDavis_B ( 12.2 )
ORTSDavis_C ( 0.82 )

ORTSWagonFrontalArea ( 96ft^2 )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.0m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )

Comment ( ************************ Lights (If used) ***********************************
                Included in this section - Type, Colour, Location, Size, Control, etc
         ***************************************************************************** )

Comment ( ********************* Wagon Visual Effects *********************
                    Included in this section - Effect type, etc
         ****************************************************************** )

Effects(
     SpecialEffects(

Comment(==== Steam Heating Leaks ====)
 HeatingHoseFX(
  0.0 0.4 -8.8
  0 1 0
  0.13 )
 HeatingMainPipeSteamTrapFX(
  1.1 1.1 8.2
  0 -1 0
  0.05 )
 HeatingMainPipeSteamTrapFX(
  -1.1 1.1 8.2
  0 -1 0
  0.05 )

 HeatingCompartmentSteamTrapFX(
  1.1 1.1 6.30
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 6.30
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 4.20
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 4.20
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 2.10
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 2.10
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 0
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 0
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -2.10
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -2.10
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -4.20
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -4.20
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -6.30
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -6.30
  0 -1 0
  0.03 )

 ) )

Comment ( ******************** Freight Animations (If used) *******************
          Included in this section - Freight Animation information, etc
   ********************************************************************* )


Comment ( ********************* Passenger View (If used) ******************
          Included in this section - File, Location, Direction, etc
   ***************************************************************** )

Comment ( **************************** Wagon Heating (If used) ****************************
          Included in this section - Car Temperature set point, heating pipe dimensions, etc
          ********************************************************************************* )

ORTSHeatingCompartmentTemperatureSet ( 17 )
ORTSHeatingCompartmentPipeAreaFactor ( 2.00 )
ORTSHeatingWindowDeratingFactor ( 0.18 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 1.75in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )


Comment ( ********************** Micellaneous Information **********
                Included in this section - Name, Sounds, etc
    ********************************************************* )

Sound ("UK-bogiecoach-01.sms")

PassengerCapacity ( 56 )

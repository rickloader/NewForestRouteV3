
Comment ( LNER D113 Brake van Gangwayed )

Mass ( 32t-uk ) Comment ( Tare 29.0t-uk, Max load 8t-uk )
WheelRadius ( 21.75in )
NumWheels ( 4 )

Comment( *** Coupler Information *** )
Comment ( drophead buckeye coupling and Pullman gangways fitted )

Coupling (
Type ( automatic )
Spring (
Stiffness ( 1e6N/m 5e6N/m )
Break ( 750kN 750kN )
r0 ( -5cm 0cm )))

Comment ( *** Brakes *** )
BrakeEquipmentType ( "Vacuum_brake, Handbrake, Auxilary_reservoir" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce( 70kN ) Comment ( * Braked approx 70% tare mass * )
MaxHandBrakeForce ( 25kN )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
ORTSBrakeCylinderSize ( 21in )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )
Brakepipevolume ( 1.57ft^3 )
MaxReleaseRate ( 5.0 )
MaxApplicationRate ( 5.0 )
ORTSDirectAdmissionValve ( 0 )
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( * Cast Iron Brakeshoes * )

Comment ( ******************************* Friction ****************
          Included in this section - Friction, Bearing Type
   ********************************************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 469 )
ORTSDavis_B ( 4.6 )
ORTSDavis_C ( 1.01 )

ORTSWagonFrontalArea ( 90ft^2 )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.0m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 8ft 6in )

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
  0.0 0.4 -9.5
  0 1 0
  0.13 )
 HeatingMainPipeSteamTrapFX(
  1.1 1.1 9.0
  0 -1 0
  0.05 )
 HeatingMainPipeSteamTrapFX(
  -1.1 1.1 9.0
  0 -1 0
  0.05 )
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

ORTSHeatingCompartmentTemperatureSet ( 15 )
ORTSHeatingCompartmentPipeAreaFactor ( 3.00 )
ORTSHeatingWindowDeratingFactor ( 0.05 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 1.5in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )


Comment ( ********************** Micellaneous Information **********
                Included in this section - Name, Sounds, etc
    ********************************************************* )

Sound ("UK-bogiecoach-01end.sms")
PassengerCapacity ( 1 )

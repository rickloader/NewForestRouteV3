
Comment ( Bulleid 48 seat BSO - brake end trailing )

Mass ( 34t-uk ) Comment ( Tare 32t-uk )
WheelRadius ( 21.5in )
ORTSNumberAxles ( 4 )

Include ( ..\\Common_Carriages\\DropheadBuckeyeCoupling.inc )

Comment ( ******************************* Brakes *********************************************
                Included in this section - Type, Force, Reservoir, Applicatiion, Release. etc
         ************************************************************************************ )

BrakeEquipmentType ( "Handbrake, Vacuum_brake, Auxilary_reservoir" )
BrakeSystemType ( Vacuum_single_pipe )
MaxBrakeForce( 74kN ) Comment ( * Braked at 80% tare mass * )
MaxHandBrakeForce ( 20kN )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 25inHg )
ORTSNumberBrakeCylinders ( 2 )
ORTSBrakeCylinderSize ( 21in )
ORTSAuxilaryResCapacity ( 8.82ft^3 )
Brakepipevolume ( 1.51ft^3 )
MaxReleaseRate ( 2.5 )
MaxApplicationRate ( 2.5 )
ORTSDirectAdmissionValve ( 1 )
  
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( * Cast Iron Brakeshoes * )


Comment ( ******************************* Friction ****************
                Included in this section - Friction, Bearing Type
         ********************************************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 483 )
ORTSDavis_B ( 3.8 )
ORTSDavis_C ( 0.98 )

ORTSWagonFrontalArea ( 96ft^2 )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.0m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 8ft 0in )

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
  0.0 0.4 -10.0
  0 1 0
  0.13 )
 HeatingMainPipeSteamTrapFX(
  1.1 1.1 9.5
  0 -1 0
  0.05 )
 HeatingMainPipeSteamTrapFX(
  -1.1 1.1 9.5
  0 -1 0
  0.05 )

 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -2.75
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -2.75
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 5.00
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 5.00
  0 -1 0
  0.03 )
  ) )


Comment ( ********************* Passenger View (If used) ******************
                Included in this section - File, Location, Direction, etc
         ***************************************************************** )

Comment ( **************************** Wagon Heating (If used) ****************************
          Included in this section - Car Temperature set point, heating pipe dimensions, etc
          ********************************************************************************* )

ORTSHeatingCompartmentTemperatureSet ( 17 )
ORTSHeatingCompartmentPipeAreaFactor ( 2.6 )
ORTSHeatingWindowDeratingFactor ( 0.17 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 2.00in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )


Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

PassengerCapacity ( 48 )

Sound ( "UK-bogiecoach-01end.sms" )


Comment ( LMS D1745 TO - QF Period I all steel )

Mass ( 32t-uk ) Comment ( * Tare 30t-uk * )
WheelRadius ( 21.75in )
NumWheels ( 4 )

Include ( ..\\..\\Common_Carriages\\ScrewCoupling.inc )

Comment ( ******************************* Brakes *********************************************
            Included in this section - Type, Force, Reservoir, Applicatiion, Release. etc
     ************************************************************************************ )

BrakeEquipmentType ( "Vacuum_brake, Auxilary_reservoir" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce( 65kN ) Comment ( * Braked at 70% tare mass * )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
ORTSBrakeCylinderSize ( 18in )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 6.48ft^3 )
Brakepipevolume (1.51ft^3 )
MaxReleaseRate ( 5.0 )
MaxApplicationRate (5.0 )
ORTSDirectAdmissionValve ( 0 )
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( * Cast Iron Brakeshoes * )

Comment ( ******************************* Friction ****************
          Included in this section - Friction, Bearing Type
   ********************************************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 469 )
ORTSDavis_B ( 3.9 )
ORTSDavis_C ( 0.95 )

ORTSWagonFrontalArea ( 95ft^2 )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.0m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 9ft 0in )

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
  0.0 0.4 -9.0
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
  1.1 1.1 -3.84
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -3.84
  0 -1 0
  0.03 )

 HeatingCompartmentSteamTrapFX(
  1.1 1.1 2.88
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 2.88
  0 -1 0
  0.03 ) ) )


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
ORTSHeatingCompartmentPipeAreaFactor ( 2.5 )
ORTSHeatingWindowDeratingFactor ( 0.20 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 2.00in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )


Comment ( ********************** Micellaneous Information **********
                Included in this section - Name, Sounds, etc
    ********************************************************* )

Sound ("UK-bogiecoach-01.sms")
PassengerCapacity ( 56 )
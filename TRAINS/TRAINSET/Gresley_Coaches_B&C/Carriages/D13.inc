
Comment ( LNER D13 Triplet Restaurant Kitchen D12+D13+D14 )

Mass ( 25t-uk ) Comment ( Tare ~ 23.6t-uk = Triplet set total 83.4t-uk )
WheelRadius ( 21.75in )
NumWheels ( 2 )

Comment( *** Coupler Information *** )
Comment ( drophead buckeye coupling and Pullman gangways fitted )

Coupling (
Type ( automatic )
Spring (
Stiffness ( 1e6N/m 5e6N/m )
Break ( 750kN 750kN )
r0 ( -5cm 0cm )))

Comment ( *** Brakes *** )
BrakeSystemType ( "Vacuum_piped" )

Comment ( ******************************* Friction ****************
          Included in this section - Friction, Bearing Type
   ********************************************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 293 )
ORTSDavis_B ( 3.6 )
ORTSDavis_C ( 0.69 )

ORTSWagonFrontalArea ( 96ft^2 )
ORTSDavisDragConstant ( 0.0003 )

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

 HeatingCompartmentSteamTrapFX(
  1.1 1.1 0.65
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 0.65
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -2.53
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -2.53
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  1.1 1.1 -4.42
  0 -1 0
  0.03 )
 HeatingCompartmentSteamTrapFX(
  -1.1 1.1 -4.42
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
ORTSHeatingCompartmentPipeAreaFactor ( 2.75 )
ORTSHeatingWindowDeratingFactor ( 0.14 )
ORTSHeatingTrainPipeOuterDiameter (  2.875in  )
ORTSHeatingTrainPipeInnerDiameter ( 1.625in )
ORTSHeatingConnectingHoseOuterDiameter ( 2.05in )
ORTSHeatingConnectingHoseInnerDiameter ( 1.75in )


Comment ( ********************** Micellaneous Information **********
                Included in this section - Name, Sounds, etc
    ********************************************************* )

Sound ("UK-bogiecoach-11.sms")
PassengerCapacity ( 1 )

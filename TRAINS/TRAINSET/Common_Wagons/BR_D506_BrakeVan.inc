
Comment ( BR D504, D506 20 ton brake van Toad - CA003, CA005 )

Comment ( ******************** General Information ********************
            Included in this section - Type, Shape, Size, Mass, etc
          ************************************************************* )

Mass ( 20t-uk )
WheelRadius ( 19in )
ORTSNumberAxles ( 2 )
MaxVelocity ( 60mph )

Comment ( ************************* Coupler Information *************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
          *********************************************************************** )

Include ( ..\\Common_Wagons\\InstanterCoupling.inc )

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType( "Manual_brake, Handbrake" )
MaxReleaseRate ( 5 )
MaxApplicationRate ( 5 )
MaxBrakeForce ( 20kN )
MaxHandBrakeForce ( 20kN )
 
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )
     
Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, etc
          *************************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 296 )
ORTSDavis_B ( 7.2 )
ORTSDavis_C ( 0.39 )

ORTSWagonFrontalArea ( 90ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0002 )

CentreOfGravity ( 0.0m 1.9m 0.0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 16ft 0in )
ORTSUnbalancedSuperelevation ( 0in )


Comment ( ********************* Wagon Visual Effects *********************
                    Included in this section - Effect type, etc
         ****************************************************************** )

Effects (
 SpecialEffects (
  Comment ( == smoke from guard's stove == )
  WagonSmokeFX ( 0.78 3.75 1.04
                 0  1  0
                 0.05 ) ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )
 
PassengerCapacity ( 1.0 )
Sound ( "uk-swb-unfit-wag01.sms" )

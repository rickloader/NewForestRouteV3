
Comment ( SR 25 ton brake van )

Comment ( ******************** General Information ********************
            Included in this section - Type, Shape, Size, Mass, etc
          ************************************************************* )

Mass ( 25t-uk )
WheelRadius ( 18in )
ORTSNumberAxles ( 2 )

Comment ( ************************* Coupler Information *************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
          *********************************************************************** )

Include ( ..\\Common_Wagons\\3linkCoupling.inc )

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType( "Manual_brake, Handbrake" )
BrakeSystemType( "Manual_braking" )
MaxReleaseRate ( 5 )
MaxApplicationRate ( 5 )
MaxBrakeForce ( 25kN )
MaxHandBrakeForce ( 25kN )
 
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )
     
Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, etc
          *************************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 329 )
ORTSDavis_B ( 8.8 )
ORTSDavis_C ( 0.50 )

ORTSWagonFrontalArea ( 80ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0003 )

CentreOfGravity ( 0.0m 1.9m 0.0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 16ft 0in )
ORTSUnbalancedSuperelevation ( 0in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )
 
PassengerCapacity ( 1.0 )
Sound ( "uk-swb-unfit-wag01.sms" )

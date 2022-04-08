
Comment( **Based on LMS 2P 4-4-0 locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass  ( 54.05t-uk )
WheelRadius ( 21.5in )
ORTSNumberAxles ( 2 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Comment ( Rear Coupler )
Coupling (
Type ( Bar )
Spring ( Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 0cm 5cm ) )
CouplingHasRigidConnection ( 1 ))

Comment ( Front Coupler )
Coupling (
Type ( Chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 0cm 5cm )))


Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( "Vacuum_brake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 90kN )
Comment ( * braked 83% of mass on driving wheels, coefficient of friction 0.31 * )
Comment ( * loco and tender together braked at 52% WWO * )

ORTSBrakeCylinderSize ( 6in ) Comment ( Locomotive has steam brake  )
Comment ( Locomotive does not have vacuum reservoir. Steam brake is controlled mechanically. )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
MaxReleaseRate ( 10inHg/s ) Comment ( * Steam brake - releases faster than vacuum  *)
MaxApplicationRate ( 1.3inHg/s )  Comment ( * Steam brake - delay for pressure to build up in brake cylinder * )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 1576 )
ORTSDavis_B ( 70.9 )
ORTSDavis_C ( 4.30 )

ORTSWagonFrontalArea ( 81ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )


ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 9ft 6in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\Common.Sound\\BA_8F\\4Feng.sms" )

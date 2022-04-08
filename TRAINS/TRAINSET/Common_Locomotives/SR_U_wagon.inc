
Comment( **Based on SR U 2-6-0 locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.717m 3.930m 10.217m )
Mass  ( 61.85t-uk ) Comment ( SR new build 61.85t-uk, K-class rebuilds 63.0t-uk )
WheelRadius ( 18.5in )
ORTSNumberAxles ( 1 )

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

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 133kN ) Comment ( * braked approx 70% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 6.25in ) Comment ( Locomotive has steam brake, tender has vacuum brake  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 0.90ft^3 ) Comment ( Vacuum reservoir used for control of steam brake )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.85ft^3 )
MaxReleaseRate ( 10inHg/s )   Comment( *Steam Brake-releases faster than vacuum* )
MaxApplicationRate ( 1.3inHg/s )   Comment( *Steam Brake-delay for pressure to build up in brake cylinder* )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( * Locomotive fitted with steam brake, tender fitted with vacuum brake * )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3583 )
ORTSDavis_B ( 105 )
ORTSDavis_C ( 4.49 )

Comment ( K class rebuilds A=3659, B=108; SR new build A=3583, B=105 )

ORTSWagonFrontalArea ( 85ft^2 )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 1.96m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 15ft 0in )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
*********************************************************************** )

Effects(
SpecialEffects(

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
-0.3 0.8 4.8
0 1 0
0.16 )

 ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\LMS-Hughes_eng.sms" )

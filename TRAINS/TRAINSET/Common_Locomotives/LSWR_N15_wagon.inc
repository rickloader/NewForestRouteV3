
Comment( **Based on original LSWR N15 4-6-0 locomotive ** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass  ( 80.35t-uk )
WheelRadius ( 21.5in )
ORTSNumberAxles  ( 2 )

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

Comment ( Locomotive fitted with vacuum brake )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 91kN ) Comment ( * braked approx 50% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 24in )
ORTSNumberBrakeCylinders ( 1 )
ORTSAuxilaryResCapacity ( 5.76ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.96ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3778 )
ORTSDavis_B ( 108 )
ORTSDavis_C ( 5.13 )

ORTSWagonFrontalArea ( 97ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 1.96m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 14ft 6in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\common.sound\\LMS-Crab\\LMS-Hughes_eng.sms"  )


Comment( **Based on BR Class 4MT 2-6-4T locomotive ** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.795m 3.964m 13.707m )
Mass  ( 86.65t-uk )
WheelRadius ( 18in )
ORTSNumberAxles ( 3 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

   Coupling (
        Type ( Chain )
        Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Break ( 1200kN 1200kN )
			r0 ( 0cm 5cm )))

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( "Vacuum_brake, Auxilary_reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 118kN ) Comment ( * braked 44.2% of mass, coefficient of friction 0.3 * )
MaxHandBrakeForce ( 50kN )

ORTSBrakeCylinderSize ( 6in ) Comment ( Locomotive has steam brake  )
ORTSAuxilaryResCapacity ( 0.90ft^3 ) Comment ( Vacuum reservoir used for control of steam brake )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
MaxReleaseRate ( 10inHg/s ) Comment ( * Steam brake - releases faster than vacuum * )
MaxApplicationRate ( 1.3inHg/s )  Comment ( * Steam brake - delay for pressure to build up in brake cylinder * )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 4304 )
ORTSDavis_B ( 112 )
ORTSDavis_C ( 5.82 )

ORTSWagonFrontalArea ( 93ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 2.09m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 15ft 4in )


Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\BR-Standard_eng.sms" )
IntakePoint ( 0.9 2.64 FuelWater )
IntakePoint ( -0.9 5.59 FuelCoal )

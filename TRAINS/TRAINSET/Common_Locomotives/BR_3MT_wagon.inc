
Comment ( ***Wagon Section*** )

Comment( **Based on BR Class 3MT 2-6-0 locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass  ( 57.5t-uk )
WheelRadius ( 18in )
ORTSNumberAxles ( 1 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Comment ( Rear Coupler )
   Coupling (
        Type ( Bar )
        Spring ( 	Stiffness ( 1e4N/m 4.5e6N/m )
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

Comment ( * locomotive is steam braked * )

BrakeEquipmentType( "Vacuum_brake, Auxilary_reservoir" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 110kN ) Comment ( * braked approx 75% of mass on driving wheels, coefficient of friction 0.3 * )

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

ORTSDavis_A ( 3222 )
ORTSDavis_B ( 109 )
ORTSDavis_C ( 5.82 )

ORTSWagonFrontalArea ( 93ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.146 )

CentreOfGravity ( 0m 2.09m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 15ft 4in )

 Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\BR-Standard_eng.sms" )

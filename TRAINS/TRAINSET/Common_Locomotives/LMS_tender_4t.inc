
Comment ( LMS 4 ton 3500 gallon tender )

Comment ( *** General *** )

Mass (41.2t-uk )
comment( 41.2t-uk full, 21.6t-uk empty, Coal 4t-uk, Water 15.6t-uk )
ORTSNumberAxles ( 3 )
WheelRadius ( 25.5in )

ORTSTenderWagonCoalMass ( 4t-uk )
ORTSTenderWagonWaterMass ( 35000lb )

Comment ( ****************** Coupler Information ******************* )
Comment ( * Rear Coupler * )
Coupling (
Type ( Chain )
Spring (
Stiffness ( 1e6N/m 2e6N/m )
Break ( 1500kN 1500kN )
r0 ( 0cm 10cm )))
Comment ( * Front Coupler * )
Coupling (
Type ( Bar )
Spring (
Stiffness ( 1e6N/m 5e6N/m )
Break ( 1800kN 1800kN )
r0 ( 0cm 10cm ))
CouplingHasRigidConnection ( 1 ))

Comment( *********************** Friction ************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 663 )
ORTSDavis_B ( 14.8 )
ORTSDavis_C ( 0.85 )

Comment ( * Friction estimated by Davis method * )

ORTSWagonFrontalArea ( 77ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.890m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 13ft 0in )

Comment ( *********************** Brakes **************************** )

BrakeEquipmentType( "Vacuum_brake, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 63kN ) Comment ( * braked approx 95% of empty mass, CoF 0.31 * )
MaxHandBrakeForce ( 21kN )

ORTSNumberBrakeCylinders ( 1 )
ORTSBrakeCylinderSize ( 8.5in ) Comment ( Locomotive has steam brake  )
Brakepipevolume ( 0.81ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ********************* Miscellaneous Information ***************************** )

   IntakePoint ( -2.426 0.4 FuelWater )
   IntakePoint ( 0.61 1.7 FuelCoal )
   Sound ( "..\\..\\common.sound\\LMS-Jubilee\\LMS-Jubilee_eng-tender.sms"  )

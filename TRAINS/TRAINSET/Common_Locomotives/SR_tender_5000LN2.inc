
Comment ( SR 5000 gallon bogie tender for Lord Nelson - later type )

Comment ( *** General *** )

Mass ( 57.95t-uk )
comment( 57.95t-uk full, 30.75t-uk empty, Coal 5.0t-uk, Water 22.2t-uk, )
ORTSNumberAxles ( 4 )
WheelRadius ( 21.5in )

ORTSTenderWagonCoalMass ( 5.0t-uk )
ORTSTenderWagonWaterMass ( 50000lb )

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
ORTSDavis_A ( 932 )
ORTSDavis_B ( 20.8 )
ORTSDavis_C ( 0.80 )

Comment ( * Friction estimated by Davis method * )

ORTSWagonFrontalArea ( 72ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.890m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 6ft 6in )

Comment ( *********************** Brakes **************************** )

BrakeEquipmentType( "Vacuum_brake, Auxilary_Reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 82kN ) Comment ( * braked approx 90% of tare mass, CoF 0.31 * )
MaxHandBrakeForce ( 25kN )

ORTSBrakeCylinderSize ( 21in ) Comment ( guess  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 5.0InHg/s )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ********************* Miscellaneous Information ***************************** )

   IntakePoint ( -2.426 0.4 FuelWater )
   IntakePoint ( 0.61 1.7 FuelCoal )
   Sound ( "..\\..\\common.sound\\uk_shared\\UK-tender01.sms"  )

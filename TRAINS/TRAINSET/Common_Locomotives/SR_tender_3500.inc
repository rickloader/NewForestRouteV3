
Comment ( SR 3500 gallon tender )

Comment ( *** General *** )

Mass ( 40.5t-uk )
comment( 40.5t-uk full, 19.9t-uk empty, Coal 5t-uk, Water 15.6t-uk, diagram gives 20.75t-uk empty! )
ORTSNumberAxles ( 3 )
WheelRadius ( 21.5in )

ORTSTenderWagonCoalMass ( 5.0t-uk )
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
ORTSDavis_A ( 652 )
ORTSDavis_B ( 14.5 )
ORTSDavis_C ( 0.61 )

ORTSWagonFrontalArea ( 66ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0m 1.890m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 13ft 0in )

Comment ( *********************** Brakes **************************** )

BrakeEquipmentType( "Vacuum_brake, Auxilary_Reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 55kN ) Comment ( * braked approx 90% of tare mass, CoF 0.31 * )
MaxHandBrakeForce ( 16kN )

ORTSBrakeCylinderSize ( 21in ) Comment ( guess  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 5.0InHg/s )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
0.3 0.9 -3.2
0 1 0
0.16 )

 ) )

Comment ( ********************* Miscellaneous Information ***************************** )

   IntakePoint ( -2.426 0.4 FuelWater )
   IntakePoint ( 0.61 1.7 FuelCoal )
   Sound ( "..\\..\\Common.Sound\\LMS-Crab\\LMS-Hughes_eng-tender.sms" )

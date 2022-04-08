
Comment ( SR Q1 tender )

Comment ( *** General *** )

Size ( 2.80m 3.98m 6.75m )
Mass ( 38.0t-uk )
comment( 38.0t-uk full, 16.5t-uk empty*, Coal 5t-uk, Water 16.5t-uk - diagram gives 16.0t-uk empty so assume 0.5t-uk for tools etc. )
ORTSNumberAxles ( 3 )
WheelRadius ( 21.5in )

ORTSTenderWagonCoalMass ( 5.0t-uk )
ORTSTenderWagonWaterMass ( 37000lb )

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

Comment ( *********************** Brakes **************************** )

BrakeEquipmentType( "Vacuum_brake, Auxilary_Reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 45kN ) Comment ( * braked approx 90% of tare mass, CoF 0.31 * )
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

Comment( *********************** Friction ************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 613 )
ORTSDavis_B ( 13.6 )
ORTSDavis_C ( 0.75 )

ORTSWagonFrontalArea ( 92ft^2 )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.890m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 13ft 0in )

Comment ( ************************ Lights (If used) ************************
                Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

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

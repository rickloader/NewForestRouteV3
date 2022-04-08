
Comment ( MR 4 ton 3250 gallon 6-wheel Johnson tender )

Comment ( Johnson 4t 3500g tender 41.65t-uk full, 22.0t-uk empty, Coal 4t-uk, Water 15.65t-uk from official diagram )
Comment ( Johnson 4t 3250g tender 39.6t-uk full, 21.0t-uk empty, Coal 4t-uk, Water 14.6t-uk guess )
Comment ( Johnson 4t 2950g tender 37.2t-uk full, 20.0t-uk empty, Coal 4t-uk, Water 13.2t-uk guess )
Comment ( Johnson 4t 2750g tender 35.5t-uk full, 19.2t-uk empty, Coal 4t-uk, Water 12.3t-uk guess )
Comment ( Kirtley 2.5t 2000g tender 26.55t-uk full, 15.1t-uk empty, Coal 2.5t-uk, Water 8.95t-uk from official diagram )

Comment ( *** General *** )

Size ( 2.528m 3.044m 6.300m )
Mass (39.6t-uk )
Comment ( Johnson 4t 3250g tender 39.6t-uk full, 21.0t-uk empty, Coal 4t-uk, Water 14.6t-uk guess )
ORTSNumberAxles ( 3 )
WheelRadius ( 25.5in )

ORTSTenderWagonCoalMass ( 4t-uk )
ORTSTenderWagonWaterMass ( 32500lb )

Comment ( ****************** Coupler Information ******************* )
Comment ( * Rear Coupler * )
Coupling (
Type ( Chain )
Spring (
Stiffness ( 1e6N/m 2e6N/m )
Break ( 1500kN 1500kN )
r0 ( 0cm 5cm )))
Comment ( * Front Coupler * )
Coupling (
Type ( Bar )
Spring (
Stiffness ( 1e6N/m 5e6N/m )
Break ( 1800kN 1800kN )
r0 ( 0cm 5cm ))
CouplingHasRigidConnection ( 1 ))

Comment( *********************** Friction ************************* )

ORTSBearingType ( Friction )
ORTSDavis_A ( 638 )
ORTSDavis_B ( 14.2 )
ORTSDavis_C ( 0.52 )

ORTSWagonFrontalArea ( 60ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.890m 0.07m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelBase ( 13ft 0in )

Comment ( *********************** Brakes **************************** )

BrakeEquipmentType( "Vacuum_brake, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 61kN ) Comment ( * braked approx 95% of empty mass, CoF 0.31 * )
MaxHandBrakeForce ( 20kN )

ORTSNumberBrakeCylinders ( 1 )
ORTSBrakeCylinderSize ( 8.5in ) Comment ( Locomotive has steam brake  )
Brakepipevolume ( 0.81ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
-0.2 0.5 -3.0
0 1 0
0.16 )

SteamBrakeFX (
0.65 0.3 2.5
0.5 -1 0
0.10 )

SteamBrakeFX (
-0.65 0.3 2.5
-0.5 -1 0
0.10 )

 ) )

Comment ( ********************* Miscellaneous Information ***************************** )

   IntakePoint ( -2.426 0.4 FuelWater )
   IntakePoint ( 0.61 1.7 FuelCoal )
   Sound ( "..\\..\\common.sound\\LMS-Jubilee\\LMS-Jubilee_eng-tender.sms"  )

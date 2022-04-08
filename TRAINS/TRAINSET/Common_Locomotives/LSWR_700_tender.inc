
Comment ( LSWR 700 class tender )

Comment ( ******************** General Information ********************
                Included in this section - Type, Shape, Size, Mass, etc
          *************************************************************** )

Size ( 2.45m 2.85m 7.55m )
Mass ( 39.6t-uk )
comment( 39.6t-uk full, 20.0t-uk empty, Coal 4.0t-uk, Water 15.6t-uk )
ORTSNumberAxles ( 3 )
WheelRadius ( 24in )

Comment ( ************************* Coupler Information *************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
          *********************************************************************** )

Comment( == Rear Coupler == )
Coupling (
Type ( Chain )
Spring (
Stiffness ( 1e6N/m 2e6N/m )
Damping ( 1e6N/m 1e6N/m )
Break ( 1220kN 1220kN )
r0 ( 0cm 5cm ) ) )

Comment( == Front Coupler == )
Coupling (
Type ( Bar )
Spring (
Stiffness ( 1e7N/m 1e7N/m )
Damping ( 0.2e7N/m 0.2e7N/m )
Break ( 1800kN 1800kN )
r0 ( 0cm 5cm ) ) )

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release. etc
          *********************************************************************** )

BrakeEquipmentType ( "Vacuum_brake, Auxilary Reservoir, Handbrake" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce ( 55kN ) comment( * braked approx 90% tare, CoF 0.31 * )
MaxHandbrakeForce ( 45kN )

ORTSBrakeCylinderSize ( 18in ) Comment ( guess  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 6.48ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 5.0InHg/s )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation **************************
                Included in this section - Wheelbase, gauge, etc
          *********************************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 638 )
ORTSDavis_B ( 14.2 )
ORTSDavis_C ( 0.65 )

ORTSWagonFrontalArea ( 65ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0005 )

CentreOfGravity ( 0.0m 2.0m -0.004m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 13ft 0in )
ORTSUnbalancedSuperelevation ( 6in )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
-0.2 0.5 -3.2
0 1 0
0.16 )

 ) )
 
Comment ( ******************** Freight and Load Animations (If used) ********************
                Included in this section - Freight Animation information, etc
          *********************************************************************** )

comment( 39.6t-uk full, 20.0t-uk empty, Coal 4.0t-uk, Water 15.6t-uk )

ORTSFreightAnims (

MSTSFreightAnimEnabled (1)

WagonEmptyWeight( 20.0t-uk )
EmptyORTSDavis_A ( 330 )
EmptyORTSDavis_B ( 7.2 )
EmptyORTSDavis_C ( 0.73 )
EmptyCentreOfGravity_Y ( 1.2 )

FreightAnimContinuous (
FreightWeightWhenFull( 19.6t-uk )
ORTSDavis_A ( 638 )
ORTSDavis_B ( 14.2 )
ORTSDavis_C ( 0.65 )
FullCentreOfGravity_Y ( 1.5 ) )
 )

FreightAnim ( LSW700coal.s 0.85 0 )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )

IntakePoint ( -3.03 0.5 FuelWater )
IntakePoint ( 0.6 2.5 FuelCoal )
    
Sound ( "..\\..\\common.sound\\uk_shared\\UK-tender01.sms" )

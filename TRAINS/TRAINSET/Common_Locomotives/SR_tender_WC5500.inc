
Comment ( SR West Country 5500 gallon tender )

Comment ( ******************** General Information ********************
                Included in this section - Type, Shape, Size, Mass, etc
          *************************************************************** )

Mass ( 47.25t-uk )
comment( 47.25t-uk full, 17.7t-uk empty, Coal 5.0t-uk, Water 24.55t-uk )
ORTSNumberAxles ( 3 )
WheelRadius ( 21.5in )


ORTSTenderWagonCoalMass ( 5.0t-uk )
ORTSTenderWagonWaterMass ( 24.55t-uk )

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
MaxBrakeForce ( 71kN ) comment( * 23.17t-uk pull, CoF 0.31 * )
MaxHandbrakeForce ( 36kN )

ORTSBrakeCylinderSize ( 21in ) Comment ( Tender has vacuum brake  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 5.0InHg/s )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation **************************
                Included in this section - Wheelbase, gauge, etc
          *********************************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 758 )
ORTSDavis_B ( 16.9 )
ORTSDavis_C ( 0.70 )

ORTSWagonFrontalArea ( 99ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0.0m 2.0m 0.0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 13ft 0in )
ORTSUnbalancedSuperelevation ( 6in )

Comment ( ************************ Lights (If used) ************************
                Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment(==== Steam Heating Hose Leak ====)
HeatingHoseFX(
-0.18 0.4 -3.25
0 1 0
0.16 )

 ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )

IntakePoint ( -2.60 0.69 FuelWater )
IntakePoint ( 0.60 3.88 FuelCoal )

Sound (	"..\\..\\Common.Sound\\Bulleid_LightPacific\\blp-engpas01.sms" )

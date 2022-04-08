
Comment ( Based on BR1B tender )

Comment ( ******************** General Information ********************
                Included in this section - Type, Shape, Size, Mass, etc
          *************************************************************** )

Mass ( 51.25t-uk )
comment( 51.25t-uk full, 23.15t-uk empty, Coal 7t-uk, Water 21.1t-uk )
ORTSNumberAxles ( 3 )
WheelRadius ( 19.75in )

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

BrakeEquipmentType ( "Vacuum_brake, Handbrake" )
BrakeSystemType ( "Vacuum_single_pipe" )
MaxBrakeForce ( 90kN ) comment( braked approx 55% WWO )
MaxHandbrakeForce ( 50kN )

ORTSBrakeCylinderSize ( 6in ) Comment ( Tender has steam brake  )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
MaxReleaseRate ( 10.0inHg/s ) Comment ( * Steam brake - reacts faster than vacuum * )
MaxApplicationRate ( 1.0inHg/s ) Comment ( * Steam brake - delay for pressure to build up in brake cylinder * )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation **************************
                Included in this section - Wheelbase, gauge, etc
          *********************************************************************** )

ORTSBearingType ( Roller )

ORTSDavis_A ( 821 )
ORTSDavis_B ( 18.4 )
ORTSDavis_C ( 0.64 )

ORTSWagonFrontalArea ( 93ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0003 )

CentreOfGravity ( 0.0m 2.0m 0.0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSRigidWheelbase ( 14ft 0in )
ORTSUnbalancedSuperelevation ( 6in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )

IntakePoint ( -2.54 0.69 FuelWater )
IntakePoint ( 0.60 3.88 FuelCoal )

Sound ( "..\\..\\Common.Sound\\LMS-Crab\\LMS-Hughes_eng-tender.sms" )


Comment( **Based GWR 1366 Class locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Comment ( Mass of coal 2.15t-uk, Mass of water 3.7t-uk, Mass with fuel 35.75t-uk, Mass without fuel 29.9t-uk )
Mass ( 35.75t-uk )
ORTSNumberAxles ( 0 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Coupling (
Type ( chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 20cm )))

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( "Vacuum_brake, Auxilary_reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 75kN )  Comment ( estimate braked approx 70% adhesive mass, CoF 0.31 )
MaxHandBrakeForce ( 30kN )

ORTSNumberBrakeCylinders ( 2 )
Comment ( Assumes 1 x 30in cylinder with 9in stroke )
Comment ( OpenRails assumes 4.5in stroke so this is set as two cylinders )
ORTSBrakeCylinderSize ( 30in )
ORTSAuxilaryResCapacity ( 8.25ft^3 ) Comment ( Based on Phillipson 16.5ft^3 vacuum chamber for 30in x 9in vacuum cylinder )

MaxReleaseRate ( 2.5InHg/s )
MaxApplicationRate ( 2.0InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 25InHg )
BrakePipeVolume ( 0.65ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )
ORTSDavis_A ( 2494 )
ORTSDavis_B ( 115 )
ORTSDavis_C ( 4.62 )

ORTSWagonFrontalArea ( 74ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 1.94m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 11ft 0in )

Comment ( ********************** Micellaneous Information **********
              Included in this section - Name, Sounds, etc
  ********************************************************* )

IntakePoint ( 1.76 3.00 FuelWater )
IntakePoint ( -5.34 3.88 FuelCoal )

Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Ext-01.sms" )

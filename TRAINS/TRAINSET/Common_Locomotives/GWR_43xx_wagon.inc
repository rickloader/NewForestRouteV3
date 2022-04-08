
Comment( **Based on GWR 43xx Class locomotive with 1923-1955 standard 4 boiler** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass ( 62t-uk )
WheelRadius ( 19in )
ORTSNumberAxles ( 1 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Comment ( Rear Coupler )
Coupling (
Type ( bar )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 10cm ) )
CouplingHasRigidConnection ( 1 ) )

Comment ( Front Coupler )
Coupling (
Type ( chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 20cm ) ) )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 118kN ) Comment ( * braked approx 75% of mass on driving wheels, coefficient of friction 0.31 * )

ORTSNumberBrakeCylinders ( 2 )
Comment ( Assumes 1 x 30in cylinder with 9in stroke )
Comment ( OpenRails assumes 4.5in stroke so this is set as two cylinders )
ORTSBrakeCylinderSize ( 30in )
ORTSAuxilaryResCapacity ( 16.50ft^3 ) Comment ( Based on Phillipson 16.5ft^3 vacuum chamber for 30in x 9in vacuum cylinder )

MaxReleaseRate ( 2.5InHg/s )
MaxApplicationRate ( 2.0InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 25InHg )
BrakePipeVolume ( 0.87ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

  ORTSBearingType ( Friction )
  ORTSDavis_A ( 3501 )
  ORTSDavis_B ( 110 )
  ORTSDavis_C ( 5.87 )

  ORTSWagonFrontalArea ( 94ft^2 ) Comment ( * Estimate based on dimensions * )
  ORTSDavisDragConstant ( 0.0028 )
  ORTSTrailLocomotiveResistanceFactor ( 0.147 )

  CentreOfGravity ( 0m 2.08m 0m )
  ORTSTrackGauge ( 4ft 8.5in )
  ORTSUnbalancedSuperelevation ( 6in )
  ORTSRigidWheelbase ( 14ft 9in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Ext-01.sms" )

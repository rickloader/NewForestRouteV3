
Comment ( BR D352, D353 8 ton cattle van Oxfit - VC )

Comment ( ******************** General Information **********************
              Included in this section - Type, Shape, Size, Mass, etc
       *************************************************************** )

WheelRadius ( 18.75in )
ORTSNumberAxles ( 2 )

Include ( ..\\Common_Wagons\\ScrewCoupling.inc )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 16kN ) Comment ( * 5t, coefficient of friction 0.31 * )
MaxHandBrakeForce ( 5kN ) Comment ( * hand lever * )

ORTSNumberBrakeCylinders ( 1 )
ORTSBrakeCylinderSize ( 18in )
ORTSAuxilaryResCapacity ( 3.24ft^3 )

MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 2.5InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21InHg )
BrakePipeVolume ( 0.55ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_C ( 0.69 )

ORTSWagonFrontalArea ( 83ft^2 )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.3m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 11ft 0in )

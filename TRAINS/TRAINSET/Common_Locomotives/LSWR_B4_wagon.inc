
Comment( **Based on LSWR B4 Class 0-4-0T locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass ( 33.4t-uk )
ORTSNumberAxles ( 0 )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

Comment ( Locomotive brake type not known - assumed to be steam braked )
Comment ( Early locos steam brake only, later locos with vacuum train brake )

BrakeEquipmentType( Vacuum_brake, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 50kN ) Comment ( * guess braked approx 50% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 6in ) Comment ( * guess *  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 6.48ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )


Comment ( **************************** Resistance & SuperElevation ***************************
                        Included in this section - Wheelbase, gauge, friction, etc
         ************************************************************************************ )

ORTSBearingType ( Friction )

ORTSDavis_A ( 1667 )
ORTSDavis_B ( 74.9 )
ORTSDavis_C ( 3.38 )

ORTSWagonFrontalArea ( 64ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
CentreofGravity ( 0m 1.7m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 7ft 0in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "..\\..\\common.sound\\Baldwin_Tram\\LSWR_B4_eng.sms" )
 IntakePoint ( -3.9 2.0 FuelCoal )
 IntakePoint (  -1.0 3.0 FuelWater )

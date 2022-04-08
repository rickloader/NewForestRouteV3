
Comment( **Based on original Merchant Navy Class locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Mass ( 94.75t-uk )
WheelRadius ( 18.5in ) Comment ( leading wheels 18.5in trailing wheels 21.5in )
ORTSNumberAxles ( 3 )

Comment ( ******************************** Coupler Information *******************************
                  Included in this section - Type, Spring, Buffer, Velocity, etc
         ************************************************************************************ )

Comment ( Rear Coupler )
Coupling ( Spring ( Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 10cm ) )
CouplingHasRigidConnection ( 1 ))

Comment ( Front Coupler )
Coupling ( Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 10cm )))

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 158kN ) Comment ( * 51.25t-uk pull, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 6.25in ) Comment ( Locomotive has steam brake, tender has vacuum brake  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 0.90ft^3 ) Comment ( Vacuum reservoir used for control of steam brake )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 1.18ft^3 )
MaxReleaseRate ( 10inHg/s )   Comment( *Steam Brake-releases faster than vacuum* )
MaxApplicationRate ( 1.3inHg/s )   Comment( *Steam Brake-delay for pressure to build up in brake cylinder* )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( * Locomotive fitted with steam brake, tender fitted with vacuum brake * )


Comment ( **************************** Resistance & SuperElevation ***************************
                        Included in this section - Wheelbase, gauge, friction, etc
         ************************************************************************************ )

Comment ( Resistance of rebuilt locomotive and tender from BR test report - A = 7606, B = 26.5, C = 8.69 )
Comment ( Resistance of original locomotive estimated from this )

ORTSBearingType ( Friction )

ORTSDavis_A ( 4858 )
ORTSDavis_B ( 32.6 )
ORTSDavis_C ( 7.37 )

ORTSWagonFrontalArea ( 99ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
  CentreOfGravity ( 0m 2m 0m )
  ORTSTrackGauge ( 4ft 8.5in )
  ORTSUnbalancedSuperelevation ( 6in )
  ORTSRigidWheelbase ( 15ft 0in )
 
Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "..\\..\\common.sound\\Bullied_LightPacific\\blp-eng01.sms" )

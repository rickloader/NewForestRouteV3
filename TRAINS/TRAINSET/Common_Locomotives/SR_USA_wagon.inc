
Comment( **Based on SR USA Class 0-6-0T locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Comment ( Mass loaded 100650lb, mass without fuel and water 88150lb, coal 2500lb, water 1200g-us = 10000lb )

Mass ( 100650lb )
ORTSNumberAxles ( 0 )

Comment ( ******************************** Coupler Information *******************************
                  Included in this section - Type, Spring, Buffer, Velocity, etc
         ************************************************************************************ )

Coupling ( Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 0cm 10cm )))

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

Comment ( Locomotive designed with steam brake )
Comment ( Operation of vacuum train brakes assumed similar to Bullied locos )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 70kN ) Comment ( * guess braked approx 50% of adhesive mass * )

ORTSBrakeCylinderSize ( 6in ) Comment ( Locomotive has steam brake, tender has vacuum brake  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 0.90ft^3 ) Comment ( Vacuum reservoir used for control of steam brake )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 1.18ft^3 )
MaxReleaseRate ( 10inHg/s )   Comment( *Steam Brake-releases faster than vacuum* )
MaxApplicationRate ( 1.3inHg/s )   Comment( *Steam Brake-delay for pressure to build up in brake cylinder* )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )


Comment ( **************************** Resistance & SuperElevation ***************************
                        Included in this section - Wheelbase, gauge, friction, etc
         ************************************************************************************ )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3140 )
ORTSDavis_B ( 117 )
ORTSDavis_C ( 5.42 )

ORTSWagonFrontalArea ( 87ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
CentreOfGravity ( 0m 2m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 10ft 0in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

IntakePoint ( -3.80 1 FuelCoal )
IntakePoint ( 0.28 1.0 FuelWater )    

Sound ("..\\..\\common.sound\\Baldwin_Tram\\USA_eng.sms" )

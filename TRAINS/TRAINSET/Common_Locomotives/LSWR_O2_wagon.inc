
Comment( **Based on LSWR O2 Class 0-4-4T locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Comment ( Mass full 46.9t-uk, without fuel and water 41.8t-uk, coal 1.5t-uk, water 800g-uk = 3.6t-uk )
Comment ( Adhesive mass with full fuel and water = 30.5t-uk )

Mass ( 46.9t-uk )
WheelRadius ( 18in )
ORTSNumberAxles ( 2 )

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

Comment ( Locomotive brake type not known - assumed to be vacuum braked )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 47kN ) Comment ( * guess braked approx 50% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 21in ) Comment ( * guess *  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.85ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )


Comment ( **************************** Resistance & SuperElevation ***************************
                        Included in this section - Wheelbase, gauge, friction, etc
         ************************************************************************************ )

ORTSBearingType ( Friction )

ORTSDavis_A ( 1966 )
ORTSDavis_B ( 60.3 )
ORTSDavis_C ( 5.10 )

ORTSWagonFrontalArea ( 82ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
CentreOfGravity ( 0m 2m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 6ft 10in )

 Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

 Lights ( 11
  
Light(
comment( Flickering firebox )
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 0 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.5 )
LightColour ( eeff8800 )
Position ( 0 1.8 -1.8 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.3 )
)
State(
Duration ( 0.3 )
LightColour ( eeff8800 )
Position ( 0 1.8 -1.8 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.3 )

)

)
)
Light ( 
                  comment( Ashpan flashes ) 
Type ( 0 ) 
Conditions ( 
Headlight ( 3 ) 
Unit ( 0 ) 
) 
Cycle ( 0 ) 
FadeIn ( 0 )
FadeOut ( 0.5 ) 
States ( 28 
State ( 
Duration ( 1 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 01.4 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.4 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.25 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.25 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 3 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.25 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -1.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
                  )
               )
          )
Light ( 
                  comment( Chimney Sparks RS1AA ) 
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.5 ) 
States ( 28 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.42 3.37 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.72 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.52 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.72 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.92 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.32 3.37 )
  
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.52 3.37 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.92 3.37 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.226 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.35 3.37 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.55 3.37 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.25 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.37 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.37 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 00000000 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.225 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.233 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( 0 9.22 3.37 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
                  )
               )
          )

Light ( 
                  comment( Chimney Sparks RS1AA ) 
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.5 ) 
States ( 28 
State ( 
Duration ( 0.3 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.7 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 7.22 2.7 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.7 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.234 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.7 )
  
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.7 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.234 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.7 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.2235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 8.22 2.7 )
 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.7 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0 9.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.7 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 5.22 2.7 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.72 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.72 )
 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.72 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 2.72 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.72 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.72 )
 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
                  )
               )
          )

Light ( 
                  comment( Chimney Sparks AA1 ) 
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.5 ) 
States ( 28 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.0 2.7 )
  
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.0 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 8.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 8.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 00000000 ) 
Position ( 0.0 8.5 2.7 ) 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 3 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 8.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 8.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 )
Position ( 0.0 6.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 8.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.0 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
                  )
               )
          )

Light ( 
                  comment( Chimney Sparks AA ) 
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.5 ) 
States ( 28 
State ( 
Duration ( 0.3 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 )
  
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.236 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 3 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 ) 
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 ) 
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 6.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 )
Position ( 0.0 5.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0.0 7.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 7.5 2.7 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0.0 5.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 4.5 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( 0.0 4.50 2.7 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
                  )
               )
          )

Light(
comment( Flickering Ashpan Front )
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0.975 )
FadeOut( 0.975 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.645 -0.75 )
Azimuth ( -90 -90 -90 )
Transition ( 0 )
Radius ( 1.3 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.62 -0.75 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.3 )

)
)
)

Light(
comment( Flickering Ashpan Front )
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 2 )
)
FadeIn( 0.75 )
FadeOut( 0.75 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -0.75 )
Azimuth ( 45 45 45 )
Transition ( 0 )
Radius ( 1.35 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -0.75 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.35 )

)
)
)

Light(
comment( Flickering Ashpan Front )
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 1.95 )
FadeOut( 1.95 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -0.75 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.34 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -0.75 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.34 )

)
)
)

Light(
comment( Flickering Ashpan Front Leading )
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 2 )
)
FadeIn( 1.5 )
FadeOut( 1.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0.0 0.652 -0.75 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 1.34 )
Elevation ( -10 -10 -10 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0.0 0.652 -0.75 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 1.34 )
Elevation ( -10 -10 -10 )
)
)
)

Light(
comment( Flickering Ashpan Back )
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 0 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.643 -1.25 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.643 -1.25 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )

)
)
)

)

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment(==== Steam Heating Leaks ====)
HeatingHoseFX(
0.5 0.6 4.4
0 1 0
0.13 )
HeatingHoseFX(
0.5 0.6 -4.4
0 1 0
0.13 ) ) )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Feng.sms" )
      IntakePoint ( -4.11 3.27 FuelCoal )
      IntakePoint ( 1.19 3.16 FuelWater )

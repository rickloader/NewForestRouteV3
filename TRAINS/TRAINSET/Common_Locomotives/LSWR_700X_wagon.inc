
Comment( **Based on Rebuilt LSWR 700 Class locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.432m 3.927m 8.780m )
Mass ( 46.7t-uk )
ORTSNumberAxles ( 0 )

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
MaxBrakeForce( 101kN ) Comment ( * guess braked approx 70% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 21in ) Comment ( * guess *  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( * Assume locomotive and tender fitted with vacuum brake * )


Comment ( **************************** Resistance & SuperElevation ***************************
                        Included in this section - Wheelbase, gauge, friction, etc
         ************************************************************************************ )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3258 )
ORTSDavis_B ( 108 )
ORTSDavis_C ( 3.53 )

ORTSWagonFrontalArea ( 66ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
CentreOfGravity ( 0m 2m -0.054m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 16ft 6in )

Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Lights ( 3
Light (
comment( Flickering firebox )
Type  ( 0 )
Conditions (
Headlight ( 0 )
Unit ( 0 )
)
FadeIn ( 0.5 )
FadeOut ( 0.5 )
Cycle ( 0 )
States ( 2
State (
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 1.9 -3.11 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.5 )
)
State (
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 1.9 -3.11 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
   
  )
)
)

Light (
comment( Flickering Ashpan Back )
Type  ( 0 )
Conditions (
Headlight ( 0 )
Unit ( 0 )
)
FadeIn ( 0.5 )
FadeOut ( 0.5 )
Cycle ( 0 )
States ( 2
State (
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.75 -3.2 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
State (
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.75 -3.2 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
)
)

Light(
comment( Sphere of light for Exhaust )
Type( 1 )
Conditions(
Headlight ( 0 )
Unit ( 2 )
TimeOfDay ( 2 )
)
Cycle( 0 )
FadeIn( 0.5 )
FadeOut( 0.5 )
States(1
State(
Duration ( 0.0 )
LightColour ( 80ffe610 )
Position ( 0 10.0 -9.0 )
Transition ( 0 )
Radius ( 6.0 )
Angle ( 90.0 )
         )
  )
)
Light ( 
            comment( Chimney Sparks RS1AA ) 
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.3 )
States ( 28 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.95 )

Azimuth ( 0 0 0 )
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.05 )
LightColour ( 80ff7200 ) 
Position ( 0 4.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.15 )
LightColour ( 80ff7200 ) 
Position ( 0 5.42 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 )
LightColour ( 80ff7200 ) 
Position ( 0 6.72 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.05 )
LightColour ( 80ff7200 ) 
Position ( 0 4.52 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 4.72 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.15 )
LightColour ( 80ff7200 ) 
Position ( 0 6.92 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.05 )
LightColour ( 80ff7200 ) 
Position ( 0 4.32 2.95 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.10 )
LightColour ( 80ff7200 ) 
Position ( 0 5.52 2.95 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.15 )
LightColour ( 80ff7200 ) 
Position ( 0 5.92 2.95 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.226 ) 
) 
State ( 
Duration ( 0.05 )
LightColour ( 80ff7200 ) 
Position ( 0 5.35 2.95 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 5.55 2.95 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.25 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.95 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.230 ) 
) 
State ( 
Duration ( 0.15 )
LightColour ( 80ff7200 ) 
Position ( 0 4.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 4.22 2.95 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 7.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 00000000 ) 
Position ( 0 5.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.225 ) 
) 
State ( 
Duration ( 0.3 )
LightColour ( 00000000 ) 
Position ( 0 5.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 6.22 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.5 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.235 ) 
) 
State ( 
Duration ( 0.2 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.233 ) 
)
State ( 
Duration ( 0.1 )
LightColour ( 00000000 ) 
Position ( 0 6.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.23 )
) 
State ( 
Duration ( 0.1 )
LightColour ( 80ff7200 ) 
Position ( 0 5.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.23 ) 
) 
State (
Duration ( 0.7 )
LightColour ( 80ff7200 ) 
Position ( 0 9.22 2.95 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.230 )
            )
         )
    )
)

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
*********************************************************************** )

Effects(
SpecialEffects(

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
-0.3 0.6 4.0
0 1 0
0.16 )

 ) )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Feng.sms" )


Comment( **Based on SR Q1 0-6-0 locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.807m 4.062m 9.570m )
Mass  ( 51.25t-uk )
ORTSNumberAxles ( 0 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

Comment ( Rear Coupler )
Coupling (
Type ( Bar )
Spring ( Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 0cm 5cm ) )
CouplingHasRigidConnection ( 1 ))

Comment ( Front Coupler )
Coupling (
Type ( Chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 0cm 5cm )))


Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 110kN ) Comment ( * guess braked approx 70% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 21in ) Comment ( * guess *  )
ORTSNumberBrakeCylinders ( 2 )
ORTSAuxilaryResCapacity ( 8.82ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.63ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( * Locomotive and tender fitted with vacuum brake * )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3576 )
ORTSDavis_B ( 161 )
ORTSDavis_C ( 4.89 )

ORTSWagonFrontalArea ( 92ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 1.96m 0.160m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 16ft 6in )

Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Lights(12
Light(
comment( Flickering Firebox )
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
Position ( -0 1.98 -3.5 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.6 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( -0 1.98 -3.5 )
Azimuth ( -120 -120 -120 )
Transition ( 0 )
Radius ( 1.6 )

)
)
)
Light(
comment( Gauge glass Lamp )
Type( 0 )
Conditions (
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States( 1
State(
Duration ( 0.0 )
LightColour ( 80ffe610 )
Position ( 0.17 3.2 -3.50 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 0.35 )
)
)
)
Light ( 
comment( Chimney Sparks RS1AA ) 
Type  ( 0 )
Conditions (
Headlight ( 3 )
Unit ( 2 )
TimeOfDay ( 0 )
Weather ( 0 )
Coupling ( 0 )  
)
Cycle ( 0 ) 
FadeIn ( 0 ) 
FadeOut ( 0.5 ) 
States ( 29 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
)
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.1 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.50 ) 
)
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.42 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.72 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.30 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.52 3.54 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.72 3.4 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.92 3.4 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.30 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.32 3.4 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.52 3.54 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.92 3.54 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.26 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.35 3.54 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.55 3.54 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.5 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.4 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.30 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.48 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 4.22 3.4 )

Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.4 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 7.22 3.4 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.35 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.4 )

Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 00000000 ) 
Position ( 0 5.22 3.54 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.5 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.125 ) 
) 
State ( 
Duration ( 0.25 ) 
LightColour ( 00000000 ) 
Position ( 0 5.22 3.54)

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.13 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 6.22 3.54 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.54 )

Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 0.135 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.549 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.133 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( 0 6.22 3.549 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.13 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( 0 5.22 3.549 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.13 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( 0 9.22 3.549 )

Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 0.130 ) 
              )
        )
  )

Light(
comment( Sphere of light for Exhaust )
Type( 1 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
Cycle( 0 )
FadeIn( 0.5 )
FadeOut( 0.5 )
States(1
        State(
Duration ( 0.0 )
LightColour ( 80ffe610 )
Position ( 0 10.0 -13.75 )
Transition ( 0 )
Radius ( 6.0 )
Angle ( 90.0 )
                                                )
                                 )
       )
Light(
comment( Inside Cab Glare )
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 3.01 -5.045 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 3.0 )
Elevation ( -25 -25 -25 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 3.01 -5.045 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 3.0 )
Elevation ( -25 -25 -25 )
)
)
)
Light(
comment( Inside Cab Glare Back )
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 3.01 -5.25 )
Azimuth ( -180 -180 -180  )
Transition ( 0 )
Radius ( 2.0 )
Elevation ( -25 -25 -25 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 3.01 -5.25 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 2.0 )
Elevation ( -25 -25 -25 )
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
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.63 -1.2 )
Azimuth ( -90 -90 -90 )
Transition ( 0 )
Radius ( 1.4 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.63 -1.2 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )

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
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.6 -1.2 )
Azimuth ( 45 45 45 )
Transition ( 0 )
Radius ( 1.45 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.6 -1.2 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.45 )

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
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.6 -1.2 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.4 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.6 -1.2 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.4 )

)
)
)

Light(
comment( Flickering Ashpan Front Leading )
Type( 0 )
Conditions(
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(2
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.64 -1.2 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 1.4 )
Elevation ( -10 -10 -10 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.64 -1.2 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 1.4 )
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
Position ( 0 0.45 -4.5 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 0.45 -4.5 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )

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
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 01.4 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.4 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -6.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 3 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 6 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 6 ) 
) 
State ( 
Duration ( 5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 4 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 5 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -3.0 )
Azimuth ( 0 0 0 )
Transition ( 0 ) 
Radius ( 5 )
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
-0.3 0.8 4.5
0 1 0
0.16 )

 ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\SR-Q1_eng.sms" )

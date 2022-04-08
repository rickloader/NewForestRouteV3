
Comment( **Based GWR 5101 Class locomotive with Superheated No 2 boiler** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.950m 3.859m 12.280m )
Mass ( 72.15t-uk )
WheelRadius ( 19in ) Comment ( * leading wheels 19in trailing wheels 22in )
ORTSNumberAxles ( 2 )

Comment ( ************************* Coupler Information ************************
        Included in this section - Type, Spring, Buffer, Velocity, etc
 ********************************************************************** )

Coupling (
Type ( chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 10cm )))

Comment ( ******************************* Brakes *********************************************
     Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
 ************************************************************************************ )

BrakeEquipmentType( "Vacuum_brake, Auxilary_reservoir, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 112kN )  Comment ( estimate braked approx 75% adhesive mass, CoF 0.31 )
MaxHandBrakeForce ( 50kN )

ORTSNumberBrakeCylinders ( 2 )
Comment ( Assumes 1 x 30in cylinder with 9in stroke )
Comment ( OpenRails assumes 4.5in stroke so this is set as two cylinders )
ORTSBrakeCylinderSize ( 30in )
ORTSAuxilaryResCapacity ( 16.50ft^3 ) Comment ( Based on Phillipson 16.5ft^3 vacuum chamber for 30in x 9in vacuum cylinder )

MaxReleaseRate ( 2.5InHg/s )
MaxApplicationRate ( 2.0InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 25InHg )
BrakePipeVolume ( 0.98ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
  Included in this section - Wheelbase, gauge, friction, etc
 ******************************************************** )

ORTSBearingType ( Friction )
ORTSDavis_A ( 3920 )
ORTSDavis_B ( 106.3 )
ORTSDavis_C ( 5.78 )

ORTSWagonFrontalArea ( 92ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 2.08m -0.03m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 14ft 9in )

Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

 Lights ( 16

Light (
   comment( Sphere of light for Exhaust )
    Type  ( 1 )
    Conditions (
    Headlight ( 3 )
    Unit ( 2 )
   )
    Cycle  ( 0 )
    FadeIn ( 0.5 )
    FadeOut ( 0.5 )
    States ( 1
            State (
      Duration ( 0.0 )
      LightColour ( 80ffe610 )
      Position ( 0 10.0 -12.0 )
      Transition ( 0 )
      Radius ( 6.0 )
      Angle ( 90.0 )
                 )
            )
    )
Light (
   comment( Sphere of light for Exhaust )
    Type  ( 1 )
    Conditions (
    Headlight ( 3 )
    Unit ( 2 )
   )
    Cycle  ( 0 )
    FadeIn ( 0.5 )
    FadeOut ( 0.5 )
    States ( 1
            State (
      Duration ( 0.0 )
      LightColour ( 80ffe610 )
      Position ( 0 10.0 -13.50 )
      Transition ( 0 )
      Radius ( 6.0 )
      Angle ( 90.0 )
                 )
            )
    )



  Light (
   Comment( lamp front left )
   Type ( 0 )
   Conditions (
    Headlight ( 3 )
    Unit ( 2 )
   )
   Cycle ( 0 )
   FadeIn ( 0.5 )
   FadeOut ( 0.5 )
   States ( 1
    State (
     Duration ( 0.0 )
     LightColour ( 80ffff70 )
     Position ( 1.07503 1.45024 5.56047 )
     Azimuth ( 0.0 -5.0 5.0 )
     Transition ( 0 )
     Radius ( 0.4 )
    )
   )
  )
 Light(
comment( Gauge Glass Lamp A )
Type( 0 )
Conditions (
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0 )
FadeOut( 0 )
Cycle( 0 )
States( 1
State(
Duration ( 0.0 )
LightColour ( 80ff7200 )
Position ( -0.2 3.4 -2.62 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 0.15 )
)
)
)
Light(
comment( Gauge Glass Lamp A )
Type( 0 )
Conditions (
Headlight ( 3 )
Unit ( 2 )
)
FadeIn( 0 )
FadeOut( 0 )
Cycle( 0 )
States( 1
State(
Duration ( 0.0 )
LightColour ( 80ffe610 )
Position ( -0.2 3.4 -2.62 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 0.15 )
)
)
)
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
Position ( 0 2.2 -2.62 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.3 )
)
State(
Duration ( 0.3 )
LightColour ( eeff8800 )
Position ( 0 2.2 -2.62 )
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
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 01.4 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.4 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.3 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -4.0 )
Azimuth ( 90 90 90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 3 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -180 -180 -180 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.1 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 5 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -4.0 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.30 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.5 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( -90 -90 -90 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.4 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 00000000 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.2 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
Azimuth ( 0 0 0 ) 
Transition ( 0 ) 
Radius ( 1 ) 
) 
State ( 
Duration ( 0.6 ) 
LightColour ( 80ff7200 ) 
Position ( -0.1 0.14 -2.12 )
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
Position ( -0 0.645 -1.502 )
Azimuth ( -90 -90 -90 )
Transition ( 0 )
Radius ( 1.3 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.62 -1.502 )
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
Position ( -0 0.655 -1.502 )
Azimuth ( 45 45 45 )
Transition ( 0 )
Radius ( 1.35 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -1.502 )
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
Position ( -0 0.655 -1.502 )
Azimuth ( 180 180 180 )
Transition ( 0 )
Radius ( 1.34 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.655 -1.502 )
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
Position ( -0.0 0.652 -1.502 )
Azimuth ( 0.0 -5.0 5.0 )
Transition ( 0 )
Radius ( 1.34 )
Elevation ( -10 -10 -10 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0.0 0.652 -1.502 )
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
Position ( -0 0.643 -4.5 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )
)
State(
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 0.643 -4.5 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )

)
)
)

)


Comment ( ********************* Wagon Visual Effects ****************************
              Included in this section - Effect type, etc
  *********************************************************************** )

Effects(
SpecialEffects(

Comment(==== Steam Heating Leaks ====)
HeatingHoseFX(
            -0.25 0.4 5.8
            0 1 0
            0.13 )
HeatingHoseFX(
            0.25 0.4 -5.8
            0 1 0
            0.13 ) ) )

Comment ( ********************** Micellaneous Information **********
              Included in this section - Name, Sounds, etc
  ********************************************************* )

IntakePoint ( 1.76 3.00 FuelWater )
IntakePoint ( -5.34 3.88 FuelCoal )

Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Ext-01.sms" )

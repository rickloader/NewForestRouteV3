
Comment( **Based on LSWR S15 4-6-0 locomotive - LSWR built 1920** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.744m 3.988m 11.880m )
Mass  ( 79.8t-uk )
WheelRadius ( 21.5in )
ORTSNumberAxles  ( 2 )

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

Comment ( Locomotive fitted with vacuum brake )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 130kN ) Comment ( * braked approx 70% adhesive mass, coefficient of friction 0.31 * )

ORTSBrakeCylinderSize ( 30in )
ORTSNumberBrakeCylinders ( 2 ) Comment ( = single locomotive brake cylinder with longer stroke )
ORTSAuxilaryResCapacity ( 18.00ft^3 )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
Brakepipevolume ( 0.96ft^3 )
MaxReleaseRate ( 5inHg/s )
MaxApplicationRate ( 5inHg/s )
    
ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_A ( 3814 )
ORTSDavis_B ( 127 )
ORTSDavis_C ( 5.13 )

ORTSWagonFrontalArea ( 97ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 1.96m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 13ft 9in )

Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Lights(2
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
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( -0 2.14 -4.0 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( -0 2.14 -4.0 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )

)
)
)
Light(
comment( Cab glow )
Type( 0 )
Conditions(
Headlight ( 0 )
Unit ( 0 )
)
FadeIn( 0.5 )
FadeOut( 0.5 )
Cycle( 0 )
States(1
State(
Duration ( 0.0 )
LightColour ( 80ff7200 )
Position ( 0 2.34 -4.1 )
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

Comment( Steam Heating Hose Leak )
HeatingHoseFX(
-0.22 0.40 5.60
0 1 0
0.16 )

 ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ( "..\\..\\common.sound\\LMS-Crab\\LMS-Hughes_eng.sms"  )

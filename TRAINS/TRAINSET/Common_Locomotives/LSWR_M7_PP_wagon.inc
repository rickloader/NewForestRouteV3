
Comment( **Based on LSWR M7 Class 0-4-4T locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size ( 2.616m 3.733m 11.000m )
Mass ( 64.0t-uk ) Comment ( 60.2t-uk without Pull&Push equipment )
WheelRadius ( 21.5in )
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
MaxBrakeForce( 55kN ) Comment ( * guess braked approx 50% adhesive mass, coefficient of friction 0.31 * )

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

ORTSDavis_A ( 2536 )
ORTSDavis_B ( 64.8 )
ORTSDavis_C ( 4.20 )

ORTSWagonFrontalArea ( 79ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0024 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

Comment ( *** Curve Resistance and SuperElevation *** )
CentreOfGravity ( 0m 2m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 7ft 6in )

Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Lights(1
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
Position ( -0 1.72 -1.85 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( -0 1.72 -1.85 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )

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
0.23 0.4 5.2
0 1 0
0.13 )
HeatingHoseFX(
0.23 0.4 -5.2
0 1 0
0.13 )
 ) )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Feng.sms" )

IntakePoint ( -4.5 1.7 FuelCoal )
IntakePoint ( 0.5884 2.3 FuelWater )


Comment( ** Based on GWR 2251 Class locomotive ** )

Comment ( ******************** General Information **********************
     Included in this section - Type, Shape, Size, Mass, etc
 *************************************************************** )

Mass ( 43.4t-uk )
ORTSNumberAxles ( 0 )

Comment ( ************************* Coupler Information ************************
        Included in this section - Type, Spring, Buffer, Velocity, etc
 ********************************************************************** )

Comment ( Rear Coupler )
Coupling (
Type ( bar )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 10cm ) )
CouplingHasRigidConnection ( 1 ) )

Comment ( Front Coupler )
Coupling (
Type ( chain )
Spring (
Stiffness ( 1e4N/m 4.5e6N/m )
Break ( 1200kN 1200kN )
r0 ( 10cm 20cm ) ) )

Comment ( ******************************* Brakes *********************************************
     Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
 ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 118kN ) Comment ( * braked approx 75% of mass on driving wheels, coefficient of friction 0.31 * )

ORTSNumberBrakeCylinders ( 2 )
ORTSBrakeCylinderSize ( 6in ) Comment (steam brake )
ORTSAuxilaryResCapacity ( 1.0ft^3 ) Comment ( for operation of steam brake )

MaxReleaseRate ( 2.5InHg/s )
MaxApplicationRate ( 2.0InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 25InHg )
BrakePipeVolume ( 0.87ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )
Comment ( == Cast Iron Brakeshoes == )

Comment ( ******************* Resistance & SuperElevation ********
  Included in this section - Wheelbase, gauge, friction, etc
 ******************************************************** )

ORTSBearingType ( Friction )
ORTSDavis_A ( 3028 )
ORTSDavis_B ( 98.8 )
ORTSDavis_C ( 4.87 )

ORTSWagonFrontalArea ( 78ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0028 )
ORTSTrailLocomotiveResistanceFactor ( 0.147 )

CentreOfGravity ( 0m 2.08m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 15ft 6in )

Comment ( ************************ Lights (If used) ***********************************
        Included in this section - Type, Colour, Location, Size, Control, etc
 ***************************************************************************** )

Lights(4
Light (
Comment( light_ )
Type ( 0 )
Conditions (
Headlight ( 3 )
)
Cycle ( 0 )
FadeIn ( 0.5 )
FadeOut ( 0.5 )
States ( 1
State (
Duration ( 0.0 )
LightColour ( 80E3E3E3 )
Position ( 0 3.27 3.47 )
Transition ( 0 )
Radius ( 1.0 )
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
Position ( 0 2.2 -2.95 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1 )
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
Duration ( 0.05 )
LightColour ( 80ff7200 )
Position ( 0 2.1 -2.85 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
State(
Duration ( 0.05 )
LightColour ( 80ffe610 )
Position ( 0 2.1 -2.85 )
Azimuth ( -180 -180 -180 )
Transition ( 0 )
Radius ( 1.4 )
)
)
)
)

Comment ( ********************* Wagon Visual Effects ****************************
              Included in this section - Effect type, etc
  *********************************************************************** )

Comment ( ************* Freight Freight and Load Animations (If used) ************
        Included in this section - Freight Animation information, etc
 ************************************************************************ )

Comment ( ********************* Passenger View (If used) ******************
        Included in this section - File, Location, Direction, etc
 ***************************************************************** )

Comment ( ********************** Micellaneous Information **********
              Included in this section - Name, Sounds, etc
  ********************************************************* )

Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Ext-01.sms" )

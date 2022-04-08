
Comment( **Based on LSWR S15 4-6-0 locomotive - LSWR built 1920** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 33.5in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 59.8t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 297ft^3 )
ORTSEvaporationArea ( 1878ft^2 ) Comment ( tubes 1716 + firebox 162 )
ORTSSuperheatArea ( 308ft^2 )
MaxBoilerPressure ( 180psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 28in )
CylinderDiameter ( 21in )

Comment ( * based on indicator diagrams of LSWR N15 1924 * )
Comment ( * original design with short travel valves and restricted steam passages * )

ORTSMaxIndicatedHorsepower ( 1486hp )
ORTSCylinderInitialPressureDrop( 0 0.98  50 0.91  100 0.90  150 0.86  200 0.69  250 0.63  300 0.58 350 0.47 )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 30.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

MaxTenderCoalMass ( 7t-uk )
MaxTenderWaterMass ( 50000lb )
IsTenderRequired( 1 )

Comment ( ************************* Gearing (If used) *************************
                  Included in this section - Gear type, ratio, etc
      *********************************************************************** )

Comment ( ************************** Brake System *********************************************
            Included in this section - Compressor, Reservoir, Application rates, etc
     ************************************************************************************* )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.05 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Dreadnought 20/25 ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.090 )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 250lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.095 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
Brake_Train ( 0 1 0.05 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSSmallEjector ( 0 1 0.1 0.0 NumNotches ( 0 ) )

Brake_Brakeman ( 0 1 0.2 0.0
NumNotches ( 1
Notch( 0 1 BrakemanBrakesControllerManualBrakingStart ) ) )

FireDoor ( 0 1 0.2 0 NumNotches ( 0 ) )

Sanding( 0 1 0 )

Blower ( 0 1 0.025 0.2 NumNotches ( 0 ) )

ORTSSteamHeat( 0 1 0.05 0 )

Shovel ( 0 1 0.1 0 NumNotches ( 0 ) )

DampersFront ( 0 1 0.1 1 NumNotches ( 0 ) )
DampersBack ( 0 1 0.1 0 NumNotches ( 0 ) )

Injector1Steam ( 0 1 0 )
Injector2Steam ( 0 1 1 )
Injector1Water ( 0 1 0.1 0
NumNotches( 5
Notch ( 0.00 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )
Injector2Water ( 0 1 0.1 0
NumNotches( 5
Notch ( 0.00 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )

CylinderCocks ( 0 1 1 )
Whistle ( 0 1 0 )

)

Comment ( ********************** Miscellaneous Information *********************
           Included in this section - Alternate Views, Sounds, Names, etc
      *********************************************************************** )

CabView ( "..\\..\\common.cab\\ArthurcabV3\\KA.cvf" )
HeadOut (  1.7 3.1 -5.5 )

Sound ( "..\\..\\common.sound\\LMS-Crab\\LMS-Hughes_cab.sms"  )

Effects (
SteamSpecialEffects (

StackFX (
0 3.99 3.60
0 1 0
0.2 )

WhistleFX (
0 3.97 -3.25
0 1 0
0.1 )

SafetyValvesFX (
0 3.94 -2.58
0 1 0
0.2 )
SafetyValvesFX (
0 3.94 -2.35
0 1 0
0.2 )

CylindersFX (
0.99 0.75 5.33
0 0 1
0.1 )
Cylinders2FX (
-0.99 0.76 5.34
0 0 1
0.1 )

Cylinders2FX (
0.99 0.76 5.34
0 0 1
0.1 )
CylindersFX (
-0.99 0.75 5.33
0 0 1
0.1 )

Injectors1FX (
-1.05 0.50 -5.00
0 -0.5 -1
0.08 )
Injectors2FX (
1.05 0.50 -5.00
0 -0.5 -1
0.08 ) ) )

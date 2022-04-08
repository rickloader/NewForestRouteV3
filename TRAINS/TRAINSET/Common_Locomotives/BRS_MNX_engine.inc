
Comment( **Based on Rebuilt Merchant Navy Class locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 37in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 25mph )
ORTSDriveWheelWeight ( 64.9t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 427ft^3 ) Comment ( from diagram book, at half glass water 314 cu ft and steam space 113 cu ft )
ORTSEvaporationArea ( 2450ft^2 ) Comment ( firebox 275 + tubes 2175 )
ORTSSuperheatArea ( 612ft^2 )
MaxBoilerPressure ( 250psi )
MaxSteamHeatingPressure ( 60psi )

ORTSMaxSuperheatTemperature ( 280 ) Comment ( based on BR test with rebuilt MN )
ORTSBoilerEvaporationRate ( 17.14 ) Comment ( evaporation rate of 42k lb/h sustained for 20 mins on test with South Kirkby coal )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 3 )
CylinderStroke ( 24in )
CylinderDiameter ( 18in ) 


Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 13800btu/lb ) Comment ( Bedwas coal )
ORTSGrateArea ( 48.5ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 14lb )

ORTSBoilerEfficiency( 0 0.86  144 0.43 ) Comment ( Bedwas coal - derived from burn rate curve )
ORTSMaxIndicatedHorsepower ( 2690hp ) Comment ( estimate based on test with unrebuilt MN )

Comment ( based on rebuilt MN )
ORTSSuperheatCutoffPressureFactor ( 46.5 )
ORTSCylinderInitialPressureDrop( 0 0.98   50 0.96   100 0.95    300 0.94   350 0.90   400 0.85 )


Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 11200lb )
MaxTenderWaterMass ( 50000lb )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
TrainPipeLeakRate ( 0.05inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Davies & Metcalfe type RM ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.42inHg/s ) Comment ( * Locomotive Tender fitted with Vacuum Reservoirs to accelerate release of brakes * )
VacuumBrakesLargeEjectorUsageRate ( 600lb/h )
VacuumBrakesSmallEjectorUsageRate ( 220lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakePipeTimeFactor ( 0.02s )
ORTSBrakeServiceTimeFactor ( 10.0s )

Comment ( == Independent Brake valve - Engine & Tender == )
EngineBrakesControllerMaxReleaseRate ( 2.0inHg/s )
EngineBrakesControllerMaxApplicationRate ( 2.0inHg/s )

Comment ( ******************* Train Control Systems (If used) ***********************************************
                      Included in this section - Monitoring of Overspeed, Emergency Braking, Vigilance, etc
         *************************************************************************************************** )

ORTSTrainControlSystem( "..\\..\\AWS\\SCRIPT\\TCS_AWS_UK" )
ORTSTrainControlSystemSound( "..\\..\\AWS\\SOUND\\TCS_AWS_UK_old.sms" )
ORTSTrainControlSystemParameters( "..\\..\\AWS\\SCRIPT\\TCS_AWS_UK_1956_VB.ini" )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers (

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ))

Brake_Engine ( 0 1 0.25 0.0
NumNotches( 1
Notch( 0 1 EngineBrakesControllerBrakeNotchStart ) ) )

Comment ( Based upon Davies & Metcalfe RM Ejector )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSSmallEjector ( 0 1 0.1 1.0 NumNotches ( 0 ) )

Brake_Brakeman ( 0 1 0.2 0.0
NumNotches ( 1
 Notch( 0 1 BrakemanBrakesControllerManualBrakingStart ) ) )

FireDoor ( 0 1 0.1 0 NumNotches( 0 ))
Sanding( 0 1 0 )
Blower ( 0 1 0.025 0.2 NumNotches( 0 ))
HeatingTap ( 0 1 0.025 0 NumNotches( 0 ))
Shovel ( 0 1 0.1 0 NumNotches( 0 ))
DampersFront ( 0 1 0.1 1 NumNotches( 0 ))
DampersBack ( 0 1 0.1 0  NumNotches( 0 ))
Injector1Steam ( 0 1 0 )
Injector2Steam ( 0 1 0 )
Injector1Water ( 0 1 0.1 0 NumNotches( 0 ))
Injector2Water ( 0 1 0.1 0 NumNotches( 0 ))
CylinderCocks ( 0 1 1 )
Whistle ( 0 1 0 )
)

Comment ( ********************** Micellaneous Information ****************************
                      Included in this section - Alternate Views, Sounds, Names, etc
         **************************************************************************** )
    
CabView ( "..\\..\\common.cab\\MN\\MN_BR.cvf" )
HeadOut (  -1.45 3.1 -6.35 )

Sound ( "..\\..\\common.sound\\Bullied_LightPacific\\blp-cab01.sms" )

Effects (
SteamSpecialEffects (

SafetyValvesFX (
0 4.0 -1.77
0 1.3 0
0.2 )
SafetyValvesFX (
0.21 4.0 -1.77
0.2 1.3 0
0.2 )
SafetyValvesFX (
-0.21 4.0 -1.77
-0.2 1.3 0
0.2 )

StackFX (
0 4.0 4.3
0 0.95 0
0.3 )

CylindersFX (
-0.91 0.78 6.8
0.4 -0.4 1.4
0.1 )
Cylinders2FX (
-0.91 0.72 6.8
0.4 -0.4 1.4
0.1 )
CylindersFX (
-0.30 0.78 6.8
0 -0.4 1.4
0.1 )
Cylinders2FX (
-0.30 0.72 6.8
0 -0.4 1.4
0.1 )
Cylinders2FX (
0.91 0.78 6.8
-0.4 -0.4 1.4
0.1 )
CylindersFX (
0.91 0.72 6.8
-0.4 -0.4 1.4
0.1 )

WhistleFX (
0.56 3.91 -0.30
0 -0.1 1.05
0.3 )

Injectors1FX (
1.34 0.34 -6.65
0 -1 -1
0.1 )
Injectors2FX (
-1.34 0.34 -6.65
0 -1 -1
0.1 )

SteamBrakeFX (
 0.65 0.80 -6.0
 0 -1 0
 0.05 )
SteamBrakeFX (
 -0.65 0.80 -6.0
 0 -1 0
 0.05 )

LargeEjectorFX (
 -1.05 1.40 -5.60
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 -1.05 1.40 -5.60
 -0.2 -1.0 -0.1
 0.10 )

 ) )


Comment( **Based on Rebuilt LSWR T9 Class 4-4-0 locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 39.5in )
ORTSNumberDriveAxles ( 2 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 34.8t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 186ft^3 )
ORTSEvaporationArea ( 1063ft^2 ) Comment ( firebox 142 + tubes 921 )
ORTSSuperheatArea ( 195ft^2 )
MaxBoilerPressure ( 175psi )
MaxSteamHeatingPressure ( 50psi )

ORTSMaxSuperheatTemperature ( 200 ) Comment ( estimate )
ORTSBoilerEvaporationRate ( 17.7 ) Comment ( estimate )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 19in )

ORTSCylinderInitialPressureDrop( 0 0.97  50 0.91  100 0.90  150 0.86  200 0.69  250 0.63  300 0.58  350 0.47 )
Comment ( * representation of short travel valves * )

ORTSMaxIndicatedHorsepower ( 905hp ) Comment ( estimate )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 13000btu/lb )
ORTSGrateArea ( 24.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 5t-uk )
MaxTenderWaterMass ( 40000lb )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.01 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Dreadnought 25/20mm ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.21 )
VacuumBrakesLargeEjectorUsageRate ( 400lb/h )
VacuumBrakesSmallEjectorUsageRate ( 250lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers ( 

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff ( -0.61 0.77 0.01 0
NumNotches( 16
Notch ( -0.61    0 Dummy )
Notch ( -0.52    0 Dummy )
Notch ( -0.42    0 Dummy )
Notch ( -0.32    0 Dummy )
Notch ( -0.21    0 Dummy )
Notch ( -0.14    0 Dummy )
Notch ( 0.0      0 Dummy )
Notch ( 0.14     0 Dummy )
Notch ( 0.21     0 Dummy )
Notch ( 0.32     0 Dummy )
Notch ( 0.42     0 Dummy )
Notch ( 0.52     0 Dummy )
Notch ( 0.61     0 Dummy )
Notch ( 0.67     0 Dummy )
Notch ( 0.73     0 Dummy )
Notch ( 0.77     0 Dummy ) ) )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
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
ORTSSteamHeat( 0 1 0.05 0 )
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
    
CabView ( "..\\..\\common.cab\\Ben\\Ben.cvf" )
HeadOut (  -1.10 3.0 -5.0 )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

Effects (
SteamSpecialEffects (

StackFX (
 0 4.2 2.99671
 -0 1 0
 0.3 )

SafetyValvesFX (
 0 4.35 -0.34
 -0 -0.75 0
 0.350 )
SafetyValvesFX (
 0 4.05 -0.50
 -0 1.3 0
 0.15 )

WhistleFX (
0 3.4 -2.16
-0 0.9 0
0.15 )

CylindersFX (
-0.50 0.51 4.15
0 -0.45 1.3
0.1 )
Cylinders2FX (
0.50 0.51 2.00
0 -0.45 -1.3
0.1 )
Cylinders2FX (
-0.50 0.51 4.15
0 -0.45 1.3
0.1 )
CylindersFX (
0.50 0.51 2.00
0 -0.45 -1.3
0.1 )

Injectors1FX (
1.00 0.40 -4.50
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.40 -4.50
0 -1 -1
0.1 )

LargeEjectorFX (
 -0.95 0.80 -3.50
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 -0.95 0.80 -3.50
 -0.2 -1.0 -0.1
 0.10 )

 ) )

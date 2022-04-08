
Comment( **Based on LSWR 0415 Class 4-4-2T locomotive - Adams Radial** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 33.5in )
ORTSNumberDriveAxles ( 2 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 25.0t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 161ft^3 )
ORTSEvaporationArea ( 1059ft^2 ) Comment ( firebox 110 + tubes 949 )
MaxBoilerPressure ( 160psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 24in )
CylinderDiameter ( 17.5in )
ORTSCylinderInitialPressureDrop( 0 0.97  50 0.94  100 0.93  150 0.92  200 0.91  250 0.86  300 0.73  350 0.49 ) Comment ( * representation of short travel valves * )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 12000btu/lb )
ORTSGrateArea ( 18.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 8lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 1t-uk )
MaxTenderWaterMass ( 8000lb )
IsTenderRequired( 0 )

Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.01 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Gresham & Craven 40mm ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.28 )
VacuumBrakesLargeEjectorUsageRate ( 600lb/hr )
VacuumBrakesSmallEjectorUsageRate ( 240lb/hr )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers ( 

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff ( -0.73 0.73 0.01 0
NumNotches( 17
Notch ( -0.73    0 Dummy )
Notch ( -0.67    0 Dummy )
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
Notch ( 0.73     0 Dummy ) ) )

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
    
CabView ( "..\\..\\Common.Cab\\HRPT_cab\\Yankee.cvf" )
HeadOut (  1.42 2.93 -2.9 )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

Effects (
SteamSpecialEffects (

SafetyValvesFX (
0 3.36 -0.66
0 1 0
0.2 )
SafetyValvesFX (
0 3.36 -0.46
0 1 0
0.2 )

WhistleFX (
-0.112 3.103 -1.325
0 1 0
0.025 )

StackFX (
0 4.46 3.658
0 1 0
0.15 )

CylindersFX (
0.963 0.42 3.4
0 -0.8 1.0
0.1 )
Cylinders2FX (
0.963 0.44 4.1
0 -0.2 -1.0
0.1 )
Cylinders2FX (
-0.963 0.42 3.4
0 -0.8 1.0
0.1 )
CylindersFX (
-0.963 0.44 4.1
0 -0.2 -1.0
0.1 )

Injectors1FX (
1.00 0.34 -3.00
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.34 -3.00
0 -1 -1
0.1 )

LargeEjectorFX (
 0.95 1.20 -2.00
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 0.95 1.20 -2.00
 -0.2 -1.0 -0.1
 0.10 )

 ) )

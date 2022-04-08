
Comment( **Based on LSWR O2 Class 0-4-4T locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 29in )
ORTSNumberDriveAxles ( 2 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 30.5t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 145ft^3 )
ORTSEvaporationArea ( 987ft^2 ) Comment ( firebox 89 + tubes 898 )
MaxBoilerPressure ( 175psi )
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
ORTSGrateArea ( 13.83ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 8lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 1.5t-uk )
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
    
CabView ( "..\\..\\common.cab\\Ben\\Ben.cvf" )
HeadOut (  1.37 2.96 -2.53 )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

Effects (
SteamSpecialEffects (

StackFX (
0 4.1 3.362
0 2 0
0.3 )

Comment ( Ramsbottom safety valves )
SafetyValvesFX (
0 3.54 -0.85
0 2 0
0.1 )
SafetyValvesFX (
0 3.54 -1.00
0 2 0
0.1 )

WhistleFX (
0 3.431 -1.271
0 1 0
0.1 )

CylindersFX (
-0.766 1.01 2.752
0 0 1
0.1 )
Cylinders2FX (
-0.766 1.01 2.25
0 -0.5 -1
0.1 )

Cylinders2FX (
0.766 1.01 2.75
0 0 1
0.1 )
CylindersFX (
0.766 1.01 2.25
0 -0.5 -1
0.1 )

Injectors1FX (
1.00 0.24 -2.80
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.24 -2.80
0 -1 -1
0.1 )

 ) )

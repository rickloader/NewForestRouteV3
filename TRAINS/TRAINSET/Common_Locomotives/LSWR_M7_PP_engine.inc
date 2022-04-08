
Comment( **Based on LSWR M7 Class 0-4-4T locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 33.5in )
ORTSNumberDriveAxles ( 2 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 37.7t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 193ft^3 )
ORTSEvaporationArea ( 1191ft^2 ) Comment ( firebox 124 + tubes 1067 )
MaxBoilerPressure ( 175psi )
MaxSteamHeatingPressure ( 50psi )

ORTSBoilerEvaporationRate ( 17.7 ) Comment ( estimate )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 18.5in )

ORTSCylinderInitialPressureDrop( 0 0.97  50 0.91  100 0.90  150 0.86  200 0.69  250 0.63  300 0.58  350 0.47 )
Comment ( * representation of short travel valves * )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 12000btu/lb )
ORTSGrateArea ( 20.4ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 8lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 3t-uk )
MaxTenderWaterMass ( 13000lb )
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
HeadOut ( -1.4 2.90 -2.9 )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

Effects (
SteamSpecialEffects (

WhistleFX (
0.0 3.2 -0.6
0 0.9 0
0.25 )

SafetyValvesFX (
0 4.20 0.725
0 -0.75 0
0.450 )
SafetyValvesFX (
0 4.10 0.725
0 1.3 0
0.2 )

StackFX (
0 4.20 3.75
0 0.95 0
0.3 )

CylindersFX (
0.5 0.6 4.12
0.4 -0.25 1.4
0.25 )
Cylinders2FX (
0.5 0.6 3.62
0.3 -0.3 1.4
0.25 )
Cylinders2FX (
-0.5 0.6 4.12
-0.4 -0.25 1.4
0.25 )
CylindersFX (
-0.5 0.6 3.62
0.3 -0.3 1.4
0.25 )

Injectors1FX (
1.00 0.34 -3.40
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.34 -3.40
0 -1 -1
0.1 )

)
)

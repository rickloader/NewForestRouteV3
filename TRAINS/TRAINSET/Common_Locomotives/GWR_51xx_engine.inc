
Comment( **Based GWR 5101 Class locomotive with Superheated No 2 boiler** )

Comment ( ************************ General Information ****************
Included in this section - Wheels, sanding, etc
************************************************************ )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 34in )
NumWheels ( 3 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 50.65t-uk ) Comment ( with full coal and water )


Comment ( ***************************** Cylinders *******************************************
Included in this section - Number, Stroke, Diameter, steam usage, etc
********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 30in )
CylinderDiameter ( 18in )

Comment ( ******************************* Boiler *********************************************
Included in this section - Length, volume, heating area, pressure, etc
*********************************************************************************** )

Comment ( Standard 2 boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 233ft^3 )
ORTSEvaporationArea ( 1290ft^2 ) Comment ( Firebox 145 + Tubes 1145 )
ORTSSuperheatArea ( 82ft^2 )
MaxBoilerPressure ( 200psi )
MaxSteamHeatingPressure ( 80psi )

ORTSMaxSuperheatTemperature ( 70 ) Comment ( * estimate for Standard 2 boiler * )
ORTSBoilerEvaporationRate ( 13.49 ) Comment ( * limits maximum evaporation to 17400 lb/hr * estimate for Standard 2 boiler * )

ORTSMaxIndicatedHorsepower ( 770hp ) Comment ( * estimate for Standard 2 boiler * )

Comment ( ********************************* Fire ***********************************************
Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
************************************************************************************** )

ORTSGrateArea ( 20.35ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )
ORTSFuelCalorific ( 13800btu/lb ) Comment ( * Bedwas coal * )
ORTSBoilerEfficiency ( 0 0.94  158 0.47 ) Comment ( * estimate for Bedwas coal * )

Comment ( ********************************* Fuel ******************
Included in this section - Coal, water, etc
********************************************************** )

MaxTenderCoalMass ( 4t-uk )
MaxTenderWaterMass ( 20000lb )
IsTenderRequired ( 0 )

Comment ( *************************** Brake System *********************************************
Included in this section - Compressor, Reservoir, Application rates, etc
************************************************************************************** )

Comment( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
ORTSBrakePipeTimeFactor ( 0.03s )
TrainPipeLeakRate ( 0.05inHg/s )
VacuumBrakesHasVacuumPump ( 1 )

Comment ( *** Ejectors *** )
Comment ( * Guess for GWR combination ejector * )
ORTSBrakePipeChargingRate ( 0.24inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 0lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve Combined *** )
TrainBrakesControllerMaxSystemPressure ( 25InHg ) Comment ( * GWR operate 25in Hg * )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **********************************************
Included in this section - Controllers for Regulator, Reverser, Brakes, etc
***************************************************************************************** )

EngineControllers (

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff    ( -0.75 0.75 0.0075 0
NumNotches( 15
Notch ( -0.75 0 Dummy )
Notch ( -0.65 0 Dummy )
Notch ( -0.55 0 Dummy )
Notch ( -0.45 0 Dummy )
Notch ( -0.35 0 Dummy )
Notch ( -0.25 0 Dummy )
Notch ( -0.15 0 Dummy )
Notch ( 0.00  0 Dummy )
Notch ( 0.15  0 Dummy )
Notch ( 0.25  0 Dummy )
Notch ( 0.35  0 Dummy )
Notch ( 0.45  0 Dummy )
Notch ( 0.55  0 Dummy )
Notch ( 0.65  0 Dummy )
Notch ( 0.75  0 Dummy ) ) )

Comment ( Based upon GWR combination ejector and control valve )
 Brake_Train ( 0 1 0.1 0.3
  NumNotches( 3
   Notch ( 0.0  0 TrainBrakesControllerReleaseStart )
   Notch ( 0.3  0 TrainBrakesControllerRunningStart )
   Notch ( 0.6  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

FireDoor ( 0 1 0.2 0 NumNotches( 0 ))
Sanding( 0 1 0 )
Blower ( 0 1 0.05 0.2 NumNotches( 0 ))
ORTSSteamHeat( 0 1 0.05 0 )
Shovel ( 0 1 1 0 NumNotches( 0 ))
DampersFront ( 0 1 0.1 0.15
NumNotches ( 6
Notch ( 0.00 0 Dummy )
Notch ( 0.15 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )
DampersBack ( 0 1 0.1 0.15
NumNotches ( 6
Notch ( 0.00 0 Dummy )
Notch ( 0.15 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.50 0 Dummy )
Notch ( 0.75 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )
Injector1Steam ( 0 1 0 )
Injector2Steam ( 0 1 1 )
Injector1Water ( 0 1 0.25 0 NumNotches( 0 ))
Injector2Water ( 0 1 0.25 0.5 NumNotches( 0 ))
CylinderCocks ( 0 1 1 )
Whistle ( 0 1 0 ) )

Comment ( ********************** Micellaneous Information ****************************
Included in this section - Alternate Views, Sounds, Names, etc
**************************************************************************** )

CabView ( "..\\..\\Common.Cab\\GWR2\\Prairie.cvf" )
HeadOut (  1.40 3.12 -3.84 )

Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100b-01.sms" )


Comment ( ************************** Engine Effects *******************
Included in this section - Steam emissions, etc
************************************************************* )

Effects ( SteamSpecialEffects
(   StackFX
( 0 3.78 3.89
0 2 0
0.3 )
SafetyValvesFX
( 0 3.71 0.39
0 2 0
0.2 )
WhistleFX
( 0.04 3.59 -2.05
0 0.8 0
0.1 )
Injectors1FX
( 0.75 1.26 -3.88
0 -1 -1
0.1 )
Injectors2FX
( -0.75 1.26 -3.88
0 -1 -1
0.1 )
CylindersFX
( 1.06 0.33 4.44
0 0 1
0.1 )
Cylinders2FX
( 1.06 0.31 4.42
0 0 1
0.1 )
CylindersFX
( -1.06 0.33 4.44
0 0 1
0.1 )
Cylinders2FX
( -1.06 0.31 4.42
0 0 1
0.1 ) ) )

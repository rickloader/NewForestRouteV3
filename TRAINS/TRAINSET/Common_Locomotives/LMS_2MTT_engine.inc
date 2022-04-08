
Comment( **Based on LMS Ivatt Class 2MT 2-6-2T locomotive** )

Comment ( ************************ General Information ************************
                      Included in this section - Wheels, sanding, etc
          *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 30in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 54.25t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
           Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 196ft^3 )
ORTSEvaporationArea ( 1025ft^2 ) Comment ( tubes 924 + firebox 101 )
ORTSSuperheatArea ( 134ft^2 )
MaxBoilerPressure ( 200psi )
MaxSteamHeatingPressure ( 50psi )

ORTSMaxSuperheatTemperature ( 190 )
ORTSBoilerEvaporationRate ( 13.66 ) Comment( to give max steam rate 14000lb/hr = front end limit for Blidworth Coal ( 14000lb/h / ORTSEvaporationArea 1025ft^2 ) = 13.66  )


Comment ( ***************************** Cylinders *****************************
           Included in this section - Number, Stroke, Diameter, steam usage, etc
          *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 24in )
CylinderDiameter ( 16in )

ORTSMaxIndicatedHorsepower ( 792hp )
ORTSSuperheatCutoffPressureFactor ( 30 )

Comment ( ********************************* Fire *********************************
           Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
          *********************************************************************** )

ORTSFuelCalorific ( 12470btu/lb ) Comment ( Blidworth Coal )
ORTSGrateArea ( 17.5ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

ORTSBoilerEfficiency ( 0 0.914  181 0.457 ) Comment ( for Blidworth Coal )

Comment ( ********************************* Fuel *********************************
                      Included in this section - Coal, water, etc
          *********************************************************************** )

MaxTenderCoalMass ( 3t-uk )
MaxTenderWaterMass ( 13500lb )
IsTenderRequired( 0 )

Comment ( ************************* Gearing (If used) *************************
                      Included in this section - Gear type, ratio, etc
          *********************************************************************** )

Comment ( ************************** Brake System *********************************************
                Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************* )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( "vacuum_single_pipe" )
BrakesEngineBrakeType ( "steam_brake" )
ORTSBrakePipeTimeFactor ( 0.03 )
ORTSBrakePipeDischargeTimeFactor ( 1.0 )
TrainPipeLeakRate ( 0.01inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for LMS 20/25 ejector * )
ORTSBrakePipeChargingRate ( 0.21inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 400lb/h )
VacuumBrakesSmallEjectorUsageRate ( 250lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 80psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )


Comment ( ******************* Train Control Systems (If used) ***********************************************
                      Included in this section - Monitoring of Overspeed, Emergency Braking, Vigilance, etc
         *************************************************************************************************** )

ORTSTrainControlSystem( "..\\..\\AWS\\SCRIPT\\TCS_AWS_UK" )
ORTSTrainControlSystemSound( "..\\..\\AWS\\SOUND\\TCS_AWS_UK_old.sms" )
ORTSTrainControlSystemParameters( "..\\..\\AWS\\SCRIPT\\TCS_AWS_UK_1956_VB.ini" )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.0475 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )

Brake_Train ( 0 1 0.25 0
NumNotches( 2
Notch(0    0 TrainBrakesControllerReleaseStart )
Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSLargeEjector ( 0 1 0.25 0.0 NumNotches ( 0 ) )

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

CabView ( "..\\..\\common.cab\\5XP\\BR2MT.cvf" )
HeadOut (  -1.50 2.9 -2.9 )

Sound ("..\\..\\common.sound\\LMS-Crab\\LMS-Stanier_cab.sms" )


Effects (
SteamSpecialEffects (

SafetyValvesFX (
0 3.57 -1.14
0 1 0
0.10 )
SafetyValvesFX (
0 3.57 -1.38
0 1 0
0.10 )


WhistleFX (
0 3.73 -1.67
0 1 0
0.05 )

StackFX (
0 3.90 3.54
0 1 0
0.30 )

CylindersFX (
-1.22 0.60 4.30
0 -0.2 1
0.10 )
Cylinders2FX (
1.22 0.60 4.30
0 -0.2 1
0.10 )
Cylinders2FX (
-1.22 0.55 4.35
0 -0.3 1
0.10 )
CylindersFX (
1.22 0.55 4.35
0 -0.3 1
0.10 )

Injectors1FX (
1.00 0.24 -3.80
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.24 -3.80
0 -1 -1
0.1 )

LargeEjectorFX (
 -0.80 2.55 3.00
 0.2 1 -0.2
 0.05 )
LargeEjectorFX (
 -0.80 2.50 3.00
 -0.2 -1 -0.2
 0.10 )
LargeEjectorFX (
 -1.00 1.50 3.00
 -0.5 -1.0 0
 0.15 )

SmallEjectorFX (
 -0.80 2.55 3.00
 -0.4 -0.6 -0.2
 0.05 )
SmallEjectorFX (
 -1.00 1.50 3.00
 -0.5 -1.0 0
 0.10 )

SteamBrakeFX (
 0.65 0.60 -3.5
 0 -1 0
 0.05 )
SteamBrakeFX (
 -0.65 0.60 -3.5
 0 -1 0
 0.05 )

 ) )

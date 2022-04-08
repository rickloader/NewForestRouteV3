
Comment( **Based on SR Q1 0-6-0 locomotive** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 30.5in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 51.25t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 290ft^3 )
ORTSEvaporationArea ( 1472ft^2 ) Comment ( tubes 1302 + firebox 170 )
ORTSSuperheatArea ( 218ft^2 )
MaxBoilerPressure ( 230psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 19in )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 27.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

MaxTenderCoalMass ( 5t-uk )
MaxTenderWaterMass ( 37000lb )
IsTenderRequired( 1 )

Comment ( ************************* Gearing (If used) *************************
                  Included in this section - Gear type, ratio, etc
      *********************************************************************** )

Comment ( ************************** Brake System *********************************************
            Included in this section - Compressor, Reservoir, Application rates, etc
     ************************************************************************************* )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( "vacuum_single_pipe" )
TrainPipeLeakRate ( 0.06inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Gresham & Craven SJ type G ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.34inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 310lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakePipeTimeFactor ( 0.02s )
ORTSBrakeServiceTimeFactor ( 10.0s )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.095 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )

Comment ( Based upon Gresham & Craven SJ Ejector and control valve )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
Notch ( 0.0 0 TrainBrakesControllerReleaseStart )
Notch ( 0.1 0 TrainBrakesControllerRunningStart )
Notch ( 0.2 1 TrainBrakesControllerVacuumContinuousServiceStart ) ) )

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

CabView ( "..\\..\\common.cab\\SR_Q1\\Q1cab.cvf" )
HeadOut (  1.64 3.0 -4.78 )

Sound ( "..\\..\\Common.Sound\\LMS-Crab\\SR-Q1_cab.sms" )

Effects (
SteamSpecialEffects (

CylindersFX (
0.85 1.09 2.94
0 -0.5 1
0.3 )
Cylinders2FX (
0.85 1.00 2.00
0 -0.5 -1
0.3 )

Cylinders2FX (
-0.85 1.09 2.94
0 -0.5 1
0.3 )
Cylinders2FX (
-0.85 1.00 2.00
0 -0.5 -1
0.3 )

SafetyValvesFX (
0 4.17 -2.06
0 1 0
0.15 )
SafetyValvesFX (
0 4.17 -2.40
0 1 0
0.15 )

StackFX (
0 4.23 3.06
0 1 0
0.4 )

WhistleFX (
0 4.06 -2.90
0 1 0
0.1 )

Injectors1FX (
1.00 0.60 -4.20
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.60 -4.20
0 -1 -1
0.1 )

SteamBrakeFX (
0.60 0.55 -4.20
0.5 -1.0 0
0.05 )
SteamBrakeFX (
-0.60 0.55 -4.20
-0.5 -1.0 0
0.05 )


 )  )

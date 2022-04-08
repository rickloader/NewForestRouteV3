
Comment( **Based on BR Class 5MT 4-6-0 locomotive** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 37in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 58.05t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

Comment ( BR3 boiler, based on LMS 3B boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 334ft^3 )
ORTSEvaporationArea ( 1650ft^2 ) Comment ( tubes 1479 + firebox 171 )
ORTSSuperheatArea ( 358ft^2 )
MaxBoilerPressure ( 225psi )
MaxSteamHeatingPressure ( 50psi )

ORTSMaxSuperheatTemperature ( 280 )

ORTSBoilerEvaporationRate ( 15.95 ) Comment ( South Kirkby Coal )

Comment( max steam rate 26310lb/h = front end limit for South Kirkby Coal ( 26310lb/h / ORTSEvaporationArea 1650ft^2 ) = 15.95  )
Comment( As built: max steam rate 19150lb/h = front end limit for Blidworth Coal ( 19150lb/h / ORTSEvaporationArea 1650ft^2 ) = 11.61  )
Comment( Modified draughting c1954: max steam rate 22400lb/h = front end limit for Blidworth Coal ( 22400lb/h / ORTSEvaporationArea 1650ft^2 ) = 13.58  )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 28in )
CylinderDiameter ( 19in )

ORTSMaxIndicatedHorsepower ( 1820hp ) Comment ( estimate for Grade 1 Welsh Coal )

Comment ( ORTSMaxIndicatedHorsepower ( 1760hp ) Comment ( South Kirkby Coal ) )
Comment ( ORTSMaxIndicatedHorsepower ( 1340hp ) Comment ( Blidworth Coal - as built ) )
Comment ( ORTSMaxIndicatedHorsepower ( 1640hp ) Comment ( Blidworth Coal - after modification ) )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 28.7ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

ORTSFuelCalorific ( 13700btu/lb ) Comment ( South Kirkby coal )
ORTSBoilerEfficiency ( 0 0.88  211 0.44 )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

Comment ( BR1G tender )
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
BrakesEngineBrakeType ( "steam_brake" )
TrainPipeLeakRate ( 0.05inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Gresham & Craven SSJ type P ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.38inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 690lb/h )
VacuumBrakesSmallEjectorUsageRate ( 210lb/h )
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

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.0475 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )

Comment ( Locomotive brake based upon Gresham & Craven MkIV Steam Brake Valve )
Brake_Engine ( 0 1 0.25 0.0
NumNotches( 5
Notch( 0.00 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.25 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.50 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.75 0 EngineBrakesControllerBrakeNotchStart )
Notch( 1.00 0 EngineBrakesControllerBrakeNotchStart ) ) )

Comment ( Based upon Gresham & Craven SSJ Ejector and control valve )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 1
Notch( 0 1 TrainBrakesControllerVacuumContinuousServiceStart ) ) )

ORTSLargeEjector ( 0 1 0.1 0.0 NumNotches ( 0 ) )
  
ORTSSmallEjector ( 0 1 0.1 1.0 NumNotches ( 0 ) )

Brake_Brakeman ( 0 1 0.2 0.0
NumNotches ( 1
 Notch( 0 1 BrakemanBrakesControllerManualBrakingStart ) ) )

FireDoor ( 0 1 0.2 0 NumNotches ( 0 ) )

Sanding( 0 1 0 )

Blower ( 0 1 0.025 0.2 NumNotches ( 0 ) )

HeatingTap ( 0 1 0.035 0
NumNotches( 5
Notch ( 0.00 0 Dummy )
Notch ( 0.25 0 Dummy )
Notch ( 0.35 0 Dummy )
Notch ( 0.45 0 Dummy )
Notch ( 1.00 0 Dummy ) ) )

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

CabView ( "..\\..\\Common.Cab\\7MT\\BR5MT.cvf" )
HeadOut ( -1.4 3.0 -5.7 )

Sound ( "..\\..\\Common.Sound\\LMS-Crab\\BR-Standard_cab.sms" )

Effects (
SteamSpecialEffects (

WhistleFX (
0.0 3.692 2.717
0 0.8 0
0.2 )

SafetyValvesFX (
0 3.884 -2.821
0 0.95 0
0.2 )

SafetyValvesFX (
0 3.884 -2.821
0 -0.8 0
0.35 )

StackFX (
0 3.953 3.344
0 0.95 0
0.3 )
StackFX (
0 3.953 3.344
0 0.95 0
0.25 )
StackFX (
0 3.953 3.344
0 0.95 0
0.25 )

DrainpipeFX (
-1.5 1.258 -3.886
-0.4 -1 -0.2
0.05 )

CylindersFX (
-0.972 0.776 4.150
0 -0.2 1.4
0.1 )
CylindersFX (
0.972 0.776 4.150
0 -0.2 1.4
0.1 )
Cylinders2FX (
-0.972 0.774 4.050
0 -0.4 1.4
0.1 )
Cylinders2FX (
0.972 0.774 4.050
0 -0.4 1.4
0.1 )

Injctors1FX ( 
1.00 0.34 -5.70
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.34 -5.70
0 -1 -1
0.1 )

 LargeEjectorFX (
  -0.95 2.75 -3.95
  0.2 1 -0.2
  0.05 )
 LargeEjectorFX (
  -0.95 2.64 -3.95
  -0.2 -1 -0.2
  0.10 )
 LargeEjectorFX (
  -0.95 2.00 -3.95
  0 -1.0 0
  0.15 )
 SmallEjectorFX (
  -0.95 2.64 -3.95
  -0.4 -0.6 -0.2
  0.05 )
 SmallEjectorFX (
  -0.95 2.00 -3.95
  0 -1.0 0
  0.10 )

SteamBrakeFX (
0.60 0.50 -5.80
0.5 -1.0 0
0.05 )
SteamBrakeFX (
-0.60 0.50 -5.80
-0.5 -1.0 0
0.05 )

) )


Comment( **Based on BR Class 4MT 2-6-4T locomotive ** )

Comment ( ************************ General Information ************************
                      Included in this section - Wheels, sanding, etc
          *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 34in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 50.45t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
           Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************** )

Comment ( BR5 boiler, based on LMS 4C boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 278ft^3 )
ORTSEvaporationArea ( 1365ft^2 ) Comment ( tubes 1223 + firebox 143 )
ORTSSuperheatArea ( 246ft^2 )
MaxBoilerPressure ( 225psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( estimate based on BR 4MT 4-6-0 )
ORTSMaxSuperheatTemperature ( 245 )
ORTSBoilerEvaporationRate ( 14.35 ) Comment( to give max steam rate 19600lb/h = front end limit ( 19600lb/h / ORTSEvaporationArea 1365ft^2 ) = 14.35  )

Comment ( ***************************** Cylinders *****************************
           Included in this section - Number, Stroke, Diameter, steam usage, etc
          *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 28in )
CylinderDiameter ( 18in )

ORTSMaxIndicatedHorsepower ( 1110hp )

Comment ( ********************************* Fire *********************************
           Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
          *********************************************************************** )

ORTSGrateArea ( 26.7ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

ORTSFuelCalorific ( 13970btu/lb ) Comment ( Bedwas coal )
ORTSBoilerEfficiency ( 0 0.88  146 0.44 ) Comment ( Bedwas Coal )

Comment ( ********************************* Fuel *********************************
                      Included in this section - Coal, water, etc
          *********************************************************************** )

MaxTenderCoalMass ( 3.5t-uk )
MaxTenderWaterMass ( 20000lb )
IsTenderRequired( 0 )

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

CabView ( "..\\..\\Common.Cab\\7MT\\BR4MTT.cvf" )
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\BR-Standard_cab.sms" )

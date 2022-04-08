
Comment( **Based on BR Class 3MT 2-6-0 locomotive** )

Comment ( ************************ General Information ************************
                      Included in this section - Wheels, sanding, etc
          *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 31.5in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 48.5t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
           Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************** )

Comment ( BR6 boiler, based on GWR Standard 2 'B' boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 222ft^3 )
ORTSEvaporationArea ( 1024ft^2 ) Comment ( tubes 924 + firebox 118 )
ORTSSuperheatArea ( 184ft^2 )
MaxBoilerPressure ( 200psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( estimated performance based on GWR Hall data )
ORTSMaxSuperheatTemperature ( 200 )
ORTSBoilerEvaporationRate ( 13.93 )

Comment ( ***************************** Cylinders *****************************
           Included in this section - Number, Stroke, Diameter, steam usage, etc
          *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 17.5in )

Comment ( estimated performance )
ORTSMaxIndicatedHorsepower ( 835hp )

Comment ( ********************************* Fire *********************************
           Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
          *********************************************************************** )

ORTSFuelCalorific ( 12800btu/lb )
ORTSGrateArea ( 20.35ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

Comment ( estimated performance based on GWR Hall data )
ORTSFuelCalorific ( 12800btu/lb ) Comment ( Blidworth Coal )
ORTSBoilerEfficiency ( 0 0.98  160 0.49 ) Comment ( estimate for Blidworth Coal )

Comment ( ********************************* Fuel *********************************
                      Included in this section - Coal, water, etc
          *********************************************************************** )

Comment ( BR2 tender )
MaxTenderCoalMass ( 6t-uk )
MaxTenderWaterMass ( 35000lb )
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

CabView ( "..\\..\\Common.Cab\\7MT\\BR3MT.cvf" )
Sound ( "..\\..\\Common.Sound\\LMS-Crab\\BR-Standard_cab.sms" )

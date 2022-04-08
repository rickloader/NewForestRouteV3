
Comment( ** Based on original LSWR N15 4-6-0 locomotive ** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 39.5in )
ORTSNumberDriveAxles ( 3 )
ORTSDriveWheelWeight ( 58.35t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 297ft^3 )
ORTSEvaporationArea ( 1878ft^2 ) Comment ( tubes 1716 + firebox 162 )
ORTSSuperheatArea ( 337ft^2 )
MaxBoilerPressure ( 180psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 28in )
CylinderDiameter ( 22in )

Comment ( * gives performance close to that of indicator diagrams 1924 * )
Comment ( * original design with short travel valves and restricted steam passages * )

ORTSMaxIndicatedHorsepower ( 1486hp )
ORTSCylinderInitialPressureDrop( 0 0.98  50 0.91  100 0.90  150 0.86  200 0.69  250 0.63  300 0.58 350 0.47 )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 30.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

MaxTenderCoalMass ( 5t-uk )
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
BrakesEngineBrakeType ( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.05 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Dreadnought 30/20mm ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.26 )
VacuumBrakesLargeEjectorUsageRate ( 500lb/hr )
VacuumBrakesSmallEjectorUsageRate ( 250lb/hr )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.095 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )
Comment ( Steam Reverser )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSSmallEjector ( 0 1 0.1 0.2 NumNotches ( 0 ) )

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

CabView ( "..\\..\\common.cab\\ArthurcabV3\\KA.cvf" )
Sound ( "..\\..\\common.sound\\LMS-Crab\\LMS-Hughes_cab.sms"  )

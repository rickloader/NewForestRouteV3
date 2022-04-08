
Comment ( ** Based on Rebuilt Battle of Britain / West Country ** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 37in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 25mph )
ORTSDriveWheelWeight ( 58.3t-uk )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 404ft^3 ) Comment ( from diagram book, at half glass water 295 cu ft and steam space 109 cu ft )
ORTSEvaporationArea ( 2122ft^2 ) Comment ( firebox 253 + tubes 1869 )
ORTSSuperheatArea ( 488ft^2 )
MaxBoilerPressure ( 250psi )
MaxSteamHeatingPressure ( 60psi )

ORTSMaxSuperheatTemperature ( 280 )
ORTSBoilerEvaporationRate ( 17.14 ) Comment ( based on tests with Merchant Navy class )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 3 )
CylinderStroke ( 24in )
CylinderDiameter ( 16.375in )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 13800btu/lb ) Comment ( Bedwas coal )
ORTSGrateArea ( 38.3ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 14lb )

ORTSBoilerEfficiency( 0 0.86  144 0.43 ) Comment ( Bedwas coal - based on Merchant Navy class burn rate curve )

Comment ( based on rebuilt MN )
ORTSSuperheatCutoffPressureFactor ( 46.5 )
ORTSCylinderInitialPressureDrop( 0 0.98   50 0.96   100 0.95    300 0.94   350 0.90   400 0.85 )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 5.0t-uk )
MaxTenderWaterMass ( 45000lb )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
TrainPipeLeakRate ( 0.05inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Davies & Metcalfe type RM ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.42inHg/s ) Comment ( * Locomotive Tender fitted with Vacuum Reservoirs to accelerate release of brakes * )
VacuumBrakesLargeEjectorUsageRate ( 600lb/h )
VacuumBrakesSmallEjectorUsageRate ( 220lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakePipeTimeFactor ( 0.02s )
ORTSBrakeServiceTimeFactor ( 10.0s )

Comment ( == Independent Brake valve - Engine & Tender == )
EngineBrakesControllerMaxReleaseRate ( 2.0inHg/s )
EngineBrakesControllerMaxApplicationRate ( 2.0inHg/s )


Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers ( 

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ))
Comment ( Steam Reverser )

Brake_Engine ( 0 1 0.25 0.0
NumNotches( 1
Notch( 0 1 EngineBrakesControllerBrakeNotchStart ) ) )

Comment ( Based upon Davies & Metcalfe RM Ejector )
Brake_Train ( 0 1 0.05 0.1
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
    
Cabview ( "..\\..\\common.cab\\WC_BB\\Blackmoor_C.cvf" )
Sound ("..\\..\\common.sound\\Bullied_LightPacific\\blp-cab01.sms" )

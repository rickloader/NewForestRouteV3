
Comment( **Based on original Merchant Navy Class locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 37in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 25mph )
ORTSDriveWheelWeight ( 63.0t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 427ft^3 ) Comment ( from diagram book, at half glass water 314 cu ft and steam space 113 cu ft )
ORTSEvaporationArea ( 2450ft^2 ) Comment ( firebox 275 + tubes 2175 )
ORTSSuperheatArea ( 662ft^2 )
MaxBoilerPressure ( 280psi )
MaxSteamHeatingPressure ( 60psi )

ORTSMaxSuperheatTemperature ( 280 )
ORTSBoilerEvaporationRate ( 17.14 ) Comment ( evaporation rate of 42k lb/h sustained for 20 mins on test with South Kirkby coal )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 3 )
CylinderStroke ( 24in )
CylinderDiameter ( 18in ) 


Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 14230btu/lb ) Comment ( Bedwas coal )
ORTSGrateArea ( 48.5ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 14lb )

ORTSBoilerEfficiency( 0 0.796  154 0.398 ) Comment ( Bedwas coal - calculated from burn rate curve )
ORTSMaxIndicatedHorsepower ( 2486hp ) Comment ( test figure with South Kirkby coal )


Comment ( * Advanced performance factors based on BR test report with unrebuilt Merchant Navy * )
ORTSSuperheatCutoffPressureFactor ( 46.5 )
ORTSCylinderInitialPressureDrop( 0 0.98   50 0.96   100 0.95   300 0.94   350 0.875   400 0.80 )

ORTSCylinderBackPressure( 0 0.0   200 0.05  400 0.18  600 0.38  800 0.66  1000 1.02  1200 1.45  1400 1.96  1600 2.55  1800 3.22  2000 3.96  2200 4.78  2400 5.68  2600 6.65 )


Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 11200lb )
MaxTenderWaterMass ( 50000lb )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
TrainPipeLeakRate ( 0.05inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Davies & Metcalfe type VB ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.32inHg/s ) Comment ( * Locomotive Tender fitted with Vacuum Reservoirs to accelerate release of brakes * )
VacuumBrakesLargeEjectorUsageRate ( 600lb/h )
VacuumBrakesSmallEjectorUsageRate ( 240lb/h )
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


Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers (

Regulator ( 0 1 0.05 0  NumNotches( 0 ))

Cutoff    ( -0.70 0.70 0.01 0 NumNotches( 0 ))

Brake_Engine ( 0 1 0.25 0.0
NumNotches( 1
Notch( 0 1 EngineBrakesControllerBrakeNotchStart ) ) )

Comment ( Based upon Davies & Metcalfe VB Ejector )
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
HeatingTap ( 0 1 0.025 0 NumNotches( 0 ))
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
    
CabView ( "..\\..\\common.cab\\MN\\MN_SR.cvf" )
Sound ( "..\\..\\common.sound\\Bullied_LightPacific\\blp-cab01.sms" )

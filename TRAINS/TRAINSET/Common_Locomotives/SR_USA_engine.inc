
Comment( **Based on SR USA Class 0-6-0T locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )
Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 27in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 100650lb  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 170ft^3 )
ORTSEvaporationArea ( 876ft^2 ) Comment ( firebox 86 + tubes 790 )
MaxBoilerPressure ( 210psi )
MaxSteamHeatingPressure ( 50psi )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 24in )
CylinderDiameter ( 16.5in )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 12000btu/lb )
ORTSGrateArea ( 13.8ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 8lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 2500lb )
MaxTenderWaterMass ( 10000lb )
IsTenderRequired( 0 )

Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( "vacuum_single_pipe" )
BrakesEngineBrakeType ( "steam_brake" )
TrainPipeLeakRate ( 0.05inHg/s )

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

Comment ( == Independent Brake valve - Engine & Tender == )
EngineBrakesControllerMaxReleaseRate ( 2.0inHg/s )
EngineBrakesControllerMaxApplicationRate ( 2.0inHg/s )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers (

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff  ( -0.75 0.75 0.0075 0
NumNotches( 15
Notch ( -0.75  0 Dummy )
Notch ( -0.65  0 Dummy )
Notch ( -0.55  0 Dummy )
Notch ( -0.45  0 Dummy )
Notch ( -0.35  0 Dummy )
Notch ( -0.25  0 Dummy )
Notch ( -0.15  0 Dummy )
Notch ( 0.00  0 Dummy )
Notch ( 0.15  0 Dummy )
Notch ( 0.25  0 Dummy )
Notch ( 0.35  0 Dummy )
Notch ( 0.45  0 Dummy )
Notch ( 0.55  0 Dummy )
Notch ( 0.65  0 Dummy )
Notch ( 0.75  0 Dummy ) ) )

Comment ( Locomotive brake based upon Gresham & Craven MkIV Steam Brake Valve )
Brake_Engine ( 0 1 0.25 0.0
NumNotches( 5
Notch( 0 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.25 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.50 0 EngineBrakesControllerBrakeNotchStart )
Notch( 0.75 0 EngineBrakesControllerBrakeNotchStart )
Notch( 1 0 EngineBrakesControllerBrakeNotchStart ) ) )

Comment ( Based upon Gresham & Craven SJ Ejector and control valve )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
Notch ( 0.0 0 TrainBrakesControllerReleaseStart )
Notch ( 0.1 0 TrainBrakesControllerRunningStart )
Notch ( 0.2 1 TrainBrakesControllerVacuumContinuousServiceStart ) ) )

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
    
CabView ( "..\\..\\common.cab\\USA\\USA.cvf" )
Sound ( "..\\..\\common.sound\\Baldwin_Tram\\USA_cab.sms" )

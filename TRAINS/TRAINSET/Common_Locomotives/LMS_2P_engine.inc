
Comment( **Based on LMS 2P 4-4-0 locomotive** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 40.5in )
ORTSNumberDriveAxles ( 2 )
ORTSDriveWheelWeight ( 34.95t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

Comment ( MR/LMS G7S boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 210ft^3 )
ORTSEvaporationArea ( 1158ft^2 ) Comment ( tubes 1034 + firebox 124 )
ORTSSuperheatArea ( 252ft^2 )
MaxBoilerPressure ( 175psi )
MaxSteamHeatingPressure ( 50psi )

ORTSBoilerEvaporationRate ( 15.5 ) Comment ( Front end limit 18000 lb/hr )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 20in )
ORTSCylinderInitialPressureDrop( 0 0.97  50 0.94  100 0.93  150 0.92  200 0.91  250 0.86  300 0.73  350 0.49 ) Comment ( * representation of short travel valves * )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 21.0ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

ORTSFuelCalorific ( 11950btu/lb ) Comment ( Blidworth coal )
ORTSBoilerEfficiency ( 0 0.91  267 0.455 ) Comment ( Blidworth coal )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

Comment ( 4ton tender )
MaxTenderCoalMass ( 4t-uk )
MaxTenderWaterMass ( 35000lb )
IsTenderRequired( 1 )

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
TrainPipeLeakRate ( 0.05inHg/s )

Comment ( *** Ejectors *** )
Comment ( * Estimate for LMS 20/25 ejector * )
ORTSBrakePipeChargingRate ( 0.21inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 400lb/h )
VacuumBrakesSmallEjectorUsageRate ( 250lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 80psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

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

CabView ( "..\\..\\common.cab\\Fowler_LHD\\88.cvf" )
Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

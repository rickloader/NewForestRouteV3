
Comment( **Based on LSWR B4 Class 0-4-0T locomotive** )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 22.875in )
ORTSNumberDriveAxles ( 2 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 33.4t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )

ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 122ft^3 )
ORTSEvaporationArea ( 823ft^2 ) Comment ( firebox 57 + tubes 766 )
MaxBoilerPressure ( 140psi )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 22in )
CylinderDiameter ( 16in )
ORTSCylinderInitialPressureDrop( 0 0.97  50 0.94  100 0.93  150 0.92  200 0.91  250 0.86  300 0.73  350 0.49 ) Comment ( * representation of short travel valves * )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 12000btu/lb )
ORTSGrateArea ( 10.8ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 6lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 0.5t-uk )
MaxTenderWaterMass ( 6000lb )
IsTenderRequired( 0 )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.01 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Dreadnought 25/20mm ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.21 )
VacuumBrakesLargeEjectorUsageRate ( 400lb/h )
VacuumBrakesSmallEjectorUsageRate ( 250lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers ( 

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff ( -0.73 0.73 0.01 0
NumNotches( 17
Notch ( -0.73    0 Dummy )
Notch ( -0.67    0 Dummy )
Notch ( -0.61    0 Dummy )
Notch ( -0.52    0 Dummy )
Notch ( -0.42    0 Dummy )
Notch ( -0.32    0 Dummy )
Notch ( -0.21    0 Dummy )
Notch ( -0.14    0 Dummy )
Notch ( 0.0      0 Dummy )
Notch ( 0.14     0 Dummy )
Notch ( 0.21     0 Dummy )
Notch ( 0.32     0 Dummy )
Notch ( 0.42     0 Dummy )
Notch ( 0.52     0 Dummy )
Notch ( 0.61     0 Dummy )
Notch ( 0.67     0 Dummy )
Notch ( 0.73     0 Dummy ) ) )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

Comment ( Assumed steam brake operated by train vacuum brake when fitted - details not known, may be independent )

ORTSSmallEjector ( 0 1 0.1 1.0 NumNotches ( 0 ) )

Brake_Brakeman ( 0 1 0.2 0.0
NumNotches ( 1
 Notch( 0 1 BrakemanBrakesControllerManualBrakingStart ) ) )

FireDoor ( 0 1 0.1 0 NumNotches( 0 ))
Sanding( 0 1 0 )
Blower ( 0 1 0.025 0.2 NumNotches( 0 ))
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
    
CabView ( "..\\..\\common.cab\\HRPT_cab\\HRPT.cvf" )
Sound ( "..\\..\\common.sound\\Baldwin_Tram\\LSWR_B4_cab.sms" )

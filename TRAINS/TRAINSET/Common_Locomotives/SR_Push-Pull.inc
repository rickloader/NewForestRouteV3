
Comment ( *** SR Air Control Push Pull set driving trailer *** )

Comment  ( *****************  OR Parameters - Engine Section ************************)

Comment ( *** General *** )
Type ( Electric ) Comment ( * OR does not support Driving Trailer * )
WheelRadius ( 18in )
Sanding ( 20mph )
ORTSNumberDriveAxles ( 0 )

Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03 )
TrainPipeLeakRate ( 0.01 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for Dreadnought ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.090 )
VacuumBrakesLargeEjectorUsageRate ( 500lb/hr )
VacuumBrakesSmallEjectorUsageRate ( 250lb/hr )
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

Sound ( "..\\..\\Common.Sound\\SR_Push_Pull\\SRPP.sms" )

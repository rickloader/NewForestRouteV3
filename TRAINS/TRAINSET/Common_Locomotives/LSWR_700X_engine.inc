
Comment( **Based on Rebuilt LSWR 700 Class locomotive** )

Comment ( ************************** Engine Effects *******************
                      Included in this section - Steam emissions, etc
         ************************************************************* )

comment ( The format of these directional blocks is explained in the Lights section above.
These define the offset from the shape pivot point where steam/smoke should appear,
the direction it should go and the width of the nozzle. )

Comment ( ************************ General Information ****************
                      Included in this section - Wheels, sanding, etc
          ************************************************************ )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 30.5in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 46.7t-uk  )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )
ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 181ft^3 )
ORTSEvaporationArea ( 976ft^2 ) Comment ( firebox 117 + tubes 859 )
ORTSSuperheatArea ( 167ft^2 )
MaxBoilerPressure ( 180psi )

ORTSBoilerEvaporationRate ( 17.7 ) Comment ( estimate )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 26in )
CylinderDiameter ( 19in )

ORTSCylinderInitialPressureDrop( 0 0.97  50 0.91  100 0.90  150 0.86  200 0.69  250 0.63  300 0.58  350 0.47 )
Comment ( * representation of short travel valves * )


Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

ORTSFuelCalorific ( 13000btu/lb )
ORTSGrateArea ( 20.36ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

MaxTenderCoalMass ( 4t-uk )
MaxTenderWaterMass ( 35000lb )
    
Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment ( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( vacuum_single_pipe )
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

Cutoff ( -0.61 0.77 0.01 0
NumNotches( 16
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
Notch ( 0.73     0 Dummy )
Notch ( 0.77     0 Dummy ) ) )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
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
    
CabView ( "..\\..\\common.cab\\Ben\\Ben.cvf" )
HeadOut ( -1.1 3.0 -3.7 )

Sound ( "..\\..\\Common.Sound\\BA_8F\\4Fcab.sms" )

Effects (
SteamSpecialEffects (

WhistleFX (
0 3.40 -1.82
0 0.8 0
0.08 )

SafetyValvesFX (
0 4.00 -0.39
0 1 0
0.10 )
SafetyValvesFX (
0 4.00 -0.55
0 1 0
0.10 )

StackFX (
0 4.1 2.95
0 1 0
0.25 )

CylindersFX (
-0.3 0.64 2.0
0 -0.2 -1
0.1 )
Cylinders2FX (
0.3 0.64 2.0
0 -0.2 -1
0.1 )
Cylinders2FX (
-0.3 0.64 3.0
0 -0.2 -1
0.1 )
CylindersFX (
0.3 0.64 3.0
0 -0.2 -1
0.1 )

Injectors1FX (
1.00 0.40 -4.00
0 -1 -1
0.1 )
Injectors2FX (
-1.00 0.40 -4.00
0 -1 -1
0.1 )

LargeEjectorFX (
 -0.95 1.00 -3.30
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 -0.95 1.00 -3.30
 -0.2 -1.0 -0.1
 0.10 )
 ) )

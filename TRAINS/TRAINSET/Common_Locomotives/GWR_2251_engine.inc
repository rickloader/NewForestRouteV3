
Comment( ** Based on GWR 2251 Class locomotive ** )

Comment ( ************************ General Information ****************
          Included in this section - Wheels, sanding, etc
    ************************************************************ )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 31in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 43.4t-uk )

Comment ( ***************************** Cylinders *******************************************
                Included in this section - Number, Stroke, Diameter, steam usage, etc
    ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 30in )
CylinderDiameter ( 18.5in )

Comment ( ******************************* Boiler *********************************************
                Included in this section - Length, volume, heating area, pressure, etc
    *********************************************************************************** )

Comment ( 2251 boiler )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 218ft^3 )
ORTSEvaporationArea ( 1171ft^2 ) Comment ( Firebox 102 + Tubes 1069 )
ORTSSuperheatArea ( 76ft^2 )
MaxBoilerPressure ( 200psi )

Comment ( ********************************* Fire ***********************************************
                Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
   ************************************************************************************** )

ORTSGrateArea ( 17.4ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

ORTSFuelCalorific ( 13800btu/lb ) Comment ( * Bedwas coal * )

Comment ( ********************************* Fuel ******************
                Included in this section - Coal, water, etc
   ********************************************************** )

Comment ( * 3000 gallon tender * )
Comment ( * 2251 class generally had 3000 gallon tenders except those with ROD/Aberdare tenders * )

MaxTenderCoalMass ( 5t-uk )
MaxTenderWaterMass ( 30000lb )
IsTenderRequired ( 1 )
ORTSWaterScoopFillElevation ( 2.50m )
ORTSWaterScoopDepth ( 2.5in )
ORTSWaterScoopWidth ( 11.875in )

Comment ( ************************* Gearing (If used) ******************
                Included in this section - Gear type, ratio, etc
   ************************************************************** )

Comment ( ************************** Brake System *********************************************
          Included in this section - Compressor, Reservoir, Application rates, etc
   ************************************************************************************* )

Comment( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
BrakesEngineBrakeType ( "steam_brake" )
ORTSBrakePipeTimeFactor ( 0.03s )
TrainPipeLeakRate ( 0.05inHg/s )
VacuumBrakesHasVacuumPump ( 1 )

Comment ( *** Ejectors *** )
Comment ( * Guess for GWR combination ejector * )
ORTSBrakePipeChargingRate ( 0.24inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 0lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 25InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **********************************************
                Included in this section - Controllers for Regulator, Reverser, Brakes, etc
   ***************************************************************************************** )

EngineControllers (

Regulator ( 0 1 0.025 0  NumNotches( 0 ))

Cutoff    ( -0.75 0.75 0.0075 0
NumNotches( 15
Notch ( -0.75 0 Dummy )
Notch ( -0.65 0 Dummy )
Notch ( -0.55 0 Dummy )
Notch ( -0.45 0 Dummy )
Notch ( -0.35 0 Dummy )
Notch ( -0.25 0 Dummy )
Notch ( -0.15 0 Dummy )
Notch ( 0.00  0 Dummy )
Notch ( 0.15  0 Dummy )
Notch ( 0.25  0 Dummy )
Notch ( 0.35  0 Dummy )
Notch ( 0.45  0 Dummy )
Notch ( 0.55  0 Dummy )
Notch ( 0.65  0 Dummy )
Notch ( 0.75  0 Dummy ) ) )

Comment ( Based upon GWR combination ejector and control valve )
 Brake_Train ( 0 1 0.1 0.3
  NumNotches( 3
   Notch ( 0.0  0 TrainBrakesControllerReleaseStart )
   Notch ( 0.3  0 TrainBrakesControllerRunningStart )
   Notch ( 0.6  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

FireDoor ( 0 1 0.2 0 NumNotches( 0 ))
Sanding( 0 1 0 )
Blower ( 0 1 0.05 0.2 NumNotches( 0 ))
Shovel ( 0 1 1 0 NumNotches( 0 ))
DampersFront ( 0 1 0.1 1 NumNotches( 0 ))
DampersBack ( 0 1 0.1 0 NumNotches( 0 ))
Injector1Steam ( 0 1 0 )
Injector2Steam ( 0 1 1 )
Injector1Water ( 0 1 0.25 0 NumNotches( 0 ))
Injector2Water ( 0 1 0.25 0.5 NumNotches( 0 ))
CylinderCocks ( 0 1 1 )
Whistle ( 0 1 0 )
WaterScoop ( 0 1 0 ) )

Comment ( ********************** Micellaneous Information ****************************
                Included in this section - Alternate Views, Sounds, Names, etc
   **************************************************************************** )

CabView ( "..\\..\\common.cab\\GWR2\\2251.cvf" )
Sound ( "..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100a-01.sms" )

Comment ( ************************** Engine Effects *******************
                      Included in this section - Steam emissions, etc
         ************************************************************* )

Effects ( SteamSpecialEffects
(   StackFX
( 0 3.70 2.70
0 1 0
0.2 )
SafetyValvesFX
( 0 3.80 -0.50
0 1 0
0.25 )
WhistleFX
( 0.0 3.70 -2.70
0 1 0
0.1 )
Injectors1FX
( -1.5 1.25 -5.25
-0.4 -1 -0.2
0.05 )
Injectors2FX 
( 1.5 1.25 -5.25
0.4 -1 -0.2
0.05 )
CylindersFX
( 0.50 0.60 2.95
0 -0.4 1.5
0.1 )
Cylinders2FX
( 0.50 0.58 2.93
0 -0.4 1.5
0.1 )
CylindersFX
( -0.50 0.60 2.95
0 -0.4 1.5
0.1 )
Cylinders2FX ( 
-0.50 0.58 2.93
0 -0.4 1.5
0.1 )
 ) )
 
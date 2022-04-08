
Comment( **Based on GWR 79xx Modified Hall Class locomotive** )

Comment ( ************************ General Information ****************
                Included in this section - Wheels, sanding, etc
          ************************************************************ )

    Type ( Steam )
    ORTSSteamLocomotiveType ( Simple )
    WheelRadius ( 36.0in )
    ORTSNumberDriveAxles ( 3 )
    Sanding ( 20mph )
    ORTSDriveWheelWeight ( 57.5t-uk )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )

    ORTSSteamBoilerType ( Superheated )
    BoilerVolume ( 331ft^3 )
    ORTSEvaporationArea ( 1737ft^2 )
    ORTSSuperheatArea ( 295ft^2 )
    MaxBoilerPressure ( 225psi )
    MaxSteamHeatingPressure( 80psi )

    ORTSMaxSuperheatTemperature ( 200 )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

    NumCylinders ( 2 )
    CylinderStroke ( 30in )
    CylinderDiameter ( 18.5in )

    ORTSMaxIndicatedHorsepower ( 1560hp )
    ORTSSuperheatCutoffPressureFactor ( 45 )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

    ORTSGrateArea ( 27.07ft^2 )
    SteamFiremanMaxPossibleFiringRate( 3000 )
    ShovelCoalMass ( 12lb )
    
    ORTSFuelCalorific ( 14330btu/lb ) Comment ( * Markham coal * )
    ORTSBoilerEfficiency ( 0 0.98   152 0.49  ) Comment ( * Markham coal * )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

    Comment ( * Hawksworth 4000 gallon tender * )

    MaxTenderCoalMass ( 7t-uk )
    MaxTenderWaterMass ( 40000lb )
    IsTenderRequired ( 1 )
    ORTSWaterScoopFillElevation ( 3.10m )
    ORTSWaterScoopDepth ( 2.5in )
    ORTSWaterScoopWidth ( 11.875in )

Comment ( ************************** Brake System *********************************************
                Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************* )

Comment( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03s )
TrainPipeLeakRate ( 0.01inHg/s )
VacuumBrakesHasVacuumPump ( 1 )

Comment ( *** Ejectors *** )
Comment ( * Estimate for GWR 4 cone ejector * )
ORTSBrakePipeChargingRate ( 0.56inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 1320lb/h )
VacuumBrakesSmallEjectorUsageRate ( 440lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 120psi )

Comment ( *** Brake Valve Combined *** )
TrainBrakesControllerMaxSystemPressure ( 25InHg ) Comment ( * GWR operate 25in Hg * )

Comment ( ******************* Train Control Systems (If used) ***********************************************
                      Included in this section - Monitoring of Overspeed, Emergency Braking, Vigilance, etc
         *************************************************************************************************** )

Comment ( ** GWR AWS to be added when working in ORTS ** )

Comment ( ************************** Engine Controls **********************************************
                      Included in this section - Controllers for Regulator, Reverser, Brakes, etc
         ***************************************************************************************** )

EngineControllers (

 Regulator ( 0 1 0.025 0  NumNotches( 0 ))
 
 Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ))
           
Comment ( Based upon GWR 4-cone ejector and control valve )
Brake_Train ( 0 1 0.25 0
NumNotches( 2
Notch(0    0 TrainBrakesControllerReleaseStart )
Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

ORTSLargeEjector ( 0 1 0.25 0.0 NumNotches ( 0 ) )

ORTSSmallEjector ( 0 1 0.1 0.0 NumNotches ( 0 ) )

 FireDoor ( 0 1 0.2 0 NumNotches( 0 ))
 Sanding( 0 1 0 )
 Blower ( 0 1 0.05 0.2 NumNotches( 0 ))
 HeatingTap ( 0 1 0.1 0 NumNotches( 0 ))
 Shovel ( 0 1 1 0 NumNotches( 0 ))
 DampersFront ( 0 1 0.1 1 NumNotches( 0 ))
 DampersBack ( 0 1 0.1 0 NumNotches( 0 ))
 Injector1Steam ( 0 1 0 )
 Injector2Steam ( 0 1 1 )
 Injector1Water ( 0 1 0.25 0 NumNotches( 0 ))
 Injector2Water ( 0 1 0.25 0.5 NumNotches( 0 ))
 CylinderCocks ( 0 1 1 )
 Whistle ( 0 1 0 )
 WaterScoop ( 0 1 0 ))

Comment ( ********************** Micellaneous Information ****************************
                      Included in this section - Alternate Views, Sounds, Names, etc
         **************************************************************************** )

CabView ( "..\\..\\common.cab\\GWR1\\Hall_BR.cvf" )
HeadOut (  1.7 3.1 -5.5 )

Sound ( "..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100a-01.sms" )

Effects (
SteamSpecialEffects (   
StackFX (
0 4.128 3.4
0 1 0
0.3 )
SafetyValvesFX (
0 3.8 -0.75
0 1 0
0.2 )
WhistleFX (
0 4.023 -3.971
0 1 0
0.1 )
Injectors1FX (
0.75 0.30 -5.5
0 -1 -1
0.1 )
Injectors2FX (
-0.75 0.30 -5.5
0 -1 -1
0.1 )
CylindersFX (
1.1 0.7 4.1
0 0 1
0.1 )
Cylinders2FX (
1.1 0.68 4.1
0 0 1
0.1 )
Cylinders2FX (
-1.1 0.7 4.1
0 0 1
0.1 )
CylindersFX 
( -1.1 0.68 4.1
0 0 1
0.1 )
LargeEjectorFX (
 0.95 1.50 -4.20
 -0.2 -1.0 -0.1
 0.15 )
SmallEjectorFX (
 0.95 1.50 -4.20
 -0.2 -1.0 -0.1
 0.10 )
))


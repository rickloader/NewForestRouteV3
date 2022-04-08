
Comment( **Based on SR Schools class V 4-4-0 locomotive** )

Comment ( ************************ General Information ************************
                  Included in this section - Wheels, sanding, etc
      *********************************************************************** )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 33.5in )
ORTSNumberDriveAxles ( 2 )
ORTSDriveWheelWeight ( 42.0t-uk )
Sanding ( 15mph )

Comment ( ******************************* Boiler *******************************
       Included in this section - Length, volume, heating area, pressure, etc
      *********************************************************************** )

ORTSSteamBoilerType ( Superheated )
BoilerVolume ( 290ft^3 )
ORTSEvaporationArea ( 1766ft^2 ) Comment ( tubes 1604 + firebox 162 )
ORTSSuperheatArea ( 283ft^2 )
MaxBoilerPressure ( 220psi )
MaxSteamHeatingPressure ( 50psi )

ORTSMaxSuperheatTemperature ( 183 ) Comment ( estimate )

Comment ( ***************************** Cylinders *****************************
       Included in this section - Number, Stroke, Diameter, steam usage, etc
      *********************************************************************** )

NumCylinders ( 3 )
CylinderStroke ( 26in )
CylinderDiameter ( 16.5in )

ORTSMaxIndicatedHorsepower ( 1478hp ) Comment ( estimate )
ORTSSuperheatCutoffPressureFactor ( 36.6 )
ORTSCylinderInitialPressureDrop( 0 0.90   50 0.87   300 0.86   350 0.85 )

Comment ( ********************************* Fire *********************************
       Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
      *********************************************************************** )

ORTSGrateArea ( 28.3ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 12lb )

ORTSFuelCalorific ( 14000btu/lb ) Comment ( Welsh coal )
ORTSBoilerEfficiency ( 0 0.91   178 0.455 ) Comment ( based on GWR Castle with Welsh coal )

Comment ( ********************************* Fuel *********************************
                  Included in this section - Coal, water, etc
      *********************************************************************** )

MaxTenderCoalMass ( 5t-uk )
MaxTenderWaterMass ( 40000lb )
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
Comment ( * Estimate for Super Dreadnought ejector * )
VacuumBrakesHasVacuumPump ( 0 )
ORTSBrakePipeChargingRate ( 0.27 )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 240lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 90 )

Comment ( locomotive originally fitted with vacuum pump - removed c.1940 )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 21InHg )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ************************** Engine Controls **************************
     Included in this section - Controllers for Regulator, Reverser, Brakes, etc
      *********************************************************************** )

EngineControllers (

Regulator ( 0 1 0.095 0  NumNotches( 0 ) )

Cutoff    ( -0.75 0.75 0.01 0 NumNotches( 0 ) )

Comment ( Based upon Gresham & Craven Dreadnought Ejector )
Brake_Train ( 0 1 0.1 0.1
NumNotches( 3
 Notch(0    0 TrainBrakesControllerReleaseStart )
 Notch(0.1  0 TrainBrakesControllerRunningStart )
 Notch(0.2  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

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

CabView ( "..\\..\\common.cab\\ArthurcabV3\\KA.cvf" )
HeadOut (  -1.375 3.1 -5.10 )

Sound ( "..\\..\\common.sound\\LMS-Jubilee\\LMS-Patriot_cab.sms" )

Effects (
SteamSpecialEffects (

WhistleFX (
0 3.885 -3.4
0 -0.1 1.05
0.3 )

SafetyValvesFX (
0 4.25 -2.06
0 -0.75 0
0.5 )
SafetyValvesFX (
0 3.885 -2.16
0 1.3 0
0.2 )
SafetyValvesFX (
0 4.25 -2.37
0 -0.75 0
0.5 )
SafetyValvesFX (
0 3.885 -2.37
0 1.3 0
0.2 )

StackFX (
0 3.95 3.5
0 1 0
0.5 )

DrainpipeFX (
-1.5 1.258 -3.886
-0.4 -1 -0.2
0.05 )

Injectors1FX (
 -1.05 0.15 -5.0
 0 -0.5 -1
 0.08 )
Injectors2FX (
 1.05 0.15 -5.0
 0 -0.5 -1
 0.08 )

CylindersFX (
-1.22 0.51 4.78
0 -0.4 1.4
0.1 )
Cylinders2FX (
-0.40 0.51 4.78
0 -0.4 1.4
0.1 )
Cylinders2FX (
1.22 0.51 4.78
0 -0.4 1.4
0.1 )
Cylinders2FX (
-1.22 0.45 4.70
0 -0.4 1.4
0.1 )
CylindersFX (
-0.40 0.45 4.70
0 -0.4 1.4
0.1 )
CylindersFX (
1.22 0.45 4.70
0 -0.4 1.4
0.1 )

)
)


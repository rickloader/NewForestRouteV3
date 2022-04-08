
Comment( **Based GWR 1366 Class locomotive** )

Comment ( ************************ General Information ****************
                Included in this section - Wheels, sanding, etc
          ************************************************************ )

Type ( Steam )
ORTSSteamLocomotiveType ( Simple )
WheelRadius ( 22in )
ORTSNumberDriveAxles ( 3 )
Sanding ( 15mph )
ORTSDriveWheelWeight ( 35.75t-uk ) Comment ( with full coal and water )

Comment ( ***************************** Cylinders *******************************************
                Included in this section - Number, Stroke, Diameter, steam usage, etc
    ********************************************************************************** )

NumCylinders ( 2 )
CylinderStroke ( 20in )
CylinderDiameter ( 16in )

Comment ( ******************************* Boiler *********************************************
                Included in this section - Length, volume, heating area, pressure, etc
    *********************************************************************************** )

Comment ( 1366 Type V boiler )

ORTSSteamBoilerType ( Saturated )
BoilerVolume ( 119ft^3 )
ORTSEvaporationArea ( 788ft^2 ) Comment ( Firebox 73 + Tubes 715 )
MaxBoilerPressure ( 165psi )

Comment ( ********************************* Fire ***********************************************
                Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
   ************************************************************************************** )

ORTSGrateArea ( 10.7ft^2 )
SteamFiremanMaxPossibleFiringRate( 3000 )
ShovelCoalMass ( 10lb )

Comment ( ********************************* Fuel ******************
                Included in this section - Coal, water, etc
   ********************************************************** )

MaxTenderCoalMass ( 2.15t-uk )
MaxTenderWaterMass ( 8300lb )
IsTenderRequired ( 0 )

Comment ( *************************** Brake System *********************************************
                      Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************** )

Comment( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03s )
TrainPipeLeakRate ( 0.01inHg/s )
VacuumBrakesHasVacuumPump ( 1 )

Comment ( *** Ejectors *** )
Comment ( * Guess for GWR combination ejector * )
ORTSBrakePipeChargingRate ( 0.24inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 500lb/h )
VacuumBrakesSmallEjectorUsageRate ( 0lb/h )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve Combined *** )
TrainBrakesControllerMaxSystemPressure ( 25InHg ) Comment ( * GWR operate 25in Hg * )
ORTSBrakeEmergencyTimeFactor ( 5s )

Comment ( ******************* Train Control Systems (If used) ***********************************************
                      Included in this section - Monitoring of Overspeed, Emergency Braking, Vigilance, etc
         *************************************************************************************************** )

Comment ( ** GWR AWS to be added when working in ORTS ** )

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
 DampersFront ( 0 1 0.1 0.15
  NumNotches ( 6
   Notch ( 0.00 0 Dummy )
   Notch ( 0.15 0 Dummy )
   Notch ( 0.25 0 Dummy )
   Notch ( 0.50 0 Dummy )
   Notch ( 0.75 0 Dummy )
   Notch ( 1.00 0 Dummy ) ) )
 DampersBack ( 0 1 0.1 0.15
  NumNotches ( 6
   Notch ( 0.00 0 Dummy )
   Notch ( 0.15 0 Dummy )
   Notch ( 0.25 0 Dummy )
   Notch ( 0.50 0 Dummy )
   Notch ( 0.75 0 Dummy )
   Notch ( 1.00 0 Dummy ) ) )
 Injector1Steam ( 0 1 0 )
 Injector2Steam ( 0 1 1 )
 Injector1Water ( 0 1 0.25 0 NumNotches( 0 ))
 Injector2Water ( 0 1 0.25 0.5 NumNotches( 0 ))
 CylinderCocks ( 0 1 1 )
 Whistle ( 0 1 0 ) )

Comment ( ********************** Micellaneous Information ****************************
                      Included in this section - Alternate Views, Sounds, Names, etc
         **************************************************************************** )

CabView ( "..\\..\\common.cab\\GWR2\\Pannier2.cvf" )
Sound ( "..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100a-01.sms" )

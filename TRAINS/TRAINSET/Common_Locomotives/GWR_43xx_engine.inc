
Comment( **Based on GWR 43xx Class locomotive with 1923-1955 standard 4 boiler** )

Comment ( ************************ General Information ****************
                Included in this section - Wheels, sanding, etc
          ************************************************************ )

    Type ( Steam )
    ORTSSteamLocomotiveType ( Simple )
    WheelRadius ( 34in )
    ORTSNumberDriveAxles ( 3 )
    Sanding ( 15mph )
    ORTSDriveWheelWeight ( 52.6t-uk )

Comment ( ******************************* Boiler *********************************************
                      Included in this section - Length, volume, heating area, pressure, etc
          *********************************************************************************** )

  Comment ( Standard 4 boiler )

    ORTSSteamBoilerType ( Superheated )
    BoilerVolume ( 266ft^3 )
    ORTSEvaporationArea ( 1478ft^2 ) Comment ( Firebox 129 + Tubes 1349 )
    ORTSSuperheatArea ( 192ft^2 )
    MaxBoilerPressure ( 200psi )

    ORTSMaxSuperheatTemperature ( 140 ) Comment ( * estimate for Standard 4 boiler * )
    ORTSBoilerEvaporationRate ( 11.77 )

Comment ( ***************************** Cylinders *******************************************
                      Included in this section - Number, Stroke, Diameter, steam usage, etc
          ********************************************************************************** )

    NumCylinders ( 2 )
    CylinderStroke ( 30in )
    CylinderDiameter ( 18.5in )

    ORTSMaxIndicatedHorsepower ( 820hp ) Comment ( * estimate for Standard 4 boiler * )

Comment ( ********************************* Fire ***********************************************
                      Included in this section - Fuel Quality, Grate Area, Shoveling Rate, etc
         ************************************************************************************** )

    ORTSGrateArea ( 20.56ft^2 )
    SteamFiremanMaxPossibleFiringRate( 3000 )
    ShovelCoalMass ( 10lb )
    
    ORTSFuelCalorific ( 13800btu/lb ) Comment ( * Bedwas coal * )
    ORTSBoilerEfficiency ( 0 0.88  170 0.44 ) Comment ( * estimate for Bedwas coal * )

Comment ( ********************************* Fuel ******************
                      Included in this section - Coal, water, etc
         ********************************************************** )

Comment ( * 3500 gallon tender * )

    MaxTenderCoalMass ( 6t-uk )
    MaxTenderWaterMass ( 35000lb )
    IsTenderRequired ( 1 )

Comment ( ************************** Brake System *********************************************
                Included in this section - Compressor, Reservoir, Application rates, etc
         ************************************************************************************* )

Comment( *** Braking systems *** )
BrakesTrainBrakeType( vacuum_single_pipe )
ORTSBrakePipeTimeFactor ( 0.03s )
TrainPipeLeakRate ( 0.05inHg/s )
VacuumBrakesHasVacuumPump ( 1 )

Comment ( *** Ejectors *** )
Comment ( * Guess for GWR combination ejector * )
ORTSBrakePipeChargingRate ( 0.24inHg/s )
VacuumBrakesLargeEjectorUsageRate ( 500lb/hr )
VacuumBrakesSmallEjectorUsageRate ( 0lb/hr )
VacuumBrakesMinBoilerPressureMaxVacuum ( 110psi )

Comment ( *** Brake Valve *** )
TrainBrakesControllerMaxSystemPressure ( 25InHg )
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

 Cutoff    ( -0.77 0.76 0.01 0
  NumNotches( 23
   Notch ( -0.77   0 Dummy )
   Notch ( -0.73   0 Dummy )
   Notch ( -0.67   0 Dummy )
   Notch ( -0.55   0 Dummy )
   Notch ( -0.45   0 Dummy )
   Notch ( -0.36   0 Dummy )
   Notch ( -0.31   0 Dummy )
   Notch ( -0.27   0 Dummy )
   Notch ( -0.25   0 Dummy )
   Notch ( -0.24   0 Dummy )
   Notch ( -0.22   0 Dummy )
   Notch ( 0       0 Dummy )
   Notch ( 0.22    0 Dummy )
   Notch ( 0.24    0 Dummy )
   Notch ( 0.26    0 Dummy )
   Notch ( 0.30    0 Dummy )
   Notch ( 0.34    0 Dummy )
   Notch ( 0.39    0 Dummy )
   Notch ( 0.45    0 Dummy )
   Notch ( 0.58    0 Dummy )
   Notch ( 0.68    0 Dummy )
   Notch ( 0.73    0 Dummy )
   Notch ( 0.76    0 Dummy ) ) )

 Brake_Train ( 0 1 0.1 0.3
  NumNotches( 3
   Notch ( 0.0  0 TrainBrakesControllerReleaseStart )
   Notch ( 0.3  0 TrainBrakesControllerRunningStart )
   Notch ( 0.6  1 TrainBrakesControllerVacuumApplyContinuousServiceStart ) ) )

 ORTSLargeEjector ( 0 1 0.25 0.0 NumNotches ( 0 ) )

 FireDoor ( 0 1 0.2 0 NumNotches( 0 ))
 Sanding( 0 1 0 )
 Blower ( 0 1 0.05 0.2 NumNotches( 0 ))
 ORTSSteamHeat( 0 1 0.05 0 )
 Shovel ( 0 1 1 0 NumNotches( 0 ))
 DampersFront ( 0 1 0.1 1 NumNotches( 0 ))
 DampersBack ( 0 1 0.1 0 NumNotches( 0 ))
 Injector1Steam ( 0 1 0 )
 Injector2Steam ( 0 1 1 )
 Injector1Water ( 0 1 0.25 0 NumNotches( 0 ))
 Injector2Water ( 0 1 0.25 0.5 NumNotches( 0 ))
 CylinderCocks ( 0 1 1 )
 Whistle ( 0 1 0 ) )

Comment ( ********************** Micellaneous Information ****************************
                      Included in this section - Alternate Views, Sounds, Names, etc
         **************************************************************************** )

CabView ( "..\\..\\common.cab\\GWR1\\Manor.cvf" )
Sound ( "..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100a-01.sms" )

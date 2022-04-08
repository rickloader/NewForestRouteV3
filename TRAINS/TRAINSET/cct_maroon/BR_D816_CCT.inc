
Comment ( BR D816 4 wheel Covered Carriage Truck )

Comment ( ******************** General Information **********************
              Included in this section - Type, Shape, Size, Mass, etc
       *************************************************************** )

Mass  ( 22t-uk ) Comment ( Tare 17.3t-uk, Max Load 10t-uk )
WheelRadius ( 18.75in )
ORTSNumberAxles ( 2 )

Include ( ..\\Common_Wagons\\ScrewCoupling.inc )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( Vacuum_brake, Auxilary_reservoir, Handbrake )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 40kN ) Comment ( * braked 75% tare, coefficient of friction 0.31 * )
MaxHandBrakeForce ( 5kN )

ORTSNumberBrakeCylinders ( 1 )
ORTSBrakeCylinderSize ( 18in )
ORTSAuxilaryResCapacity ( 3.24ft^3 )

MaxReleaseRate ( 5.0InHg/s )
MaxApplicationRate ( 2.5InHg/s )
BrakeCylinderPressureForMaxBrakeBrakeForce ( 21InHg )
BrakePipeVolume ( 0.61ft^3 )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )
ORTSDavis_A ( 275 )
ORTSDavis_B ( 3.1 )
ORTSDavis_C ( 0.67 )

ORTSWagonFrontalArea ( 84ft^2 ) Comment ( * Estimate based on dimensions * )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.5 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 6in )
ORTSRigidWheelbase ( 23ft 6in )


Comment ( ********************* Wagon Visual Effects *********************
                    Included in this section - Effect type, etc
         ****************************************************************** )

Comment ( Through Steam Pipe for passenger working )

ORTSWagonSpecialType ( Heated )

Effects(
SpecialEffects(

Comment(==== Steam Heating Leaks ====)
 HeatingHoseFX(
  0.0 0.6 -3.5
  0 1 0
  0.13 ) ) )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "uk-swb-fit-wag01.sms" )


Comment ( BR bogie rail wagon 8ft bogies - Salmon - YM500D )
Comment ( Tare 27.45t, max load 51t )

Comment ( ******************** General Information **********************
              Included in this section - Type, Shape, Size, Mass, etc
       *************************************************************** )

WheelRadius ( 16in )
ORTSNumberAxles ( 4 )
MaxVelocity ( 45mph ) Comment ( empty 50 mph )

Include ( ..\\Common_Wagons\\ScrewCoupling.inc )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType ( "Handbrake" )
BrakeSystemType ( "Manual_Braking" )
MaxHandBrakeForce ( 20kN )

ORTSBrakeShoeFriction ( 0 0.24 1 0.23 2 0.22 3 0.21 4 0.20 5 0.19 8 0.18 9 0.17 12 0.16 17 0.15 20 0.14 24 0.13  34 0.12 40 0.11  55 0.10  66 0.09 115 0.08 160 0.08 ) 
Comment ( cast iron brake - single shoe )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 8ft 0in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "genfreightwag1.sms" )

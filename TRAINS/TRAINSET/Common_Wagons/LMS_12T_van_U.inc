
Comment ( LMS 12 ton van with AVB )

Comment ( ******************** General Information **********************
              Included in this section - Type, Shape, Size, Mass, etc
       *************************************************************** )

WheelRadius ( 18.75in )
ORTSNumberAxles ( 2 )
MaxVelocity ( 45mph )

Include ( ..\\Common_Wagons\\3LinkCoupling.inc )

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType ( "Handbrake" )
BrakeSystemType ( "Manual_Braking" )
MaxHandBrakeForce ( 5kN )

ORTSBrakeShoeFriction ( 0 0.24 1 0.23 2 0.22 3 0.21 4 0.20 5 0.19 8 0.18 9 0.17 12 0.16 17 0.15 20 0.14 24 0.13  34 0.12 40 0.11  55 0.10  66 0.09 115 0.08 160 0.08 ) 
Comment ( cast iron brake - single shoe )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

ORTSBearingType ( Friction )

ORTSDavis_C ( 0.66 )

ORTSWagonFrontalArea ( 83ft^2 )
ORTSDavisDragConstant ( 0.0004 )

CentreOfGravity ( 0m 1.3m 0m )
ORTSTrackGauge ( 4ft 8.5in )
ORTSUnbalancedSuperelevation ( 0in )
ORTSRigidWheelbase ( 9ft 0in )

Comment ( ********************** Micellaneous Information **********
                      Included in this section - Name, Sounds, etc
          ********************************************************* )

Sound ( "uk-swb-fit-wag01.sms" )


Comment( **Based on LMS Ivatt Class 2MT 2-6-2T locomotive** )

Comment ( ******************** General Information **********************
             Included in this section - Type, Shape, Size, Mass, etc
         *************************************************************** )

Size  ( 2.72m 4.07m 11.84m )
Mass  ( 63.25t-uk )
Comment ( Coal 3t-uk, Water 1350g-uk = 6.0t-uk, Mass without fuel and water = 54.25 )
Comment ( Adhesive mass with full load of full = 39.25t-uk )
WheelRadius ( 18in )
ORTSNumberAxles ( 2 )

Comment ( ************************* Coupler Information ************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
         ********************************************************************** )

   Coupling (
        Type ( Chain )
        Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Break ( 1200kN 1200kN )
			r0 ( 0cm 5cm )))

Comment ( ******************************* Brakes *********************************************
             Included in this section - Type, Force, Reservoir, Applicatiion, Release, etc
         ************************************************************************************ )

BrakeEquipmentType( "Vacuum_brake, Handbrake" )
BrakeSystemType( Vacuum_single_pipe )
MaxBrakeForce( 85kN ) Comment ( * braked 70% adhesive mass, coefficient of friction 0.31 * )
MaxHandBrakeForce ( 40kN )

ORTSBrakeCylinderSize ( 6in ) Comment ( Locomotive has steam brake  )
Comment ( Locomotive does not have vacuum reservoir. Steam brake is controlled mechanically. )

BrakeCylinderPressureForMaxBrakeBrakeForce ( 21inHg )
MaxReleaseRate ( 10inHg/s ) Comment ( * Steam brake - releases faster than vacuum * )
MaxApplicationRate ( 1.3inHg/s )  Comment ( * Steam brake - delay for pressure to build up in brake cylinder * )

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( ******************* Resistance & SuperElevation ********
          Included in this section - Wheelbase, gauge, friction, etc
         ******************************************************** )

  ORTSBearingType ( Friction )

  ORTSDavis_A ( 3169 )
  ORTSDavis_B ( 58.9 )
  ORTSDavis_C ( 4.78 )

  ORTSWagonFrontalArea ( 90ft^2 ) Comment ( * Estimate based on dimensions * )
  ORTSDavisDragConstant ( 0.0024 )
  ORTSTrailLocomotiveResistanceFactor ( 0.147 )

  CentreOfGravity ( 0m 1.98m -0.01m )
  ORTSTrackGauge ( 4ft 8.5in )
  ORTSUnbalancedSuperelevation ( 6in )
  ORTSRigidWheelbase ( 13ft 9in )

 Comment ( ************************ Lights (If used) ************************
            Included in this section - Type, Colour, Location, Size, Control, etc
          *********************************************************************** )

Comment ( ********************* Wagon Visual Effects *********************
                      Included in this section - Effect type, etc
          *********************************************************************** )

Effects(
SpecialEffects(

Comment(==== Steam Heating Leaks ====)
HeatingHoseFX(
0.5 0.6 5.5
0 1 0
0.13 )
HeatingHoseFX(
0.5 0.6 -5.5
0 1 0
0.13 ) ) )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
         *********************************************************************** )
 
Sound ("..\\..\\common.sound\\LMS-Crab\\LMS-Stanier_eng.sms" )
IntakePoint ( -4.59 3.10 FuelCoal )
IntakePoint ( 2.23 3.10 FuelWater )

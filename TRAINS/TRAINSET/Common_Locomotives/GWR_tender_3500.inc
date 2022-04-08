
Comment ( GWR 3500 gallon tender )

Comment ( *** General *** )

Mass ( 40.0t-uk )
Comment ( * 3500 gallon tender empty 18.25t-uk full 40.0t-uk coal 6t-uk, water 15.6t-uk * )
ORTSNumberAxles ( 3 )
WheelRadius ( 24.75in )

ORTSTenderWagonCoalMass ( 6.0t-uk )
ORTSTenderWagonWaterMass ( 35000lb )

Comment ( ************************* Coupler Information *************************
                Included in this section - Type, Spring, Buffer, Velocity, etc
          *********************************************************************** )
          
Comment ( * Rear Coupler * )
Coupling (
		Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Break ( 1200kN 1200kN )
			r0 ( 20cm 40cm )))

Comment ( * Front Coupler * )
	Coupling (
		Spring (
			Stiffness ( 1e4N/m 4.5e6N/m )
			Break ( 1200kN 1200kN )
			r0 ( 10cm 10cm ))
		CouplingHasRigidConnection ( 1 ))

Comment ( ******************************* Brakes *******************************
          Included in this section - Type, Force, Reservoir, Application, Release, etc
          *********************************************************************** )

    BrakeEquipmentType( Handbrake, Vacuum_brake, Auxilary_reservoir )
    BrakeSystemType( Vacuum_single_pipe )
    MaxBrakeForce( 81kN )       Comment ( * Braked at 66% tare mass, coefficient of friction 0.31, based on mass 46.7t-uk * )
    MaxHandbrakeForce( 40kN )

    ORTSNumberBrakeCylinders ( 2 )
    Comment ( Large GWR 4-6-0 has 1 x 30in cylinder with 9in stroke )
    Comment ( OpenRails assumes 4.5in stroke so this is set as two cylinders )
    ORTSBrakeCylinderSize ( 30in )
    ORTSAuxilaryResCapacity ( 16.50ft^3 ) Comment ( Based on Phillipson 16.50ft^3 vacuum chamber for 30in x 9in vacuum cylinder )

    MaxReleaseRate ( 2.0InHg/s )
    MaxApplicationRate ( 2.5InHg/s )
    BrakeCylinderPressureForMaxBrakeBrakeForce ( 25InHg )
    BrakePipeVolume ( 0.62ft^3 )     

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, friction, etc
          *************************************************************** )

	ORTSBearingType ( Friction )
	
Comment ( * Mass empty 18.5 tons, Width over body 8.5 feet, Height over body 9.7 feet, Length over body 22.5 feet * )
  ORTSDavis_A ( 304 )
  ORTSDavis_B ( 6.6 )
  ORTSDavis_C ( 0.68 )

  CentreOfGravity ( 0m 1.7m 0m ) 
  ORTSTrackGauge ( 4ft 8.5in )
  ORTSRigidWheelbase ( 15ft 0in )
  ORTSUnbalancedSuperelevation ( 6in )



Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )

 IntakePoint ( -2.9 3.0 FuelWater )
 IntakePoint ( 1.2 2.7 FuelCoal )
	    	
     Sound ( "..\\..\\common.sound\\uk_shared\\uk-tender-fit-01.sms" )

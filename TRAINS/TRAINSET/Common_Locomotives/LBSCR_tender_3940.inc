
Comment ( LBSCR 3940 gallon tender )

Comment ( *** General *** )

Mass ( 41.50t-uk )
Comment ( * 3940 gallon tender empty 19.9t-uk full 41.5t-uk coal 4t-uk, water 17.6t-uk * )
ORTSNumberAxles ( 3 )
WheelRadius ( 24in )

ORTSTenderWagonCoalMass ( 4.0t-uk )
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

Comment ( Locomotive and tender fitted with Westinghouse train air brake, controlled from vacuum brake by Jackson valve )
Comment ( Mixed braking not yet possible in OpenRails )

    BrakeEquipmentType( Handbrake, Vacuum_brake, Auxilary_reservoir )
    BrakeSystemType( Vacuum_single_pipe )
    MaxBrakeForce( 55kN )       Comment ( * Braked at 90% tare mass, coefficient of friction 0.31 * )
    MaxHandbrakeForce( 18kN )

    MaxReleaseRate ( 2.0InHg/s )
    MaxApplicationRate ( 2.5InHg/s )
    BrakeCylinderPressureForMaxBrakeBrakeForce ( 21InHg )
    BrakePipeVolume ( 0.62ft^3 )     

ORTSBrakeShoeFriction ( 0 0.31 1 0.30 2 0.28 3 0.27 4 0.26 5 0.25 7 0.24 8 0.23 9 0.22 12 0.21 14 0.20 17 0.19 20 0.18 24 0.17 29 0.16 34 0.15 40 0.14 47 0.13 55 0.12 66 0.11 84 0.10 115 0.09 160 0.09 ) 
Comment ( cast iron brake shoes )

Comment ( **************** Resistance & SuperElevation ****************
               Included in this section - Wheelbase, gauge, friction, etc
          *************************************************************** )

	ORTSBearingType ( Friction )
	
  ORTSDavis_A ( 668 )
  ORTSDavis_B ( 14.9 )
  ORTSDavis_C ( 0.50 )

   ORTSTrackGauge ( 4ft 8.5in )
  ORTSRigidWheelbase ( 13ft 0in )
  ORTSUnbalancedSuperelevation ( 6in )

Comment ( ********************** Miscellaneous Information *********************
                      Included in this section - Name, Sounds, etc
          *********************************************************************** )

IntakePoint ( -1.52 0.4 FuelWater )
IntakePoint ( 0.89 2.73 FuelCoal )
	    	
Sound ( ..\\..\\common.sound\\PKP-Pt47\\Tender.sms  )

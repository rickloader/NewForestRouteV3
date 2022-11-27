Cab view for LMS Jubilee. Ver 2.0

This modification from Ver. 1.3 to Ver. 2.0 has come about following a request from Peter Worsley to include a Night Cab, for use with the latest patch MSTS Bin.

To get it to work in any particular loco modify the eng file cab view entry to read 5XP.cvf
as below

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )

	CabView ( 5XP.cvf )           (THIS IS THE LINE TO MODIFY)
	HeadOut (  1.4 3.0 -5.3 )

        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )
The night view comes into use when used with MSTS Bin,which selects the day or night cab dependent on the time of day in the sim, or if you are in a tunnel.


Lew Price.

E-mail:- lewprice@ntlworld.com

Copyright Lew Price  June 2006



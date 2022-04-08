Cab view for 7F-88 RHD


I learned that the first 10 7F loco, where right hand driven, so I made a mirror of my 7F88 cabview.

To get it to work in any particular loco copy the cabviewfolder into the loco-folder then modify the eng file cab view entry to read 7FRHD.cvf
as below

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )

	CabView ( 7FRHD.cvf )           (THIS IS THE LINE TO MODIFY)
	HeadOut (  1.4 3.0 -5.3 )

        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )

Enjoy the ride!

copyright hans nooyen october 2010

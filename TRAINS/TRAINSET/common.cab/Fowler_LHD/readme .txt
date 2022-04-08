Cab view for 7F-88


One of the drivers, Len Renwick, of the real 7F88 asked me to make a cabview for the MSTS version of his loco.
He made the pictures I needed to build this cab!

This cabview is for BR53809 (UKtrainsim 24135) and S&DJR 88 (UKtrainsim 24136)

To get it to work in any particular loco modify the eng file cabview entry to read 88.cvf
as below

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )

	CabView ( 88.cvf )           (THIS IS THE LINE TO MODIFY)

	HeadOut (  1.4 3.0 -5.3 )

        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )



Enjoy it!

copyright Hans Nooyen. july 2010

Cab view for Blackmoor Vale and others of this class, Version 1.0;

See for loco: UKTS file 24326 and 24382.

Searching for pictures, I found a perfect picture of the Blackmoor Vale, and I wanted to make it running in MSTS
!
This cabview is build from aproxx 5-6 different pics.

A good English friend of mine, Mr. Len Renwick (a retired BR-driver) helped me out with the funtion and position of the controls


This cabview has 25 animated controls!

For details see Blackmoor Vale-cab-info.jpg


Installation:- Unzip to a folder of your own choice. Copy (right click)the cabview folder and paste it into the loco folder you wish to use it on.Either overwrite the original cabview folder or if you prefer to keep the original as well, rename it to Cabviewold prior to the paste operation.


To get it to work in any particular loco modify the eng file cabview entry to read Blackmoor.cvf
as below

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )

	CabView ( Blackmoor.cvf )           (THIS IS THE LINE TO MODIFY)
	HeadOut (  -1.65 3.1 -6.35 )

        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )


Hans Nooyen.

E-mail:- hansnooyen@kpnmail.nl
Copyright Hans Nooyen, November 2010


Cabview forBulleid Q1, Version 2.0

In version 2.0 I made a new reverser.

For this cab I used pictures taken by Len Renwick. 


My very special thanks go to Len Renwick. Len has been a loco driver for over 40 years. After his retirement from
British Rail, he is now with the West Somerset Railway. He helped me out with the functions and controls of this cabview.


To get it to work in any particular loco modify the eng file cabview entry to read Q1cab.cvf  as below:

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )


	CabView ( Q1cab.cvf ) 	(this is the line to change)
			

	HeadOut (  1.7 3.1 -5.5 )		


        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )


hans nooyen; e-mail: hansnooyen@kpnmail.nl
Holland
copyright: hans nooyen, june 2012

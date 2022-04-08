Cab view for U-class 31806


For this cab I used pictures provided to me by Len Renwick. 


My very special thanks go to Len. Len has been a loco driver for over 40 years. After his retirement from
British Rail, he is now with the West Somerset Railway. He helped me out with the functions and controls of this cabview.

However, I changed the steamheat pressure gauge into a steamchest pr. gauge.

There was no speedometer, but I made two versions of this cab: one without, as it should be, and one with speedometer.

Because the U-class was also equipped with a left hand drive, I added two new versions: with and without speedometer.

To get it to work in any particular loco modify the eng file cabview entry to read 31806.cvf  as below:

	SteamBlowerEffectExponent( 0.9 )
	SteamBlowerEfficiencyExponent( 1.1 )
	SteamBlowerMaxSteamUsageRate( 500 )	comment( lbs/h )
	SteamBlowerMaxProportionOfBlastEffect( 0.13 )

	SteamSmokeUnitsPerPoundOfFuel( 5.8 )


	for RHD: CabView ( 31806.cvf ) 	(this is the line to change), or
	         CabView ( 31806speedo.cvf )   (if you want a speedometer)		

	         HeadOut (  1.7 3.1 -6.3 )		

	for LHD: CabView ( 31806LHD.cvf ) 	(this is the line to change), or
	         CabView ( 31806LHDspeedo.cvf )   (if you want a speedometer)		

	         HeadOut ( -1.7 3.1 -6.3 )
		
        EngineControllers (
            comment( Engine controls )
        
            Regulator ( 0 1 0.025 0 
                NumNotches( 0 )
            )

If you have allready the RHD cabview you can replace the file: this file contains RHD and LHD!


hans nooyen; e-mail: hansnooyen@upcmail.nl
Holland



Enjoy it!

copyright Hans Nooyen. dec 2013

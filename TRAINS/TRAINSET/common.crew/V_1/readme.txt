Library of Crew Animations based on Ffestiniog Railway Crew Shapes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Version 7 - Crew for Furness Railway No. 20 added


Ffestiniog Rly crew figures by Kevin Martin (kevin.martin@festrail.co.uk).
Texturing by Kevin Martin / Ian Butters.
Also with thanks to Festiniog Railway Driver "Tony Wilmore" and Fireman "Emily Sharpe".

For more infomation on the Ffestiniog Railway then please visit :-
www.festrail.co.uk



This package uses aliasing and a common.crew folder for the crew animation files (similar to the common.cab and common.sound folders).  By doing this animations can be easily added to any locomotive by the addition of only one line to the .eng file.  No files need to be added to the locomotive folder.




INSTALLATION
~~~~~~~~~~~~

Unzip all the files in this zip file to your TRAINSET/common.crew/V_1 folder.


USE
~~~

Crew animations can be added to any steam locomotive by adding just one line to the locomotive's .eng file.  No other files need be copied.

To add the various crew animations to additional locos the following "FreightAnim" line should be added to the "Wagon" section of the ,eng file (I suggest that this is added just before the "Adhesion" line).  Be sure to make a copy of the .eng file before you do this in case you have any problems later.

Note that some modellers may already have added a "FreightAnim" to their locos.  Please check for this and do not add two such lines.  Only one is allows.


For SR E1 add:

	FreightAnim ( "..\\common.crew\\V_1\\E1.s" 0.01 0.01 )


For SR B4 add:

	FreightAnim ( "..\\common.crew\\V_1\\SR_B4.s" 0.01 0.01 )


For SR E1/R add:

	FreightAnim ( "..\\common.crew\\V_1\\E1R.s" 0.01 0.01 )
	

For W&LLR Joan add:

	FreightAnim ( "..\\common.crew\\V_1\\Joan.s" 0.01 0.01 )


For IoM 2-4-0T #1 (x1 size) add:

	FreightAnim ( "..\\common.crew\\V_1\\IOM.s" 0.01 0.01 )


For IoM 2-4-0T #1, #3, #4, #10, #12, #14 and #22 (green) add:

	FreightAnim ( "..\\common.crew\\V_1\\IOM_3.s" 0.01 0.01 )


For IoM 2-4-0T #2, #4, #5, #6, #10, #12 and #16 add:

	FreightAnim ( "..\\common.crew\\V_1\\IOM_1.s" 0.01 0.01 )


For IoM 2-4-0T #13 add:

	FreightAnim ( "..\\common.crew\\V_1\\IOM_2.s" 0.01 0.01 )
	

For Vale of Rheidol locos add:

	FreightAnim ( "..\\common.crew\\V_1\\VOR.s" 0.01 0.01 )

For Hawthorn 0-4-0ST add:

	FreightAnim ( "..\\common.crew\\V_1\\Asbestos.s" 0.01 0.01 )
	
For IoM 0-6-0T #13 add:

	FreightAnim ( "..\\common.crew\\V_1\\IOM_4.s" 0.01 0.01 )

For Furness Railway No. 20 add:

	FreightAnim ( "..\\common.crew\\V_1\\20.s" 0.01 0.01 )



David J. Forrest
dforrest@mail.infochan.com
28 June 2006
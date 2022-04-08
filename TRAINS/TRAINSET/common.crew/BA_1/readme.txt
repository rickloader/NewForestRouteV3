SVR Steam Loco Crew Animations Adjusted For Simple Addition of Crew to Other Locomotives
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Version 6.0 - Crew for LNER D16 added (readme file only changed).

In Version 5.0 Severn Valley Railway route installation is no longer required thanks to Terry Thornton (Duckweed).  It is not necessary to update Version 4.0 if you already have this installed (although Version 5.0 does have a new driver texture).

The diesel locos crews are now a separate download.

The crew textures are produced by Terry Thornton (Duckweed) and are used with his permission.


This package uses aliasing and a common.crew folder for the crew animation files (similar to the common.cab and common.sound folders).  By doing this animations can be easily added to any locomotive by the addition of only one line to the .eng file.  No files need to be added to the locomotive folder.


INSTALLATION
~~~~~~~~~~~~

Unzip all the files in this zip file to TRAINSET/common.crew/BA_1 folder.


USE
~~~

Crew animations can now be added to any locomotive by adding just one line to the locomotive's .eng file.  No other files need be copied.  Experimentation will be necessary to decide which crew congiguration is suitable for which loco.

To add the various BA crew animations to additional locos the following "FreightAnim" line should be added to the "Wagon" section of the ,eng file (I suggest that this is added just before the "Adhesion" line).  Be sure to make a copy of the .eng file before you do this in case you have any problems later.

For 8F animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\8F.s" 0 3.0 0.0 )

For Black 5 animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Black5.s" 0 3.0 0.0 )

For Ivatt animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Ivatt.s" 0 3.0 0.0 )

For Standard 4T animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Standard_4T.s" 0 3.0 0.0 )

For 15xx animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\15xx.s" 0 3.0 0.0 )

For 28xx animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\28xx.s" 0 3.0 0.0 )

For 45xx animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\45xx.s" 0 3.0 0.0 )

For 57xx animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\57xx.s" 0 3.0 0.0 )

For 0-6-0ST animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\GWR_060_ST.s" 0 3.0 0.0 )

For Manor animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Manor.s" 0 3.0 0.0 )

For Hall animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Hall.s" 0 3.0 0.0 )

For K3 animation (standing driver) add:

	FreightAnim ( "..\\common.crew\\BA_1\\K3.s" 0 3.0 0.0 )

For V1 animation (standing driver) add:

	FreightAnim ( "..\\common.crew\\BA_1\\V1.s" 0 3.0 0.0 )

For GWR Saint animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\Manor.s" 0 3.0 0.0 )

For LNER D16 animation add:

	FreightAnim ( "..\\common.crew\\BA_1\\K3.s" 0 3.0 0.0 )





David J. Forrest
dforrest@mail.infochan.com
16 October 2005
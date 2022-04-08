Library of Crew Animations Based on Paul Gausden's Crew Shapes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Version 15 - GWR Avonside 0-4-0ST, LNER C4 and D49, and HR Drummond "Barney" and "Small Ben" added.  Note added to LNER A8.



"Crew Aliases 1" (available from UKTS) must be installed for these Crew Animations to be used.  See the extracts for Paul Gausden's original readme files, at the end of the "Crew Aliases 1" readme file, for details of his original release of these crew shapes.  These shapes are used with his permission.


This is the first version of a "library" of crew animations using crew figures akready available for download.  This package uses aliasing and a common.crew folder for the crew animation files (similar to the common.cab and common.sound folders).  By doing this animations can be easily added to any locomotive by the addition of only one line to the .eng file.  No files need to be added to the locomotive folder.




INSTALLATION
~~~~~~~~~~~~

Unzip all the files in this zip file to your TRAINSET/common.crew/LIB_1 folder.


USE
~~~

Crew animations can now be added to any steam locomotive by adding just one line to the locomotive's .eng file.  No other files need be copied.

To add the various crew animations to additional locos the following "FreightAnim" line should be added to the "Wagon" section of the ,eng file (I suggest that this is added just before the "Adhesion" line).  Be sure to make a copy of the .eng file before you do this in case you have any problems later.

Note that some modellers may already have added a "FreightAnim" to their locos.  Please check for this and do not add two such lines.  Only one is allows.


For Scotsman (driver on left) and LNER V2 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\ScotL.s" 0.01 0.01 )

For Scotsman (driver on right) add:

	FreightAnim ( "..\\common.crew\\LIB_1\\ScotR.s" 0.01 0.01 )

For Twin Tender Scotsman add:

	FreightAnim ( "..\\common.crew\\LIB_1\\ScotTT.s" 0.01 0.01 )

For LNER A1, A2, A3 and A4 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\A1A2A3A4.s" 0.01 0.01 )

For GWR King add:

	FreightAnim ( "..\\common.crew\\LIB_1\\King.s" 0.1 0.1 )

For LNER N2 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\N2.s" 0.1 0.1 )
or
	FreightAnim ( "..\\common.crew\\LIB_1\\N2a.s" 0.1 0.1 )

For Terrier add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Terrier.s" 0.1 0.1 )

For LMS 8K add:

	FreightAnim ( "..\\common.crew\\LIB_1\\8K.s" 0.1 0.1 )

For 4-4-0 Director and 4-6-0 Robinson add:

	FreightAnim ( "..\\common.crew\\LIB_1\\440DIR.s" 0.1 0.1 )

For GWR Castle add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Castle.s" 0.1 0.1 )
or
	FreightAnim ( "..\\common.crew\\LIB_1\\Castle_a.s" 0.1 0.1 )
or
	FreightAnim ( "..\\common.crew\\LIB_1\\Castle_b.s" 0.1 0.1 )

For GWR Star add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Star.s" 0.01 0.01 )

For GWR 43xx add:

	FreightAnim ( "..\\common.crew\\LIB_1\\43xx.s" 0.1 0.1 )

For LMS G2 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\G2.s" 0.1 0.1 )

For Narrow Gauge Tank Loco add:

	FreightAnim ( "..\\common.crew\\LIB_1\\NG_1.s" 0.01 0.01 )

For GWR Great Bear add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Great_Bear.s" 0.01 0.01 )

For LNER J39 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\J39.s" 0.1 0.1 )

For LMS 7F add:

	FreightAnim ( "..\\common.crew\\LIB_1\\7F.s" 0 3.0 0.0 )

For S&D 7F add:

	FreightAnim ( "..\\common.crew\\LIB_1\\SD_7F.s" 0 3.0 0.0 )

For LMS Garratt (add to center unit):

	FreightAnim ( "..\\common.crew\\LIB_1\\GAR_1.s" 0 3.0 0.0 )

For LNER Garratt (add to center unit):

	FreightAnim ( "..\\common.crew\\LIB_1\\GAR_2.s" 0 3.0 0.0 )

For LMS Crab add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Crab.s" 0.1 0.1 )

For LNER B1 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\B1.s" 0.1 0.1 )

For LNER B17 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\B17.s" 0.1 0.1 )

For LNER W1 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\W1.s" 0.01 0.01 )

For LNER K3 and K4 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\K3.s" 0.1 0.1 )

For LNER P2 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\P2.s" 0.01 0.01 )

For GWR 2251 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\2251.s" 0.1 0.1 )

For LNER Sentinel Railcar add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Sentinel.s" 0 3.0 0.0 )

For LNER Y6 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Y6.s" 0 3.0 0.0 )

For LNER J72 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\J72.s" 0.1 0.1 )

For SR O2 add (O2 for SR214, O2a for SWR31)

	FreightAnim ( "..\\common.crew\\LIB_1\\O2.s" 0.01 0.01 )
	or
	FreightAnim ( "..\\common.crew\\LIB_1\\O2a.s" 0.01 0.01 )

For LNER R24/J69 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\J69.s" 0 3.0 0.0 )

For LNER Y1/Y3 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Y1.s" 0 3.0 0.0 )

For LNER J11 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\J11.s" 0.1 0.1 )

For Orion (W&LLR) add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Orion.s" 0.1 0.1 )

For SR G6 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\SRG6.s" 0.01 0.01 )

For LNER Q4 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Q4.s" 0.1 0.1 )

For LNER Q1 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Q1.s" 0.1 0.1 )

For WD 8F 2-8-0 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\WD_280.s" 0.01 0.01 )

For WD 8F 2-10-0 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\WD_2100.s" 0.01 0.01 )

For Princess Royal (Turbo) add:

	FreightAnim ( "..\\common.crew\\LIB_1\\PRoyal.s" 0.01 0.01 )

For WTC Jane add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Jane.s" 0 3.0 0.0 )

For LSWR 488 replace the existing FreightAnim line with (this lowers the crew to footplate level);

	FreightAnim ( "..\\common.crew\\LIB_1\\LSW488.s" 0.1 0.1 )

For GER D56/LNER D15 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\D15.s" 0.1 0.1 )

For SR O1 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\o1crew.s" 0.1 0.1 )

For Stanier 8P add:

	FreightAnim ( "..\\common.crew\\LIB_1\\8P.s" 0.1 0.1 )

For KWVR and ELR Hunslet 0-6-0T add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Hamburg.s" 0.1 0.1 )

For Y14/J15 add:

 	FreightAnim ( "..\\common.crew\\LIB_1\\J15.s" 0 3.0 0.0 )

For M15/F4 add:

 	FreightAnim ( "..\\common.crew\\LIB_1\\F4.s" 0 3.0 0.0 )

For Claughton add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Claughton.s" 0.1 0.1 )

For Standard 4T add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Standard_4T.s" 0.1 0.1 )

For Southwold locos add:

	FreightAnim ( "..\\common.crew\\LIB_1\\South1.s" 0.01 0.01 )

For ELR Standard 4 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\STD4.s" 0.1 0.1 )

For NER T3/LNER Q7 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\T3.s" 0.1 0.1 )

For Dean 0-4-4T add:

	FreightAnim ( "..\\common.crew\\LIB_1\\34.s" 0 3.0 0.0 )

For LNER A5 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\A5.s" 0.1 0.1 )

For LNER A8 add:
(There can be only one "FreightAnim" entry.  Where the original file has a "FreightAnim" line adding an oil lamp the "FreightAnim" crew line musr replace this or not be added)

	FreightAnim ( "..\\common.crew\\LIB_1\\A8.s" 0.1 0.1 )

For LNER G5 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\G5.s" 0.1 0.1 )

For LNER L1 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\L1.s" 0 3.0 0.0 )

For Andrew Barclay 0-4-0ST and GWR Avonside 0-4-0ST add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Barclay.s" 0.1 0.1 )

For LNER C4 and D49 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\8K.s" 0.1 0.1 )

For HR Drummond "Barney" 0-6-0 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\Barney.s" 0.1 0.1 )

For HR Drummond "Small Ben" 4-4-0 add:

	FreightAnim ( "..\\common.crew\\LIB_1\\SmallBen.s" 0.1 0.1 )





David J. Forrest
dforrest@mail.infochan.com
13 March 2005
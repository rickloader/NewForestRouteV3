Paul Gausden's GWR and Other Crew Animations Adjusted For Simple Addition to Any Steam Locomotive
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


See the extracts for Paul Gausden's original readme files, at the end of this file, for derails of his original release of these crew shapes.  This package is prepared with his permission.


This package uses aliasing and a common.crew folder for the crew animation files (similar to the common.cab and common.sound folders).  By doing this animations can be easily added to any locomotive by the addition of only one line to the .eng file.  No files need to be added to the locomotive folder.



INSTALLATION
~~~~~~~~~~~~

Unzip all the files in this zip file to TRAINSET/common.crew/GWR_1 folder.


USE
~~~

Crew animations can now be added to any steam locomotive by adding just one line to the locomotive's .eng file.  No other files need be copied.  Experimentation will be necessary to decide which crew congiguration is suitable for which loco.

To add the various crew animations to additional locos the following "FreightAnim" line should be added to the "Wagon" section of the ,eng file (I suggest that this is added just before the "Adhesion" line).  Be sure to make a copy of the .eng file before you do this in case you have any problems later.


1.  For SR/SECR P class add:

	FreightAnim ( "..\\common.crew\\GWR_1\\pCrew.s" 0.01 0.01 )

2.  For GWR No 13 add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW13.s" 0.01 0.01 )

3.  For Class 517 add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW1.s" 0.01 0.01 )

4.  For Class 850 class add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW2.s" 0.01 0.01 )

5.  For GWR 1361 and 1366 add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW4.s" 0.01 0.01 )

6.  For GWR Metro add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW3.s" 1 1 )

7.  For Dean Goods add:

	FreightAnim ( "..\\common.crew\\GWR_1\\GWCREW5.s" 0.1 0.1 )

8.  For SR 'Remembrance' add:

	FreightAnim ( "..\\common.crew\\GWR_1\\SR333CREW.s" 0.1 0.1 )

9.  For Littleton 4 add:

	FreightAnim ( "..\\common.crew\\GWR_1\\LITCREW.s" 0.1 0.1 )

10. For Ilfracombe Goods add:

	FreightAnim ( "..\\common.crew\\GWR_1\\ILGCREW.s" 0.1 0.1 )

For J94 Class add:

	FreightAnim ( "..\\common.crew\\GWR_1\\J94CREW.s" 0.1 0.1 )



Based on the following
~~~~~~~~~~~~~~~~~~~~~~

1.

SECR P class Crew and Eng Update
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

© July 2003 Paul Gausden

The crew are 270 polys each and vanish at 150m to improve efficiency when used for AI work.

2. 3. and 4

GWR Crew members
~~~~~~~~~~~~~~~~

Version: 1.0
Released : 7th Aug 2003
Model by : Paul Gausden
Email :  Paul@highworth.freeuk.com

This file contains crew figures for my classes 517 and 850 GWR tank engines and GWR loco No 13
Each figure adds about 270 polys to a scene.

This model is for your personal use and may not be sold. Please ask my permission before distributing.

5. and 6.

GWR Crew members - part 2
~~~~~~~~~~~~~~~~

Version: 1.0
Released : 7th Aug 2003
Model by : Paul Gausden
Email :  Paul@highworth.freeuk.com

This file contains crew figures for my classes 1366, 1361...

 and GWR Metro tank engines ********* which are being released with the route so you are unlikely to have these locos *********
However, I have included the crew as you may find them useful for adding to other locos.

Each figure adds about 270 polys to a scene.

This model is for your personal use and may not be sold. Please ask my permission before distributing.

7.

GWR Crew members - part 3 Dean Goods
~~~~~~~~~~~~~~~~

Version: 1.0
Released : 19th Sept 2003
Model by : Paul Gausden
Email :  Paul@highworth.freeuk.com

Projects and more downloads : http://www31.brinkster.com/decapod


This file contains crew figures for the Standard Dean Goods and the Black WD #196 version included in Version 1.2 of the model from UKtrainsim or www.highworth.freeuk.com.

8. 9. and 10

Crew members - part 4 - Driver on Left
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Version: 1.0
Released : 30th Sept 2003
Model by : Paul Gausden
Email :  Paul@highworth.freeuk.com

Projects and more downloads : http://www31.brinkster.com/decapod
- Look under Work in progress for other crew figure downloads.

This file contains crew figures for the following:

SR 333 4-6-4 'Remembrance'	Highworth Only
Littleton No.4 0-6-0ST		Highworth, UKTrainsim and Mid-East CD
Austerity J94 0-6-0ST K&ESR 25 (HW & UKTS) and NCB-5 from the Mid-East CD only
Ilfracombe Goods		Highworth, UKtrainsim







David J. Forrest
dforrest@mail.infochan.com
5 January 2004
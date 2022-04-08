TITLE   : Bullied Light Pacific Sound Set
Version : 1.0
Released: Nov 2002
Authors : Original exhaust beat sound recordings - Mike Ellis
	  (Used with his kind permission)
	  Original whistle and safety valve sounds - Stuart Williamson
	  Sound editing and sms writing - Stuart Williamson

	  All Rights Reserved.

***** READ ALL OF THIS FILE BEFORE ATTEMPTING TO USE THE FILES IN THE DOWNLOAD. *****

Thankyou for downloading these files.

IMPORTANT
~~~~~~~~~
This Sound Upgrade Set results in a more complex sound configuration than the MSTS original, requiring more of your systems resources. Hence only one Scalability Level has been implimented rather than the three levels used by MS/Kuju.

ONLY INSTALL IF YOUR SOUND LEVEL IN THE MAIN MSTS SOUND SETUP MENU IS SET TO HIGH AND MSTS PERFORMS TO YOUR SATISFACTION.

ZIPPED FILES
~~~~~~~~~~~~
blpSndSetV1-0.exe
readme.txt

These are for your personal use only, and may not be sold or distributed in any way.

WARNING: It is not recommended that you delete these files once installed.

Features
~~~~~~~~
These files create authentic sounds for Bullied Light Pacific locomotives. They contain a set of .sms files to provide driveable (Player) steam locos and non-driveable (AI/Helper) steam locos with authentic sounds, featuring the following:-

- good beats per wheel revolution timing with a correct 3 cylinder sound/rythum.
- smooth transitions between cruising sounds, eliminating cross-fading and sudden steps.
- reduced volume level at lower regulator settings, allowing coasting to silence for Player locos.
- squeaky con-rods sound effect.
- authentic whistle and safety valve sounds.
- syncronised external view and cab view sounds.
- AI loco's with these same sounds.
- AI loco's that sound their whistle and/or wheelslip at random on starting way.
- AI loco's that emit break squeal on drawing to a halt.
- Installation to a common.sound folder ready for aliasing.

The .sms files use primary aliasing from the loco's .eng file to the common.sound folder, then secondary aliasing from the .sms files to the global sound folder and to the SCOTSMAN folder, hence requiring no duplicating of files.

As the original recordings were mono then these have been re-used in the stereo environment of the cab by suitably frequency shifting them. This produces a duller sound (more appropriate for the insulated environment of the cab), as well as saving on further file duplication. ie stereoised mono sounds.

The 'generic' AI loco sounds have also been replaced by the authentic sounds. These have to be related directly to travel speed.

Bugs/Issues
~~~~~~~~~~~

In order to get the smooth transitions between cruising sounds it has been necessary to use the Speed trigger rather than the Variable1 trigger. This has the consequence that the sounds do reflect wheel slip.

If you start an activity with the loco at speed then there will hear a initial period where the exhaust beat sounds 'catch up' with the speed of the loco. This is a side effect I have not been able to avoid. Similar occurs with AI loco's that are audible at speed at the start of an activity.

Installation
~~~~~~~~~~~~
Before installing these files, I suggest you make a backup copy of all the files in the 
\TRAINS\TRAINSET directory - failure to do this may result in a lengthy re-installation process.

Step 1. Run UKST_pt1_v1-11.exe and this will create/use the following folders;
        TRAINSET\common.sound\Bullied_LightPacific
        TRAINSET\common.sound\uk_shared

Step 2. Use the following aliasing commands in your Player loco's .eng file.

Wagon () section:

        Sound ("..\\..\\common.sound\\Bullied_LightPacific\\blp-eng01.sms" )

or if you are using Key5 to give a 'Head out of cab' view use

        Sound ("..\\..\\common.sound\\Bullied_LightPacific\\blp-engpas01.sms" )

Engine () section:

        Sound ("..\\..\\common.sound\\Bullied_LightPacific\\blp-cab01.sms" )

or if you are using Key5 to give a 'Head in cab' view use

        Sound ("..\\..\\common.sound\\Bullied_LightPacific\\blp-cabpas01.sms" )


Use the following aliasing commands in your non-drivable loco's .eng file. (It is recommended you create non-drivable loco's using the function in RouteRiter).

Wagon () section:

        Sound ("..\\..\\common.sound\\Bullied_LightPacific\\#blp-01.sms" )

In the .wag file of the tender use

    	Sound ( "..\\..\\common.sound\\uk_shared\\UK-tender02.sms" )


Thats it! No copying of other files required.

If you have any problems with these files please post your queries on the UKTrainsim Sound Forum.


Stuart Williamson
scefhwil@barrysworld.com
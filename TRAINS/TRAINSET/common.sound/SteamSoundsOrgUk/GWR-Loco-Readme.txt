TITLE   : GWR Loco Sound Set
Version : 1.0
Released: Aug 2003
Authors : Original exhaust beat sound recordings - David Baily - www.steamsounds.org.uk
	  (Used with his kind permission, including the "SteamSounds" logo)
	  Other miscellaneous sounds - Stuart Williamson
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
GWRLocoSndSetV1-0.exe
GWR-Loco-Readme.txt

These are for your personal use only, and may not be sold or distributed in any way.

WARNING: It is not recommended that you delete these files once installed.


Features
~~~~~~~~
These files create authentic sounds for GWR steam locomotives. They contain a set of .sms files to provide driveable (Player) steam locos and non-driveable (AI/Helper) steam locos with authentic sounds, featuring the following:-

- good beats per wheel revolution timing.
- reduced volume level at lower regulator settings, allowing coasting to silence for Player locos.
- squeaky con-rods and other loco sound effects.
- syncronised external view and cab view sounds.
- AI loco's with these same sounds.
- AI loco's that sound their whistle and/or wheelslip at random on starting way.
- AI loco's that brake squeal on drawing to a halt.
- AI loco's that sound their safety valves whilst stationary.
- Installation to a common.sound folder ready for aliasing.

The .sms files use primary aliasing from the loco's .eng file to the common.sound folder, then secondary aliasing from the .sms files to the global sound folder and to the SCOTSMAN & 380 folders, hence requiring no duplicating of files.


Variants
~~~~~~~~

A number of slightly differing sms files are provided.

Player Loco's

GWR-Manor-Ext-01.sms     - For use in ALL player loco's regardless of pitch shift, etc.

GWR-Manor-Int-80a-01.sms  - Pitch shifted 80% for a lower pitch sound, .wav set a
GWR-Manor-Int-80b-01.sms  - Pitch shifted 80% for a lower pitch sound, .wav set b

GWR-Manor-Int-100a-01.sms - No pitch shift, .wav set a
GWR-Manor-Int-100b-01.sms - No pitch shift, .wav set b

GWR-Manor-Int-120a-01.sms - Pitch shifted 120% for a higher pitch sound, .wav set a
GWR-Manor-Int-120a-01.sms - Pitch shifted 120% for a higher pitch sound, .wav set b

AI Loco's (using non-drivable .eng files. It is recommended you create these using the function in RouteRiter).

#GWR-Manor-66-100-01.sms - for 6"6' diameter wheel loco's, no pitch shift, coasting on slowing only below 2mph
#GWR-Manor-66-100-11.sms - for 6"6' diameter wheel loco's, no pitch shift, coasting on slowing below 7mph
#GWR-Manor-66-100-21.sms - for 6"6' diameter wheel loco's, no pitch shift, coasting on slowing below 10mph

#GWR-Manor-66-80-01.sms  - for 6"6' diameter wheel loco's, 80% pitch shift, coasting on slowing only below 2mph

The purpose of the different speeds at which coasting occurs is because the sim does not allow slowing due to regulator shut-off and slowing due to gradients to be differentiated. So I suggest using "below 2mph" for freight loco's, "below 7mph" for local passenger loco's and "below 10mph" for express passenger loco's.

Installation
~~~~~~~~~~~~
Before installing these files, I suggest you make a backup copy of all the files in the 
\TRAINS\TRAINSET directory - failure to do this may result in a lengthy re-installation process.

Step 1. Run GWRLocoSndSetV1-0.exe and this will create/use the following folders;
        TRAINSET\common.sound\SteamSoundsOrgUk
        TRAINSET\common.sound\uk_shared

Please note. If you are using any of my other Loco Sound Sets and have modified any of the .wav files this installation may overwrite then.

Step 2. Use the following aliasing commands in your Player loco's .eng file.

Wagon () section:

        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Ext-01.sms" )

Engine () section:

        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-80a-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100a-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-120a-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-80b-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-100b-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\GWR-Manor-Int-120b-01.sms" )


For AI loco's use the following aliasing commands in your non-drivable loco's .eng file.

Wagon () section:

        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\#GWR-Manor-66-100-01.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\#GWR-Manor-66-100-11.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\#GWR-Manor-66-100-21.sms" )
or
        Sound ("..\\..\\common.sound\\SteamSoundsOrgUk\\#GWR-Manor-66-80-01.sms" )


In the .wag file of any tender use

    	Sound ( "..\\..\\common.sound\\uk_shared\\uk-tender-fit-01.sms" )


Thats it! No copying of other files required.

If you have any problems with these files please post your queries on the UKTrainsim Sound Forum.


Stuart Williamson
scefhwil@barrysworld.com
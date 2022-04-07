TITLE   : UKSteamTrack - Part 1 - Bogie Coaches Enhanced Sound
Version : 1.12 (Full Update)
Released: Aug 2002
Authors : Original sound recordings:
          - track joints by Andy Slater (www.brdw.co.uk)
          - door slams by John Owen (www.rwysnd.btinternet.co.uk)
          - brake squeal and randon sounds by Stuart Williamson
          Sound editing and sms configurations by Jeff Ashton and Stuart williamson

	  All Rights Reserved.
	  Copyright @ 2002 Jeff Ashton and Stuart Williamson

***** READ ALL OF THIS FILE BEFORE ATTEMPTING TO USE THE FILES IN THE DOWNLOAD. *****

Thankyou for downloading these files.

IMPORTANT
~~~~~~~~~
This Sound Upgrade Set results in a more complex sound configuration than the MSTS original, requiring more of your systems resources. Hence only one Scalability Level has been implimented rather than the three levels used by MS/Kuju.

ONLY INSTALL IF YOUR SOUND LEVEL IN THE MAIN MSTS SOUND SETUP MENU IS SET TO HIGH AND MSTS PERFORMS TO YOUR SATISFACTION.


ZIPPED FILES
~~~~~~~~~~~~
UKST_pt1_v1-12.exe
UKSTreadme.txt

These are for your personal use only, and may not be sold or distributed in any way.


Features
~~~~~~~~
- Speed varying authentic UK rail joint sounds for bogie coaches
- Brake squeal on braking to a halt
- Speed related random coach sounds
- Realistic door slam sounds when coaches are stationary (optional)
- 'Rear of consist' single bogie sounds (optional)
- AI trains with guards whistle for departure (optional)
- Sounds audible in External, Cab and Passenger views
- AI trains with only slightly less detailed sounds as player trains 
- Automatic installation of a 'Basic Setup' allowing 'out of the box' usage
- Automatic installation of an 'Advanced Setup' allowing user setup of optional features


Installation
~~~~~~~~~~~~
Run UKST_pt1_v1-12.exe

This installs all files into the main Sounds folder.

Installation automatically configures the 'Basic Setup'.

For the optional 'Advanced Setup' manual editing of .wag files is required.
 
WARNING: It is not recommended that you delete these files once installed.

Basic setup
~~~~~~~~~~~
The basic setup automatically replaces the "genpasswagsteam.sms" file in the main SOUND folder. This new version gives the rail joint, random noises and brake squeal sounds only.

This results in all coaches which use this file having the enhanced sounds. (These include Ian Morgan's Mark 1's)

This is not route dependant, so the rail joint sounds will be heard wherever such coaches are used.

If you do not wish for this all encompassing installation method, and wish only to convert certian rolling stock then you will need to use the 'Advanced Setup' detailed below.

If you wish to revert back to the original version of "genpasswagsteam.sms" then a copy has been placed in a folder called SOUND\old-sms.

Advanced Setup
~~~~~~~~~~~~~~
In order that both some of your coaches play these enhanced sounds it is necessary to convert appropriately selected period coaches. ie convert your BR Green Mark1's but not your BR Blue liveried ones. Once a coach has been converted it will still play rail joint sounds on any routes over which it is run, but ideally steam era livered coaches will only be run on steam era routes.

A small choice of varying feature .sms files have been included. These are as follows:-

UK-bogiecoach-01.sms

	This is for general use and includes the door slam sounds for player and AI trains.

UK-bogiecoach-01end.sms

	This is for particular use with end of consist coaches ie guards/brakes. Here only a single bogie rail joint sound is played, giving that authentic last coach sound. It includes the door slam sounds for player and AI trains. AI trains will also play a guards whistle towards the end of the door slamming period.

UK-bogiecoach-11.sms

	This is again for general use, but this version excludes the door slam sounds for the player-controlled trains. See below for more details.

UK-bogiecoach-11end.sms

	This is also for particular use with end of consist coaches ie guards/brakes. Here only a single bogie rail joint sound is played, giving that authentic last coach sound. This file only plays the door slam sounds for AI trains, and includes the guards whistle. See below for more details.

1. Open the .wag file of the coach to be converted.
2. Find the Sound () statement
3. Edit it to contain the name of the appropriately selected .sms file from above, ie it should become one of the following:-

Sound ( "UK-bogiecoach-01.sms" )
Sound ( "UK-bogiecoach-01end.sms" )
Sound ( "UK-bogiecoach-11.sms" )
Sound ( "UK-bogiecoach-11end.sms" )

4. Save the edited file.

Brake Squeal Feature
~~~~~~~~~~~~~~~~~~~~
The brake squeal effect is played by the coaches only at slow speeds whilst decelarating to a halt.

Door Slam Feature
~~~~~~~~~~~~~~~~~~
This works to provide the following effect. When coaches have slowed to a halt, ie at a platform, there will be a period of about 10 seconds silence, then steadily, but randomly over the next minute to a minute and a half, each coach will slam a door twice, at varying volumes. With AI trains, for each 'end of consist' coach present then a guards whistle will also sound towards the end of the door slam period.

Due to limitations in the programability of the sms system there are two unwanted side effects. Firstly, this effect starts whenever the coaches stop, ie even at wayside signals. Recogniosing when a train is in a station or ready to depart from a station isn't possible. Secondly, the effect does not occur with coaches that are stationary at the start of an activity. This means loose consists are quiet, which is good. The effect is activated the first time coaches come to a halt. This means that player service coaches that are moved, then uncoupled and left parked will still carry on door slamming.

For the door slam effect to be at its best AI trains will need to be made to pause at platforms for between 2 and 3 minutes.


VERSIONS
~~~~~~~~
1.0	Part 1, initial Upload
1.12	Part 1, full update
	Merger of the works by Stuart Williamson and Jeff Ashton
	
If you have any problems with these files please post your queries on the UKTrainsim Sound Forum.

        
Stuart Williamson
scefhwil@barrysworld.com

Jeff Ashton
ashtonjeffy@hotmail.com
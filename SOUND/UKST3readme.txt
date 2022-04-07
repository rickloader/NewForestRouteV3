TITLE   : UKSteamTrack - Part 3 - 4 Wheeled Short Wheel Base Wagon Sounds
Version : 1.0 (first upload)
Released: Oct 2002
Authors : Original track joint sound recordings by Andy Slater (www.brdw.co.uk)
	  Animals sounds are freeware from various web sites
          Other sounds by Stuart Williamson

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
UKST_pt3_v1-0.exe
UKST3readme.txt

These are for your personal use only, and may not be sold or distributed in any way.


Features
~~~~~~~~
- Speed varying authentic UK rail joint sounds for 4 Wheeled SWB Wagons
- Setups for fitted wagons and unfitted wagons
- Fitted wagons have brake squeal on braking to a halt
- Unfitted wagons have no brake squeal, and no brake hiss on (un)coupling
- Speed related random wagon sounds
- Setups with cow, horse, sheep or pig sounds for livestock wagons 
- Realistic buffer clank sound when wagons move suddenly
- Sounds audible in External, Cab and Passenger views
- AI trains with only slightly less detailed sounds than player trains 


Installation
~~~~~~~~~~~~
Run UKST_pt3_v1-0.exe

This installs all files into the main Sounds folder.

Installation automatically configures the 'Basic Setup'.

For the optional 'Advanced Setup' manual editing of .wag files is required.
 
WARNING: It is not recommended that you delete these files once installed.

Setup
~~~~~
Due to inconsistancies in the allocation of sms setups to the vast number of add-in wagons that are available an 'unzip and play' installation is not possible. It is therefore necessary for the .wag file of the wagons you wish to convert to be edited to point to an appropriate UKST Part 3 sms file. You should modify only wagons that are to be used on routes where jointed rails are appropriate as converted wagons will play rail joint sounds regardless of which route they are used on.

A choice of slightly varying feature .sms files have been included. These fall into two main categories, fitted (ie braked) wagons and unfitted (ie brakeless) wagons.

uk-swb-fit-wag01.sms

	This is for general use by fitted wagons. On drawing to a halt brake squeal can be randomly heard and on uncoupling brake hiss is heard (as per the default MSTS setups).

uk-swb-unfit-wag01.sms

	This is for general use by unfitted wagons. No brake squeal occurs and the uncoupling sound has no brake hiss.


For each of the above setups there are four livestock variants. These play either cow, horse, sheep or pig sounds when the wagons are stationary or travelling at low speed. The files are:-

uk-swb-fit-cow-wag01.sms
uk-swb-fit-horse-wag01.sms
uk-swb-fit-sheep-wag01.sms
uk-swb-fit-pig-wag01.sms

uk-swb-unfit-cow-wag01.sms
uk-swb-unfit-horse-wag01.sms
uk-swb-unfit-sheep-wag01.sms
uk-swb-unfit-pig-wag01.sms


1. Open the .wag file of the wagon to be converted.
2. Find the Sound () statement
3. Edit it to contain the name of the appropriately selected .sms file from above, ie it should become one of the following:-

Sound ( "uk-swb-fit-wag01.sms" )
Sound ( "uk-swb-fit-cow-wag01.sms" )
Sound ( "uk-swb-fit-horse-wag01.sms" )
Sound ( "uk-swb-fit-sheep-wag01.sms" )
Sound ( "uk-swb-fit-pig-wag01.sms" )

Sound ( "uk-swb-unfit-wag01.sms" )
Sound ( "uk-swb-unfit-cow-wag01.sms" )
Sound ( "uk-swb-unfit-horse-wag01.sms" )
Sound ( "uk-swb-unfit-sheep-wag01.sms" )
Sound ( "uk-swb-unfit-pig-wag01.sms" )

4. Save the edited file.


Buffer Clank Feature
~~~~~~~~~~~~~~~~~~
When wagons are jolted, particularly from stationary the clank of a buffer is played. To a degree the harder the jolt the loader the clank. Slow movement does actually cause the clank sound to be played but at such a low volume that it is not easily heard.

Brake Squeal Feature
~~~~~~~~~~~~~~~~~~~~
The brake squeal effect is played by the wagons only at slow speeds whilst decelarating to a halt.

Livestock Sounds
~~~~~~~~~~~~~~~~
A selection of three different sounds for each of the livestock types is played in a random order and at random timings whilst the wagons are stationary or at slow speed.

VERSIONS
~~~~~~~~
1.0	Part 3, initial Upload


If you have any problems with these files please post your queries on the UKTrainsim Sound Forum.

        
Stuart Williamson
scefhwil@barrysworld.com

Jeff Ashton
ashtonjeffy@hotmail.com
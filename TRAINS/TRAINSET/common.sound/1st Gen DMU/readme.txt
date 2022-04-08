---------------------------------------
***1st Generation DMU Sound Set v2.0***
---------------------------------------

Sound files, SMS and WAV editing by Benedict Todd
Horn sounds with kind permission from Laurence6436’s channel on www.youtube.com

============

IMPORTANT - both PDF and .doc readme files are also provided with this soundset - I recommend you use these if at all possible as the installation notes will be much clearer (and include pictures). If you can't open PDF or .doc files, this readme is a copy of the text ONLY.

============

Contents
--------
Introduction
Installation
Driving Style
Legal
Thanks

============

Introduction
------------
I have developed this soundset as a follow-on to my original 1st Generation DMU sounds, although the recordings used are completely new. Whilst this old set was designed to provide an improvement over the default Kiha 31 sounds in Microsoft Train Simulator, I wanted the new set to capture the sounds of these DMUs as closely as I could. This included addressing several issues with the previous sounds, including allowing the engines to rev-down (or at least sound like it!) when the throttle is closed in motion. This also allows for a much better system of gear change sounds. I also wanted to include as many associated sounds as possible, including a seperate two-tone horn (B key & Space Bar), Driver to Guard buzzer (Z key) and even wiper noises (V Key, even though the wipers don't move from the cab in MSTS!).

I made the original recordings for this soundset at the Pontypool & Blaenavon Railway's DMU Gala and also on the Dean Forest Railway. The engine sounds are mostly from a Class 117, although other bits are from a Class 108 and Class 104. These sounds should therefore be suited to all 1st Generation DMUs which used the standard 4-speed epicyclic gearbox and transmission.

I have tested these sounds on the 105, 121 and 117 models available from www.uktrainsim.com, although they should work with any 1st Generation DMU, providing it has four MANUAL gears which are set up in the same way (see Driving Style for changing speeds), and that the engine idles at 500 rpm and peaks at 2000 rpm (see Installation for instructions on setting up the .eng files of units using these sounds).

============

Installation
------------
NOTE: This is a large soundset (~10MB) – I strongly suggest that it is installed to the common.sound folder and then each unit is aliased to this location. This is the method outlined here.

To install these sounds you first need to copy the folder “1st Gen DMU v2” from this zip file into the “common.sound” folder located in your “TrainSimulator/Trains/Trainset” directory. This will install all the sound and .sms files.

Next, you need to edit the .eng files of each unit that you wish to use the sound set. Open the .eng file, either using Wordpad or your preferred Unicode editor (not Notepad or Word).

Two varieties of .sms files are provided, DMUeng.sms & DMUcab.sms for powered cars with engines, and DMUengTrailer.sms & DMUcabTrailer.sms for un-powered trailer cars.

For powered coaches you need to find the entry that says:
“ ***eng.sms”
and replace it with
“..\\..\\common.sound\\1st Gen DMU v2\\DMUeng.sms”

Then find:
“ ***cab.sms”
and replace it with
“..\\..\\common.sound\\1st Gen DMU v2\\DMUcab.sms”

Similarly, for un-powered coaches you need to find the entry that says:
“ ***eng.sms”
and replace it with
“..\\..\\common.sound\\1st Gen DMU v2\\DMUengTrailer.sms”

Then find:
“ ***cab.sms”
and replace it with
“..\\..\\common.sound\\1st Gen DMU v2\\DMUcabTrailer.sms”

I suggest you copy and paste the entries from above to avoid spelling errors which will cause “.sms file not found” errors in the game.

Note: In some .eng files there are more than 2 .sms entries. In these cases, replace each one with the appropriate cab or eng entries from above. Some units use a ***pass.sms, which should be replaced with DMUcab.sms or DMUcabTrailer.sms as appropriate.

Whilst the .eng file is open, you also need to find the entry which looks like this:

DieselEngineIdleRPM( 500 )
DieselEngineMaxRPM( 2000 )

and make sure the values are as shown above (i.e. Idle 500 & Max 2000).

This soundset has been designed to work with a notched throttle. Any values will work, providing the lowest notch is greater than 10%. If you do not feel confident altering these parameters then you can simply copy and paste my preferred setup over the EngineControllers( Throttle... entry in the .eng file:
	
	Throttle ( 0 1 0.04 0
		NumNotches ( 5
		Notch( 0.00 0 Dummy )
		Notch( 0.15 0 Dummy )
		Notch( 0.50 0 Dummy )
		Notch( 0.70 0 Dummy )
		Notch( 1.00 0 Dummy )
                     )
            )

This will give you a prototypical five notch throttle, and should be pasted into the eng file as shown in the picture below:


Finally, you should also check that GearBoxOperation is set to ( manual ), and that DoesHornTriggerBell is set to ( 0 ):

If you have any problems installing this soundset, please leave a message on the UKTrainsim forums, preferably in the MSTS Sounds section.

Congratulations! You should now be ready to drive your chosen DMU in the sim.

=============

Driving Style
-------------
This sound set will work best if the unit is driven in a prototypical way.

I can highly recommend the www.railcar.co.uk website, which contains a guide to driving the real thing, as well as lots of other interesting information about 1st Generation DMUs. Click Here for a link to the driving guide.

However, for those who do not want to read the whole guide, the important points are:

To move away, select forward gear (you should hear it engage) and release the brakes. Press E to engage first gear. Once you have heard the 'clunk' of the gearbox engaging you can open the throttle.

To change gear once you are in motion the throttle should be fully closed. Once you have heard the engine revs fall away to idle, press E to change up (or Shift+E to change down) a gear. Wait for the gearbox to re-engage (hisses) and then gently re-open the throttle.

Gears
1st	0 – 15 mph
2nd	16 – 27 mph
3rd	28 – 42 mph
4th 	43 – 70 mph

Once the train is in motion, never engage neutral until just before you come to a halt. All coasting should be done in 4th gear. It is best to wait until below 10mph before selecting neutral when stopping.

Do not change into a lower gear above the maximum speeds listed above or you will over-rev the engine.

============

Legal
-----
These files should have been downloaded from www.uktrainsim.com.

Unfortunately, I cannot be responsible for any loss or damage caused by the use of these files.

THESE SOUNDS ARE PROVIDED AS FREEWARE BUT COPYRIGHT REMAINS WITH THE AUTHOR.  YOU MAY NOT REDISTRIBUTE THESE SOUNDS IN ANY FORM OR FOR PAYMENT.  YOU MAY NOT RE-UPLOAD, REUSE OR MODIFY THESE SOUNDS IN ANY WAY FOR OR ON BEHALF OF ANY THIRD PARTY, EVEN IF PAYMENT IS NOT EXCHANGED.  YOU MAY UNDERTAKE ANY MODIFICATIONS YOU WISH SOLELY FOR YOUR OWN PERSONAL USE WHICH WILL BE RETAINED ON YOUR COMPUTER.

============

Thanks
------
Thanks must go to the understanding staff of the Pontypool & Blaenavon Railway and the Dean Forest Railway, who did not mind me wondering around with a microphone when gathering the sounds for this soundset. Both railways are well worth a visit.

Also, thanks to Laurence6436 for letting me use his recording of a class 104 horn from http://www.youtube.com. You may also like to visit his photo page at:
http://joe-bloggs-railway-photos.fotopic.net/

Happy DMU Driving.

Benedict Todd
benedicttodd@btinternet.com
12/07/2009
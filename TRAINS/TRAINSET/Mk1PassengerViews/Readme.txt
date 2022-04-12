Model : BR Mk1 coaches - First and Second Class Compartment Passenger Views
Version: 1.0
Released : 11/11/2002
Author : Model by Ian Morgan

These models are for your personal use only, and may not be sold or distributed in any way without the author's permission.

CONTENTS
~~~~~~~~
This pack consists of a Passenger View that can be used by any Mk1 coach with First Class compartments,
and a Passenger View that can be used by any Mk1 coach with Second Class compartments.

NOTE
~~~~

Although the self installer will put the supplied files into the correct place, you will have to edit the
.wag files of your coaches that you want to add a passenger view to.

INSTALLATION
~~~~~~~~~~~~
Before installing any models, I suggest you make a copy of all the files in the 
\TRAINS\TRAINSET directory - failure to do this may result in a lengthy re-installation process.

Unzip all the files into a folder called TempUnzip

Double-click the self installer .exe file and follow the instructions.

To use the passenger view, you will need to edit the .wag file of any coaches you want to add the passenger view to.
Open the .wag file using WORDPAD.

If it is the BCK, there is already a Passenger View entry, so replace the existing entry with the following
lines. For other types of 1st class compartment coach, add the following lines after the Buffers entry:


      Inside (
           PassengerCabinFile ( "..\\Mk1PassengerViews\\Mk1FirstInterior.s"	)
           PassengerCabinHeadPos ( 0.40 2.475 -2.05 )
           RotationLimit ( 45 120 0 )
           StartDirection ( 0 0 0 )
           Sound ("GenFreightWag1.sms" )
      )

For 2nd class compartment coach, add the following lines after the Buffers entry:


      Inside (
           PassengerCabinFile ( "..\\Mk1PassengerViews\\Mk1SecondInterior.s"	)
           PassengerCabinHeadPos ( 0.40 2.475 -2.05 )
           RotationLimit ( 45 120 0 )
           StartDirection ( 0 0 0 )
           Sound ("GenFreightWag1.sms" )
      )




Please be aware that this model may or may not be compatible with all the engines and rolling stock that you 
have available.

WARNING: It is not recommended that you delete these files once installed.

THANKS
~~~~~~
ian@uktrainsim.com

Models created using 100% guaranteed recycled electrons.

AMENDMENT HISTORY
~~~~~~~~~~~~~~~~~


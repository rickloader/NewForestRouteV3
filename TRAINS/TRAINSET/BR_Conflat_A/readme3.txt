Model : BR & exGWR Conflat A wagons with Type A and Type BD Containers
Version: 1.0
Released : 9/12/2001
Author : Model by Ian Morgan
         Skin by Ian Morgan based on photos of an O gauge models by Dave Harris.

These models are for your personal use only, and may not be sold or distributed in any way without the author's permission.

INSTALLATION
~~~~~~~~~~~~

Before installing any models, I suggest you make a copy of all the files in the 
\TRAINS\TRAINSET directory - failure to do this may result in a lengthy re-installation process.

Unzip all the files into a folder called unziptemp

Copy or move the folder BR_Conflat_A into the \TRAINS\TRAINSET directory.
( Normally - Program Files\Microsoft Games\Train Simulator\TRAINS\TRAINSET

You are now ready to create a consist containing these models by using the Activity Editor
supplied with Microsoft Train Simulator - the model will not be available in the simulator unless you do this.

Note that there are more than one versions of these wagons supplied, with a container, and empty.
The container is set up as an animated load, so it does not show in the Consist Editor, they both
look empty. Check the names of them.

Please be aware that this model may or may not be compatible with all the engines and rolling stock that you 
have available.

WARNING: It is not recommended that you delete these files once installed.

To Use a Container as a Static Scenic Item
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Copy or move the following files into the route shapes directory:
( Normally - Program Files\Microsoft Games\Train Simulator\ROUTES\EUROPE1\SHAPES )

	ContainerTypeA.s
	ContainerTypeA.sd
	ContainerTypeBD.s
	ContainerTypeBD.sd

Copy or move the files ContainerTypeATexture.ace and ContainerTypeATexture.ace into the route textures directory.
( Normally - Program Files\Microsoft Games\Train Simulator\ROUTES\EUROPE1\TEXTURES )

Open the route ref file using WORDPAD.
( Normally - Program Files\Microsoft Games\Train Simulator\ROUTES\EUROPE1\settleca.ref )
Add the following lines of text:

Static (
	FileName ( ContainerTypeA.s )
	Class ( "Clutter" )
	Align ( None )
	Description ( ContainerTypeA )
)

Static (
	FileName ( ContainerTypeBD.s )
	Class ( "Clutter" )
	Align ( None )
	Description ( ContainerTypeBD )
)

Save and exit WORDPAD.

You are now ready to add the models to the route using the Route Editor
supplied with Microsoft Train Simulator - the model will not be available in the simulator unless you do this.

The model can be found under the 'Clutter' heading and called 'ContainerTypeA' and 'ContainerTypeBD'.

Note that because this container was created as a wagon load, you may have to lower it
to ground level in the Route Editor.

Instructions on how to use the MSTS Route Editor may be found in tutorials on the Internet.



THANKS
~~~~~~
ian@uktrainsim.com

All models created using 100% guaranteed recycled electrons.
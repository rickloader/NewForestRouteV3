Files Included:

Readme.txt - this file.
File_id.diz - the file description file.
tsection.dat - build 00038 of the standardized \global\tsection.dat file

Add-On Packages Covered:
  Autobahn Roads
    Included in Newroads
    Download at: www.train-sim.com
  Conrail Indy Custom Roads
    Included in Newroads
    Download at: www.train-sim.com
  CykWorks Pack 1
    Included in XTracks
  Dirt Roads
    Included in Newroads
  DualTracks V1.1
    Included in XTracks
    Download at: www.train-sim.com
  Europeanbahn (Commercial Add-Ons)
    Located at: http://www.europeanbahn.co.uk/
  Gravel Roads v1.0
    Included in Newroads
    Download at: www.train-sim.com
  "Magnetic" Platforms (Ashphalt, Brick, Marble, White Stone)
    Download at: www.uktrainsim.com
  MTracks V1.9
    Download at: http://home.comcast.net/~markhyams/mtracks
  Newroads V4.01
    Download at: www.train-sim.com, www.uktrainsim.com
  Residential City Roads V1.0
    Included in Newroads
    Download at: www.train-sim.com
  RET Metro (Commercial Add-Ons)
    Located at: www.retmetro.netmenu.nl
  ScaleRail Beta
    Download at: www.3dtrains.com
  ScaleRoad Beta
    Download at: www.3dtrains.com
  STracks V1.0
    Download at: ?
  UK FineScale V3.1.6
    Download at: ukfs.trainsimfiles.com
  XTracks V3.18
    Download at: www.train-sim.com, www.uktrainsim.com
  YTracks V1
    Download at: www.train-sim.com

Other Download Sites
  Australia
    Steam4Me: http://www.railpage.org.au/steam4me/index.htm
  Denmark
    Team Routebuilders: http://team.routebuilders.dk/Engelsk/Engelsk.htm
  Germany
    Train DE: http://www.the-train.de

What it's about:

This is a project, discussed with several people, tested and verified by Okrasa Ghia of Xtracks fame, put together and distributed by David Beach.  The purpose of this project is to provide a standardized \global\tsection.dat file that can be shared by all track section developers.  Facing a Tower of Babel situation where every route that used extended track sections needed its own unique \global\tsection.dat file, this project was born.  One early, fortuitous, discovery paved the way to a \global\tsection.dat file that both includes extended sections and is compatible with the default routes.  So what we have here is a \global\tsection.dat file that includes many extended shapes, from several different developers, that is completely compatible with the default routes as issued by MS/KUJU.

WARNING:

If you have any \global\tsection.dat file installed other than the MS/KUJU default \global\tsection.dat file or an earlier build of this standardized \global\tsection.dat file, use of this file may initially cause MSTS to crash.  See item 4.c. below for how to resolve this.

How to use:

1. BACK UP YOUR EXISTING \GLOBAL\TSECTION.DAT FILE.

2. Copy the tsection.dat file included with this file into the ..\Train Simulator\Global\ folder.

3. Chris Cyko's Original L2 route (released in early 2002) is not compatible and the combination of that route and this file will cause MSTS to fail to completely start.  Chris' work released after late July 2003 is compatible.

4. First use of the standardized \global\tsection.dat file will impact existing routes in one of three ways (Updating a previously installed standardized \global\tsection.dat file as no additional impact):

a. Routes which do not use any extended track sections are not impacted so long as they remain as they are.  This includes all six of the default routes included in the original program and many other routes.  Editing these routes may require that track section id number be updated prior to editing, see below for id updating.  Any edit of a section of dynamic track, unless the route has been updated, will corrupt all other sections of dynamic track.  DO NOT EDIT ANY DYNAMIC TRACK without updating the route.  It is possible to edit dynamic track without realizing that the track is being edited.

b. Routes which use extended track sections that are included in this file will require one id number updating.  One means of updating id numbers is to use Okrasa Ghia's program "Horace" which is available for download in the files library at train-sim.com, search for the word Horace in the file descriptions to get the latest version.  Horace is also included in the Xtracks collection.

c. Routes which use extend track sections that are not included in this file are not compatible and will likely cause program errors (known as crashes).  There is a relatively easy, though possibly time consuming solution, have those sections included in the file.  See below for further detail on having sections included in the file.  Until the sections are added to this file, it will be necessary to move all routes using those sections out of the routes folder while using this \global\tsection.dat file.

5. If you use Horace to update the id numbers, be sure to follow all of the instructions included with the program, particularly in regards to uncompressed world files, the need to delete the .RDB, .RIT, .TDB, and .TIT files, any .BK versions thereof, and do a track data base rebuild.

6. New routes, those started after the first use of any build of this file, are fully compatible.

7. Further versions of the standardized file will be fully compatible with all routes that are compatible with this version, once "Horaced" for this version, a route will not need to be "Horaced" again.

8. Did I mention that you should backup before using this for the first time?

How to get shapes/sections included:

1. If you have shapes/sections you wish to have included, email the .S, .SD files and the relevant tsection.dat entries to tsection@train-sim.com.  New versions will be released as warranted.

2. If you are developing shapes/sections and wish to have a block of id numbers allocated, please send an email to tsection@train-sim.com with a request for the number of id numbers desired.

3. My intent is to maintain reasonable compatibility with the naming convention that MS/KUJU mostly used for their shapes.  So I may request that you rename files to maintain the naming convention.  If you wish, you may email your proposed .S file names with a brief description of the object to me at tsection@train-sim.com and I will let you know if the names seem appropriate.

4. All files sent will be kept in strict confidence and will not be available from me.  The only file I will release is a version of the \global\tsection.dat file that includes reference to the sections and shapes.  This file will only be released through train-sim.com.

5. When developing shapes, try to use existing sections.  For example if your shape is for a 10 meter long track with a 1.5 meter gauge, use track section 0, rather than making a new SectionSize ( 1.5  10 ) entry.

General Notes:

1. Please do not distribute any modified version of the standardized \global\tsection.dat file.  The file may be freely distributed in its unmodified form, but it is no longer standardized if anyone else modifies it.

2. If you are distributing a route that relies on the standardized \global\tsection.dat file, please add the following to your distribution and install package:

a. Include notification in the readme file of your route that you are using the standardized \global\tsection.dat file and that it may introduce incompatibilities with routes that use extended track sections that are not included in the file.

b. Read the _INFO(Build nnnnn) line of the \global\tsection.dat file on the machine the route is being installed on (if present).

i. Do not install a lower build number over a higher build number.
ii. If the build number ends with an alpha character, stop and ask the user to continue or skip.  A trailing alpha character indicates a development beta version of the file.
iii. If the build number is not present - if a _Skip line appears before the _INFO(Build ... line is found - warn the user and ask if they wish to continue.

3. Questions about the file itself should come to me at tsection@train-sim.com.

4. Questions about any of the sections or shapes included should be directed to the developers.  Each developer is listed, with contact information, and the file is sufficiently annotated to tell who the developed any section or shape.

5. Questions of general interest should be directed to the route developers forum at train-sim.com.

6. At present, I also monitor the route building, Xtracks, and UK Fine Scale forums at UKTrainSim, questions may be directed to one of those forums as relevant.

7. There are now utilities that can be used to produce a trimmed down working version of this file.  These utilities are of benefit to route builders, reducing the number of shape names that show up in the selection window to only those present in the \global\shapes\ folder.  One utilitly is from Martyn Griffin, available in the www.train-sim.com files library.  Another choice is a function within the current version of Route Riter, available in various locations.

8. The entries in the selection window in the RE are not sorted alphabetically, but rather by ASCII value.  This may be used to bring various groups of shape names to the top of the list.  For example, if you do a search and replace in the tsection.dat file changing all "A1txxx" through "A4txxx" shape references to "a1txxx" through "a4txxx" and change all "ukfsxxx" to "UKFSxxx", the UKFS shapes will sort out above the a series shapes.


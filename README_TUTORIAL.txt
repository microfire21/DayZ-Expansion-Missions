If you need a video to explain you everything step by step,
we recommend you to check out this guide from TheWomberchomby:
https://youtu.be/xwqJ0nIiYb0

(ignore the init.c part)

# Disclaimer !
Adding or removing expansion (mods) currently require a wipe (loss of player and base progression)
Think to delete your "Storage" folder from your mission.

If you are reading this from Github, please download the zip containing this template and instructions !
https://github.com/ExpansionModTeam/DayZ-Expansion-Missions/archive/refs/heads/master.zip




How to add Expansion Items (weapons/items/vehicles) to your mission

STEP 1.
From the template, copy the "expansion_ce" folder and paste it inside your mission.

STEP 2.
From the template, open the file "cfgeconomycore.xml" and copy from <ce folder="expansion_ce"> to (including) </ce>
Inside your mission, open the file "cfgeconomycore.xml" and paste this lines before "</economycore>".

STEP 3.
From the template, inside the file "cfgeventspawns.xml" copy the spawn points
Inside your mission, open the file "cfgeventspawns.xml" and paste this lines before "</eventposdef>".




How to make your mission DayZ-Expansion-Market compatible

STEP 1.
Inside your mission, add the folder "expansion" from the template.

If this folder doesn't exist from the template of the desired map,
create a folder named "expansion" and inside this new folder create two folders "objects" and "traders".

P.S. Yes the init.c part has been removed. This is now managed by the mod instead :)

For more informations, please read our wiki at
https://github.com/salutesh/DayZ-Expansion-Scripts/wiki

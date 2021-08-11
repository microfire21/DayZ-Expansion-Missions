#include "$CurrentDir:\\Missions\\ExpansionCOM.Namalsk\\core\\BaseModuleInclude.c"
#include "$CurrentDir:\\Missions\\ExpansionCOM.Namalsk\\expansion\\missions\\MissionConstructor.c"

Mission CreateCustomMission(string path)
{
	return new CommunityOfflineClient();
}

void main()
{
	bool loadTraderObjects = true;
	bool loadTraderNPCs = true;

	string MissionWorldName = "empty";
	GetGame().GetWorldName(MissionWorldName);
	
	if (MissionWorldName != "empty")
	{
		//! Spawn mission objects and traders
		ExpansionObjectSpawnTools.FindMissionFiles("$CurrentDir:\\mpmissions\\ExpansionCOM." + MissionWorldName, loadTraderObjects, loadTraderNPCs);
	}
	
	//! Init server central economy
	// Hive ce = CreateHive();
	// if ( ce )
	// 	ce.InitOffline();
}
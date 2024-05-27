class CfgPatches
{
	class ResurgenceRP_LoadingScreen_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class ResurgenceRP_LoadingScreen
	{
		dir = "ResurgenceRP_LoadingScreen";
		credits = "ResurgenceRP";
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] =
				{
					"ResurgenceRP_LoadingScreen/Scripts/3_Game/"
				};
			};
		};
	};
};
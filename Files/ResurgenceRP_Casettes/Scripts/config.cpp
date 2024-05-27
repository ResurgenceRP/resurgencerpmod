class CfgPatches
{
    class ResurgenceRP_Cassetes
    {
        requiredAddons[] =
        {
            "DZ_Data",
			"ResurgenceRP_Core",
			"YK_Radio"
        };
    };
};

class cfgVehicles
{
    class YK_Cassette_Base;
	class resrp_casettes_GetIntoTheHole: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Get into the hole";
		descriptionShort = "Looks like it was recorded in some kind of shack, but by all gods it sounds amazing";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\TheHole.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_thehole";
		};
	};

	class resrp_casettes_LamplightLegends: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Lamplight Legends";
		descriptionShort = "Looks like it was recorded in some kind of shack, but by all gods it sounds amazing";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\LamplightLegends.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_LamplightLegends";
		};
	};

};


class CfgSoundSets
{
	class Mods_SoundSet_Base;
	class ResurgenceRP_Casettes_soundset_thehole
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_thehole"};
	};
	
	class ResurgenceRP_Casettes_soundset_LamplightLegends
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_LamplightLegends"};
	};


};
class CfgSoundShaders
{
	class YK_Cassette_SoundShader_Base;
	class ResurgenceRP_Casettes_soundshader_thehole: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\TheHole_Moof.ogg",1}};
	};
	class ResurgenceRP_Casettes_soundshader_LamplightLegends: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\LampLegends.ogg",1}};
	};
};

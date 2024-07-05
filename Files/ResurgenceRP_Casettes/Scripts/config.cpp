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
		descriptionShort = "Looks like it was recorded in some kind of shack, but by all gods it sounds amazing - By Moof for ResurgenceRP";
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
		descriptionShort = "Looks like it was recorded in some kind of shack, but by all gods it sounds amazing - By Moof for ResurgenceRP";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\LamplightLegends.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_LamplightLegends";
		};
	};

	class resrp_casettes_HeroesOfHiddenValley: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Heroes of Hidden Valley";
		descriptionShort = "Looks like it was recorded in some kind of shack, and like its based on DnD storyline... kinda bop though - By ks for ResurgenceRP";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\LamplightLegends.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_heroesofhiddenvalley";
		};
	};

	class resrp_casettes_StarlightDemise: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Starlight Demise";
		descriptionShort = "One of songs recorded when news about apocalypse broke out. - By ks for ResurgenceRP";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\LamplightLegends.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_starlightdemise";
		};
	};

	class resrp_casettes_ShadowOfTheEnd: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Shadow Of The End";
		descriptionShort = "One of songs recorded when news about apocalypse broke out. - By ks for ResurgenceRP";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\shadowoftheend.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_shadowoftheend";
		};
	};

	class resrp_casettes_WhispersOfTheCosmos: YK_Cassette_Base
	{
		scope = 2;
		displayName = "Whispers Of The Cosmos";
		descriptionShort = "One of songs recorded when news about apocalypse broke out. - By ks for ResurgenceRP";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Casettes\data\whsipersofthecosmos.paa"};
		class CfgCassette
		{
			soundSet = "ResurgenceRP_Casettes_soundset_whispersofthecosmos";
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

	class ResurgenceRP_Casettes_soundset_heroesofhiddenvalley
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_heroesofhiddenvalley"};
	};
	
	class ResurgenceRP_Casettes_soundset_starlightdemise
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_starlightdemise"};
	};
	
	class ResurgenceRP_Casettes_soundset_whispersofthecosmos
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_whispersofthecosmos"};
	};
	
	class ResurgenceRP_Casettes_soundset_shadowoftheend
	{
		soundShaders[] = {"ResurgenceRP_Casettes_soundshader_shadowoftheend"};
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
	
	class ResurgenceRP_Casettes_soundshader_heroesofhiddenvalley: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\secrets_of_hidden_valley.ogg",1}};
	};
	
	class ResurgenceRP_Casettes_soundshader_shadowoftheend: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\shadowoftheend.ogg",1}};
	};
	
	class ResurgenceRP_Casettes_soundshader_whispersofthecosmos: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\WhispersoftheCosmos.ogg",1}};
	};
	
	class ResurgenceRP_Casettes_soundshader_starlightdemise: YK_Cassette_SoundShader_Base
	{
		samples[] = {{"ResurgenceRP_Casettes\data\sounds\starlightdemise.ogg",1}};
	};
};

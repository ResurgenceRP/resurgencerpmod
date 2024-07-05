class CfgPatches
{
    class ResurgenceRP_core
    {
		units[]=
		{
			"resrp_Flag_Difr",
			"resrp_Flag_lamplight",
			"resrp_armband_lamplight",
			"resrp_redbearbeer",
			"resrp_ruffbag"
		};
        requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Structures_Signs",
			"DZ_Characters",
			"DZ_Scripts"
		};
    };
};

class cfgVehicles
{	
	class BaseRadio;
    class PersonalRadio;
	class PoliceVest;
	class CanvasBag_ColorBase;
    class resrp_personalradio: PersonalRadio
        {
            displayName="Survivalist Radio";
            descriptionShort="A clearly modified personal radio. Smells oddly like doritos, cheese, and MREs, which is probably more concerning. The antena appears just a little bit longer and thicker, most likley to accomodate stronger signal.";
            range=10000;
        };

    class resrp_baseradio: BaseRadio
        {
            displayName="Survivalist Base Radio";
            descriptionShort="A clearly modified WW2 style backpack radio. Smells oddly like smokes, Mold, and B Rations, If this was a ration can i'd say ''m'kay lets get this out on a tray'' But alas its a radio. By KS for ResurgenceRP";
            range=100000000;
        };
        
    class Flag_Base;
	class resrp_flag_difr: Flag_Base
	{
		scope = 2;
        displayName="Deer Isle First Responders flag";
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to.... -By KS for ResurgenceRP";
		hiddenSelectionsTextures[] = 
		{
			"ResurgenceRP_Core\data\flag_Difr.paa"
		};
        color="resrp_difr";
	};

	class resrp_flag_lamplight: Flag_Base
	{
		scope = 2;
        displayName="Flag of Lamplight";
        descriptionShort="Flag seemingly of hope, home and community. The light on a porch waiting for people to gather up.";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Core\data\flag_lamplight.paa"};
        color="resrp_lamplight";
	};

    class Armband_ColorBase;
    class resrp_armband_lamplight: Armband_ColorBase
	{
		scope=2;
		displayName="Armband of Lamplight";
        descriptionShort="Armband seemingly of hope, home and community. The light on a porch waiting for people to gather up.";
		color="resrp_lamplight";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa",
			"ResurgenceRP_Core\data\flag_lamplight.paa"
		};
	}; 

    class resrp_armband_difr: Armband_ColorBase
	{
		scope=2;
		displayName="Armband of First Responders";
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to.... - By KS for ResurgenceRP";
		color="resrp_difr";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa",
			"ResurgenceRP_Core\data\flag_Difr.paa"
		};
	};

	class resrp_flag_srg: Flag_Base
	{
		scope = 2;
        displayName="Strategic Response Group flag";
        descriptionShort="SRG flag... wait aren't those guys from radio?? -By Ruffmus for ResurgenceRP";
		hiddenSelectionsTextures[] = 
		{
			"ResurgenceRP_Core\data\Ruff_SRG_Flag_co.paa"
		};
        color="resrp_srg";
	};

	class resrp_flag_srg_bravo: Flag_Base
	{
		scope = 2;
        displayName="Strategic Response Group flag";
        descriptionShort="SRG flag... wait aren't those guys from radio?? -By Ruffmus for ResurgenceRP";
		hiddenSelectionsTextures[] = 
		{
			"ResurgenceRP_Core\data\Ruff_SRG_Flag2_co.paa"
		};
        color="resrp_srg_bravo";
	};

	class resrp_admin_vest: PoliceVest
	{
		scope = 2;
		heatIsolation=4.0;
        displayName="ADMIN VEST";
        descriptionShort="If you are not Server Staff you should not have this. This item is meant to designate ResurgenceRP Staff on Duty. If you stumbled into this during loot run please notify staff. - By KS for ResurgenceRP";
		hiddenSelectionsTextures[] = 
		{
			"ResurgenceRP_Core\data\adminvest_co_pink.paa",
			"ResurgenceRP_Core\data\adminvest_co_pink.paa",
			"ResurgenceRP_Core\data\adminvest_co_pink.paa"
		};
        color="resrp_admin_vest";
		quickBarBonus=6;
	};

	class resrp_ruffbag: CanvasBag_ColorBase
	{
		scope = 2
		displayName="Ruffmus Canvas Bag";
        descriptionShort="A canvas bag with some funny doodles - By KS and Ruffmus for ResurgenceRP";
		itemsCargoSize[]={8,8};
		itemSize[]={6,6};
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_Core\data\newruffmussbag_co.paa",
			"ResurgenceRP_Core\data\newruffmussbag_co.paa",
			"ResurgenceRP_Core\data\newruffmussbag_co.paa"
		};
	}
};


class CfgPatches
{
    class ResurgenceRP_core
    {
		units[]=
		{
			"resrp_Flag_Difr",
			"resrp_Flag_lamplight",
			"resrp_armband_lamplight",
			"resrp_redbearbeer"
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
    class PersonalRadio;
    class resrp_personalradio: PersonalRadio
        {
            displayName="Survivalist Radio";
            descriptionShort="A clearly modified personal radio. Smells oddly like doritos, cheese, and MREs, which is probably more concerning. The antena appears just a little bit longer and thicker, most likley to accomodate stronger signal.";
            range=10000;
        };
        
    class Flag_Base;
	class resrp_flag_difr: Flag_Base
	{
		scope = 2;
        displayName="Deer Isle First Responders flag";
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to....";
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
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to....";
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
};
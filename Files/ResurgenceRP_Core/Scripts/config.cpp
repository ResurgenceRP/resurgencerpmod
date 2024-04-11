class CfgPatches
{
    class ResurgenceRP_Dev
    {
        requiredAddons[] =
        {
            "DZ_Data",
        };
    };
};

class cfgVehicles
{
    class PersonalRadio;
    class resrp_Radio: PersonalRadio
        {
            displayName="Survivalist Radio";
            descriptionShort="A clearly modified personal radio. Smells oddly like doritos, cheese, and MREs, which is probably more concerning. The antena appears just a little bit longer and thicker, most likley to accomodate stronger signal.";
            range=10000;
        };
        
    class Flag_Base;
	class resrp_Flag_Difr: Flag_Base
	{
		scope = 2;
        displayName="Deer Isle First Responders flag";
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to....";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Dev\ResurgenceRP_Core\data\flag_Difr_co.paa"};
        color="Difr";
	};

    class Flag_Base;
	class resrp_Flag_lamplight: Flag_Base
	{
		scope = 2;
        displayName="Flag of Lamplight";
        descriptionShort="Flag seemingly of hope, home and community. The light on a porch waiting for people to gather up.";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Core\data\flag_lamplight.paa"};
        color="lamplight";
	};

    class Armband_ColorBase;
    class resrp_armband_lamplight: Armband_ColorBase
	{
		scope=2;
		displayName="Armband of Lamplight";
        descriptionShort="Armband seemingly of hope, home and community. The light on a porch waiting for people to gather up.";
		visibilityModifier=0.94999999;
		color="lamplight";
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
};
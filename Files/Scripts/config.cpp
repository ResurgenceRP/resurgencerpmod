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
	class Flag_Difr: Flag_Base
	{
		scope = 2;
        displayName="Deer Isle First Responders flag";
        descriptionShort="Flag seemingly of few First Responders joining together after apocalypse. At this point who knows where their adventures led them to....";
		hiddenSelectionsTextures[] = {"ResurgenceRP_Dev\data\flag_difr.paa"};
        color="Difr";
	}; 
};
class CfgPatches
{
    class ResurgenceRP_crownvic
    {
		units[]=
		{
		};
        requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Structures_Signs",
			"DZ_Characters",
			"DZ_Scripts",
			"RTcv"
		};
    };
};

class cfgVehicles
{	
	class RT_cv_driver_door_police;
	class resrp_RT_cv_driver_door_police: RT_cv_driver_door_police
	{
		scope = 2;
        displayName="Deer Isle Police Crown Victoria Driver Door";
        descriptionShort="a Deer Isle State Police Crown Vics drivers door.  Feels much heavier than the civilian models.";
		hiddenSelectionsTextures[] = 
		{
			"CrownVic\data\white_base.paa",
			"ResurgenceRP_CrownVic\data\emblemDI.paa"
		};
	};

	class RT_cv_codriver_door_police;
	class resrp_RT_cv_codriver_door_police: RT_cv_codriver_door_police
	{
		scope = 2;
        displayName="Deer Isle Police Crown Victoria CoDriver Door";
        descriptionShort="a Deer Isle State Police Crown Vics CoDrivers door.  Feels much heavier than the civilian models.";
		hiddenSelectionsTextures[] = 
		{
			"CrownVic\data\white_base.paa",
			"ResurgenceRP_CrownVic\data\emblemDI.paa"
		};
	};
};


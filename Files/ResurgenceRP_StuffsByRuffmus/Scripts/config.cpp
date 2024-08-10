class CfgPatches
{
    class ResurgenceRP_StuffsByRuffmus
    {
        requiredAddons[] =
        {
            "DZ_Data",
			"ResurgenceRP_Core",
			"MSP_Clothing_Data"
        };
    };
};

class cfgVehicles
{
	class TShirt_ColorBase;
	class Crowbar;

	class resrp_resrp_tshirt: TShirt_ColorBase
	{
		scope=2;
        displayName="ResurgenceRP";
        descriptionShort="Reclaim the world - By Ruffmus for ResurgenceRP";
		weight = 10;
		itemSize[] = {3,2};
        itemsCargoSize[] = {5,4};
        quickBarBonus = 6;
        ragQuantity = 6;
        varWetMax = 0;
        repairCosts[] = {10,10};
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRuffmus\data\Clothes\Resurgence_tshirt_co.paa",
			"ResurgenceRP_StuffsByRuffmus\data\Clothes\Resurgence_tshirt_co.paa",
			"ResurgenceRP_StuffsByRuffmus\data\Clothes\Resurgence_tshirt_co.paa"
		};
	};
 	class resrp_StoneCrowbar: Crowbar
    {
        scope=2;
        displayName="Stone Crowbar";
        descriptionShort="A crowbar made of stone - never said it was practical - By Ruffmus for ResurgenceRP";
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[]={"ResurgenceRP_StuffsByRuffmus\data\Weapeons\Ruff_crowbar_stone_co.paa"};
    };
	

};
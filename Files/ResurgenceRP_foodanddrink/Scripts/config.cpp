class CfgPatches
{
    class ResurgenceRP_foodanddrinks
    {
        requiredAddons[] =
        {
            "DZ_Data",
			"ResurgenceRP_Core"
        };
    };
};

class cfgVehicles
{
	class SodaCan_ColorBase;  
	class resrp_redbearbeer: SodaCan_ColorBase
	{
		scope=2;
        displayName="Red Bear Beer";
        descriptionShort="A can with picture of a bear... who would made such a bizzare logo for a company? - By KS for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_foodanddrink\data\redbearbeer.paa"
		};
		class Nutrition
		{
			totalVolume=1;
			energy=50;
			water=150;
			nutritionalIndex=1;
			toxicity=0;
		};
	}; 

	class resrp_ksblend: SodaCan_ColorBase
	{
		scope=2;
        displayName="Krzysztof's Special Blend";
        descriptionShort="The can looks almost homemade, the fluid inside smells like very strong vodka infused with coffee seeds. Definitely will give a jolt of energy but weak hearts might not like it. - By ks for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_foodanddrink\data\krzysztofs_hooch.paa"
		};
		class Nutrition
		{
			totalVolume=1;
			energy=150;
			water=250;
			nutritionalIndex=0.5;
			toxicity=20;
		};
	};
};
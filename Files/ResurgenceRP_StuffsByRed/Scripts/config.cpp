class CfgPatches
{
    class ResurgenceRP_StuffsByRed
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
	/*CLOTHING*/
	class NurseDress_ColorBase;
	class DenimJacket;
	class TacticalShirt_ColorBase;  
	class RidersJacket_ColorBase;
	class TShirt_ColorBase;
	class Jeans_ColorBase;
	class Sneakers_ColorBase;
	class CowboyHat_ColorBase;
	class Msp_MedicBag_Black;

	class resrp_nursedress_pink: NurseDress_ColorBase
	{
		scope=2;
		color="nurse_dress_pink";
        displayName="Nurse Dress";
        descriptionShort="A nurse dress in pink color. Kinda cute. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\nursedress_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\nursedress_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\nursedress_pink_co.paa"
		};
	};

	class resrp_DenimJacket_pink: DenimJacket
	{
		scope=2;
		color="denim_jacket_pink";
        displayName="Denim Jacket";
        descriptionShort="Huh, didn't know those come in pink. Neat. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_pink_co.paa"
		};
	};  

	class resrp_DenimJacket_hentai: DenimJacket
	{
		scope=2;
        displayName="Denim....Jacket....";
		color="denim_jacket_owo";
        descriptionShort="Why? Why not! - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_hentai_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_hentai_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\denim_jacket_hentai_co.paa"
		};
	}; 

	class resrp_TacticalShirt_Trader: TacticalShirt_ColorBase
	{
		scope=2;
        displayName="A Traders Jacket.";
		color="tacshirt_trader";
        descriptionShort="A jacket for a trader, by trader. I think. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\pcu5jacket_Trader_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\pcu5jacket_Trader_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\pcu5jacket_Trader_co.paa"
		};
	};

	class resrp_RidersJacket_Trader: RidersJacket_ColorBase
	{
		scope=2;
        displayName="A Traders Jacket";
		color="rider_trader";
        descriptionShort="Biker version of the Traders Jacket, By bikers for Biker Traders. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\riders_jacket_Trader_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\riders_jacket_Trader_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\riders_jacket_Trader_co.paa"
		};
	};

	class resrp_TShirt_Missing: TShirt_ColorBase
	{
		scope=2;
        displayName="[MISSING]";
		color="halflife_missing";
        descriptionShort="I will finish this one later. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\tshirt_missing_texture_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\tshirt_missing_texture_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\tshirt_missing_texture_co.paa"
		};
	};


	class resrp_Jeans_Pink: Jeans_ColorBase
	{
		scope=2;
        displayName="Jeans";
		color="jeans_pink";
        descriptionShort="Pink Jeans! Since when do they make those? - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\jeans_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\jeans_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\jeans_pink_co.paa"
		};
	};

	class resrp_medic_bag_exposed: Msp_MedicBag_Black
	{
		scope=2;
		color="medic_bag_exposed";
        displayName="Medical Bag (Exposed)";
        descriptionShort="A black medical bag with suspicious sticker... Oh and if you read this it's probably too late anyway. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_black_Exposed_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_black_Exposed_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_black_Exposed_co.paa"
		};
	};

	class resrp_medic_bag_pink: Msp_MedicBag_Black
	{
		scope=2;
        displayName="Medical Bag";
		color="medic_bag_pink";
        descriptionShort="I ran out of ideas for those.~ks - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\medicbag_pink_co.paa"
		};
	};

	class resrp_sneakers_pink: Sneakers_ColorBase
	{
		scope=2;
        displayName="Sneakers";
		color="sneakers_pink";
        descriptionShort="Those look like they will get dirty fast. But also nice. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_pink_co.paa"
		};
	};

	class resrp_sneakers_exposed: Sneakers_ColorBase
	{
		scope=2;
        displayName="Sneakers (Exposed)";
		color="sneakers_exposed";
        descriptionShort="If you can read the sticker you are too close. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_black_Exposed_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_black_Exposed_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\sneakers_black_Exposed_co.paa"
		};
	};

	class resrp_CowboyHat_Pink: CowboyHat_ColorBase
	{
		scope=2;
        displayName="Cowboy Hat";
		color="yeeehaw_pink";
        descriptionShort="I think i just heard a cowboy weep. And i'm Mclovin' it. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Clothes\cowboyhat_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\cowboyhat_pink_co.paa",
			"ResurgenceRP_StuffsByRed\data\Clothes\cowboyhat_pink_co.paa"
		};
	};

	/* FLAGS */
	class Flag_Base;
	class resrp_flag_blackwater: Flag_Base
	{
		scope=2;
        displayName="Blackwater PMC";
        descriptionShort="Those guys seem a little sketchy but i am too affraid to ask questions. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Blackwater_Contractors_co.paa"
		};
	};

	class resrp_flag_campfullmoon: Flag_Base
	{
		scope=2;
        displayName="Camp Full Moon";
        descriptionShort="Come sit by campfire stranger and let us tell you a story... - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Camp_Full_Moon_co.paa"
		};
	};

	class resrp_flag_Canada: Flag_Base
	{
		scope=2;
        displayName="Flag of Canada";
        descriptionShort="Land of the maple and moose - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Canada_co.paa"
		};
	};

	class resrp_flag_celticPMC: Flag_Base
	{
		scope=2;
        displayName="Celtic PMC";
        descriptionShort="An intricate symbol of now defunct PMC, a short lived endevour but neverthe less an important part of history.. a core memory. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Celtic_PMC_co.paa"
		};
	};

	class resrp_flag_clearsky: Flag_Base
	{
		scope=2;
        displayName="Clearsky flag";
        descriptionShort="Here comes the sun do do do do doooo - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Clear_Skies_co.paa"
		};
	};

	class resrp_flag_maryland: Flag_Base
	{
		scope=2;
        displayName="Maryland flag";
        descriptionShort="A perfectly normal flag of maryland - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Maryland_1901_co.paa"
		};
	};

	class resrp_flag_Norway: Flag_Base
	{
		scope=2;
        displayName="Flag of Norway";
        descriptionShort="Nordics represented! - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Norway_co.paa"
		};
	};

	class resrp_flag_thewolves: Flag_Base
	{
		scope=2;
        displayName="The Wolves flag";
        descriptionShort="The strong and terryfying animal, but also a guardian spirit to many - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_The_Wolves_co.paa"
		};
	};

	class resrp_flag_bloodborn: Flag_Base
	{
		scope=2;
        displayName="Traders of Deer Isle Flag";
        descriptionShort="A baner indicating a will to trade. Maybe trading guild even. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_Traders_Of_DeerIsle_co.paa"
		};
	};
	class resrp_flag_USA: Flag_Base
	{
		scope=2;
        displayName="Flag of United States";
        descriptionShort="Ameeericaaa, AAAAAMEEEERIIICAAAA, FUCK YEAH! - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Flags\flag_USA_co.paa"
		};
	};
	
	/* BOOKS */
	class ItemBook;

	class resrp_book_canibalcooking: ItemBook
	{
		scope=2;
        displayName="Canibal Cooking";
        descriptionShort="This book contains recipies based on human meat... Mildly concerning, but some do sound enticing. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Books\book_Cannibal_Cooking_co.paa"
		};
	};

	class resrp_book_hentai: ItemBook
	{
		scope=2;
        displayName="1004 Pictures to Crank To.";
        descriptionShort="I hope this is new and unused. - By silentnightinwinter for ResurgenceRP";
		hiddenSelectionsTextures[]=
		{
			"ResurgenceRP_StuffsByRed\data\Books\book_Hentai_co.paa"
		};
	};

};
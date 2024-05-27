class CfgPatches
{
    class ResurgenceRP_EventThings	
    {
		units[]=
		{
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
	class TorsoCover_Improvised;
	class LegsCover_Improvised;
	class HeadCover_Improvised;
	class HandsCover_Improvised;
	class FeetCover_Improvised;
 	class FaceCover_Improvised;

    class resrp_btorso: TorsoCover_Improvised
        {
            displayName="Torso Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\torsocover_bloody.paa",
				"ResurgenceRP_EventThings\data\torsocover_bloody.paa",
				"ResurgenceRP_EventThings\data\torsocover_bloody.paa",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

    class resrp_blegs: LegsCover_Improvised
        {
            displayName="Leg Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\legcover_bloody.paa",
				"ResurgenceRP_EventThings\data\legcover_bloody.paa",
				"ResurgenceRP_EventThings\data\legcover_bloody.paa",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

    class resrp_bhead: HeadCover_Improvised
        {
            displayName="Head Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\headcover_bloody.paa",
				"ResurgenceRP_EventThings\data\headcover_bloody.paa",
				"ResurgenceRP_EventThings\data\headcover_bloody.paa",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

    class resrp_bhands: HandsCover_Improvised
        {
            displayName="Hands Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\handscover_bloody",
				"ResurgenceRP_EventThings\data\handscover_bloody",
				"ResurgenceRP_EventThings\data\handscover_bloody",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

    class resrp_bfeet: FeetCover_Improvised
        {
            displayName="Feet Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\feetcover_bloody.paa",
				"ResurgenceRP_EventThings\data\feetcover_bloody.paa",
				"ResurgenceRP_EventThings\data\feetcover_bloody.paa",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

    class resrp_bface: FaceCover_Improvised
        {
            displayName="Face Covering";
            descriptionShort="By ks for ResurgenceRP";
			heatIsolation=1.0;
			hiddenSelectionsTextures[]=
			{
				"ResurgenceRP_EventThings\data\facecover_bloody.paa",
				"ResurgenceRP_EventThings\data\facecover_bloody.paa",
				"ResurgenceRP_EventThings\data\facecover_bloody.paa",
			};
		class DamageSystem
		{
		class GlobalHealth
			{
				class Health
				{
					 hitpoints=500;
				};
			 class GlobalArmor
			     {
				     class Melee
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Projectile
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };
				     class Infected
				     {
					     class Health
					     {
						     damage=2.0;
					     };
					     class Blood
					    {
						 	 damage=2.0;
					 	 };
					 	 class Shock
					 	 {
							 damage=2.0;
					 	 };
				 	 };     
			 	 };
			 };
		 };   	   
	    };

};


class CfgPatches
{
    class ResurgenceRP_BartozEvent
    {
        requiredAddons[] =
        {
            "DZ_Data",
			"ResurgenceRP_Core",
			"BO_AK74",
            "BO_M82A1"
        };
    };
};

class cfgWeapons
{
    class BO_AK74;
    class resrp_BOAK74_Bartoz: BO_AK74
    {
        scope = 0;
        displayName = "Old AK-74";
		descriptionShort = "An early AK-74. Rusted out, look like it took a beating, hell i swear that thing took a bullet for its owner, but by god still a beauty in disguise. With some love and care will carry you through life... even if the rust might not fully buff out. Chambered in 5.45×39mm rounds. Might be hard to repair though, probably needs specialised parts, normal kits might not work on it untill it's actually fixed. - By KS for ResurgenceRP";
        repairableWithKits[] = {22};
        repairCosts[] = {1000.0};
    };

    class Mode_SemiAuto;
    class BO_M82A1;
    class resrp_9mm_M82A1_Why: BO_M82A1
    {
        displayName="Barrett M82A9";
        descriptionShort="The Barrett M82A1 is a recoil-operated, semi-automatic anti-materiel sniper system developed by the American Barrett Firearms Manufacturing company. Despite its designation as an anti-materiel rifle, it is used by so- Wait a second, something is not right with this rifle. - By KS for ResurgenceRP via EDO Weapeons";
        chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"resrp_9mm_M82A1_10rnd"
		};
        class SemiAuto: Mode_SemiAuto
		{
            soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				},
                {
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
        }
    }
};

class cfgVehicles
{
    class WeaponCleaningKit;
    class resrp_Bartoz_FiringPin: WeaponCleaningKit
    {
        scope=0;
		displayName="Firing pin for AK74";
		descriptionShort="Looks like older style AK74 firing pin. Wonder what could use that";
		itemSize[]={2,1};
		repairKitType=22;
    };

    class resrp_Bartoz_Bolt: WeaponCleaningKit
    {
        scope=0;
		displayName="Bolt assembly for AK74";
		descriptionShort="Looks like older style AK74 bolt assembly. Wonder what could use that";
		itemSize[]={2,2};
		repairKitType=22;
    };
        
    class resrp_Bartoz_barel: WeaponCleaningKit
    {
        scope=0;
		displayName="replacement barel for AK74";
		descriptionShort="Looks like older style AK74 barel and gas block. Wonder what could use that";
		itemSize[]={5,2};
		repairKitType=22;
    };

    class resrp_Bartoz_Cleaningkit: WeaponCleaningKit
    {
        scope=0;
		displayName="AK74 Cleaning Kit";
		descriptionShort="Looks like original AK-74 cleaning kit. Wonder what could use that";
		itemSize[]={2,3};
		repairKitType=22;
    };

};
class cfgMagazines
{
    class BO_Mag_M82A1_10rnd;
    class resrp_9mm_M82A1_10rnd: BO_Mag_M82A1_10rnd
    {
        scope=2;
        displayName="Barrett M82A9 magazine";
        descriptionShort="A 10 round detachable box magazine for the M82A1, loaded with... Wait, that doesn't look right. - By KS for ResurgenceRP via EDO Weapeons";
        ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
		};  
    };
};
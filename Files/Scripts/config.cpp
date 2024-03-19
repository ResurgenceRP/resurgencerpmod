class CfgPatches
{
    class ResurgenceRP_Dev
    {
        requiredAddons[] =
        {
            // ""
        };
    };
};

class cfgVehicles
{
    class PersonalRadio;
    class resrp_Radio: PersonalRadio
        {
            displayName="Boosted Personal Radio";
            range=10000;
        };  
};
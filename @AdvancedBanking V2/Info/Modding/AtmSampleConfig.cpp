class CfgPatches 
{
	class MyFirstATMModel //Rename this to the ModName!
	{
		units[] = 
		{
			"MyFirstATMModel" //Rename this to the ModName!
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"KR_Banking" //Makes sure that AdvancedBanking gets loaded bevor your mod!
		};
	};
};

class CfgVehicles
{
    class KR_BankingATM; //Base class of the ATM defined in Advanced Banking!
	class MyFirstATM: KR_BankingATM
	{
		scope=1;
		model="\MODNAME\SampleATM.p3d";//Path to the ATM Model.
		hiddenSelections[]=
		{
			"zybtek" //Needs to be defined in model & model.cfg
		};
		hiddenSelectionsTextures[] = 
		{
			"\KR_Banking\data\ATM\data\ATM_co.paa" //Path to a textur check out our github for samples!
		};
	};
};
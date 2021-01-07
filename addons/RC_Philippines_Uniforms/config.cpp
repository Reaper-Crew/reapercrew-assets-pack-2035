class CfgPatches
{
	class ReaperCrew_Philippines_Uniforms
	{
		units[]=
		{
			"Tiger_RC_Medic_Kitbag",
			"Tiger_RC_Kitbag",
			"Tiger_RC_Radio",
			"Tiger_Soldier_2_F",
			"Tiger_Soldier_2_Rolled_F"
		};
		weapons[]=
		{
			"RC_Tiger_Uniform_2_Rolled",
			"RC_Tiger_Uniform_2",
			"RC_Tiger_Vest_1",
			"RC_Tiger_Vest_2",
			"RC_Tiger_Helmet",
			"RC_Tiger_Enh_Helmet",
			"RC_Tiger_Boonie"
		};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class cfgVehicles
{
	class B_Kitbag_tan;
	class B_RadioBag_01_base_F;
	class I_G_Soldier_universal_F;
	class Tiger_RC_Medic_Kitbag: B_Kitbag_tan
	{
		author="Reaper Crew";
		_generalMacro="SanRuckTrop23LLK";
		scope=2;
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		maximumLoad=280;
		displayName="[RC] Kitbag Philippine (Medic)";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Medic_Kitbag_1_co.paa"
		};
	};
	class Tiger_RC_Kitbag: B_Kitbag_tan
	{
		author="Reaper Crew";
		_generalMacro="SanRuckTrop23LLK";
		scope=2;
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		maximumLoad=280;
		displayName="[RC] Kitbag Philippine";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Kitbag_1_co.paa"
		};
	};
	class Tiger_RC_Radio: B_RadioBag_01_base_F
	{
		author="Reaper Crew";
		_generalMacro="SanRuckTrop23LLK";
		scope=2;
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		displayName="[RC] Radio Pack Philippine";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Radio_co.paa"
		};
	};
	class Tiger_Soldier_2_F: I_G_Soldier_universal_F
	{
		_generalMacro="I_G_Soldier_universal_F";
		scope=1;
		displayName="RC Philippines Uniform 2";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		nakedUniform="U_BasicBody";
		uniformClass="RC_Tiger_Uniform_2";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Uniform_2_co.paa"
		};
	};
	class Tiger_Soldier_2_Rolled_F: I_G_Soldier_universal_F
	{
		_generalMacro="I_G_Soldier_universal_F";
		scope=1;
		displayName="RC Philippines Uniform 2";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		nakedUniform="U_BasicBody";
		uniformClass="RC_Tiger_Uniform_2_Rolled";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Uniform_2_co.paa"
		};
	};
};
class cfgWeapons
{
	class U_B_CombatUniform_mcam_vest;
	class U_B_CombatUniform_mcam;
	class U_I_CombatUniform_shortsleeve;
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier1_blk;
	class V_PlateCarrier2_blk;
	class H_HelmetIA;
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_Booniehat_khk;
	class Uniform_Base;
	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class ItemCore;
	class Vest_Camo_base: ItemCore
	{
		class ItemInfo;
	};
	class RC_Tiger_Uniform_2: U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="[RC] Combat Fatigues (Philippines)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Tiger_Soldier_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class RC_Tiger_Uniform_2_Rolled: U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="[RC] Combat Fatigues (Philippines) (Rolled-up)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Tiger_Soldier_2_Rolled_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class RC_Tiger_Vest_1: V_PlateCarrier1_blk
	{
		author="ReaperCrew";
		scope=2;
		displayName="[RC] Carrier Lite (Philippines)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Vest_1_co"
		};
	};
	class RC_Tiger_Vest_2: V_PlateCarrier2_blk
	{
		author="ReaperCrew";
		scope=2;
		displayName="[RC] Carrier Rig (Philippines)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Vest_1_co"
		};
	};
	class RC_Tiger_Helmet: H_HelmetB
	{
		scope=2;
		author="Reaper Crew";
		weaponPoolAvailable=1;
		displayName="[RC] Combat Helmet (Philippines)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Helmet_1_co"
		};
	};
	class RC_Tiger_Enh_Helmet: H_HelmetSpecB
	{
		scope=2;
		author="Reaper Crew";
		weaponPoolAvailable=1;
		displayName="[RC] Enhanced Combat Helmet (Philippines)";
		picture="\RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Helmet_1_co"
		};
	};
	class RC_Tiger_Boonie: H_Booniehat_khk
	{
		scope=2;
		displayName="[RC] Booniehat (Philippines)";
		picture="RC_Philippines_Uniforms\data\UI\Philippines_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"\RC_Philippines_Uniforms\Data\Tiger_Stripe_RC_Boonie_1_co"
		};
	};
};
class cfgMods
{
	author="Ernst";
	timepacked="1607182545";
};

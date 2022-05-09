class CfgPatches
{
	class YSA_RHSUSAF_60rnd_Stanag{
		name="YSA RHSUSAF 60rnd Stanag";
		author="YetheSamartaka";
		url="https://github.com/YetheSamartaka";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"rhsusf_c_weapons"
		};
	};
};

class CfgMagazineWells{
	class STANAG_556x45{
		YSA_RHSUSAF_60rnd_Stanags[]={
			"ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag"
		};
	};
	class CBA_556x45_STANAG{
		YSA_RHSUSAF_60rnd_Stanags[]={
			"ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag"
		};
	};
	class CBA_556x45_G36{
		YSA_RHSUSAF_60rnd_Stanags[]={
			"ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag",
			"ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag"
		};
	};
};


class cfgMagazines{

	class 30Rnd_556x45_Stanag;
	class ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag {
		author="YetheSamartaka";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca.paa";
		displayName="60Rnd STANAG M855A1";
		displayNameShort="M855A1 EPR";
		descriptionShort="Caliber: 5.56x45mm NATO <br/> Rounds: 60 <br/> Used in: M4, M16, M27, M249";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		count=60;
		initSpeed=960;
		mass=20;
		tracersEvery=0;
		lastRoundsTracer=0;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd";
		modelSpecialIsProxy=1;
		hiddenSelections[]={
			"camo",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]={
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};

	class ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag: ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag {
		author="YetheSamartaka";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_Stanag_ca.paa";
		displayName="60Rnd STANAG Mk318 Mod 0";
		displayNameShort="Mk318";
		descriptionShort="Caliber: 5.56x45mm NATO <br/> Rounds: 60 <br/> Used in: M4, M16, M27, M249";
		ammo="rhs_ammo_556x45_Mk318_Ball";
		initSpeed=950.36639;
		hiddenSelectionsTextures[]={
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
	};

	class ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag: ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag {
		author="YetheSamartaka";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_Stanag_ca.paa";
		ammo="rhs_ammo_556x45_Mk262_Ball";
		initSpeed=838.20001;
		displayName="60Rnd STANAG Mk262 Mod 1";
		displayNameShort="Mk262";
		descriptionShort="Caliber: 5.56x45mm NATO <br/> Rounds: 60 <br/> Used in: M4, M16, M27, M249";
		hiddenSelectionsTextures[]={
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
};

class cfgVehicles{
/*	class WeaponHolder_Single_limited_item_F;
	class rhs_magazine_base: WeaponHolder_Single_limited_item_F
	{
		vehicleClass="Magazines";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Magazines";
	};*/

	class rhs_magazine_base;

	class ysa_rhs_magazine_rhs_mag_60Rnd_556x45_M855A1_Stanag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag
			{
				magazine="ysa_rhs_mag_60Rnd_556x45_M855A1_Stanag";
				count=1;
			};
		};
		displayName="60Rnd STANAG M855A1";
		author="YetheSamartaka";
	};

	class ysa_rhs_magazine_rhs_mag_60Rnd_556x45_Mk318_Stanag: rhs_magazine_base {
		scope=2;
		class TransportMagazines {
			class ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag {
				magazine="ysa_rhs_mag_60Rnd_556x45_Mk318_Stanag";
				count=1;
			};
		};
		displayName="60Rnd STANAG Mk318";
		author="YetheSamartaka";
	};
	class ysa_rhs_magazine_rhs_mag_60Rnd_556x45_Mk262_Stanag: rhs_magazine_base {
		scope=2;
		class TransportMagazines {
			class ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag {
				magazine="ysa_rhs_mag_60Rnd_556x45_Mk262_Stanag";
				count=1;
			};
		};
		displayName="60Rnd STANAG Mk262";
		author="YetheSamartaka";
	};
};
/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" }, //Apex DLC
			{"hgun_Pistol_heavy_01_F",      "", 12000},
            {"hgun_PDW2000_F",              "", 30000},
            {"hgun_Pistol_heavy_02_F",      "", 34000},
            {"SMG_01_F",                    "", 75000},
            {"srifle_DMR_06_camo_F",        "", 90000, 45000, "" },
			{"srifle_DMR_03_F",             "", 50000, 25000, "" },
			{"srifle_DMR_03_woodland_F",    "", 50000, 25000, "" },
			{"srifle_DMR_01_DMS_BI_F",      "", 30000, 15000, "" },
			{"arifle_AK12_GL_F",            "", 30000, 15000, "" },
            {"srifle_LRR_camo_F",           "", 90000, 45000, "" },
            {"srifle_DMR_05_tan_f",         "", 90000, 45000, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" }, //Apex DLC
            {"20Rnd_762x51_Mag",            "", 300, 150, "" },
            {"7Rnd_408_Mag",                "", 300, 150, "" },
            {"10Rnd_93x64_DMR_05_Mag",      "", 500, 250, "" },
		    {"11Rnd_45ACP_Mag",             "", 300, 150, "" },
            {"30Rnd_9x21_Mag",              "", 300, 150, "" } ,
            {"6Rnd_45ACP_Cylinder",         "", 300, 150, "" },
            {"30Rnd_45ACP_Mag_SMG_01",      "", 300, 150, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" },
			{"acc_pointer_IR",              "", 1000, 500, "" },
			{"muzzle_snds_B",               "", 5000, 2500, "" },
			{"muzzle_snds_B_khk_F",         "", 5000, 2500, "" },
			{"optic_Arco",                  "", 7500, 3750, "" },
			{"optic_Arco_ghex_F",           "", 7500, 3750, "" },
            {"optic_Hamr",                  "", 10000, 5000, "" },
            {"optic_Aco",                   "", 2400, 1200, "" },
            {"optic_Holosight",             "", 3400, 1700, "" },
            {"optic_MRCO",                  "", 7500, 3750, "" },
            {"optic_DMS",                   "", 14000, 7000, "" },
            {"optic_AMS_khk",               "", 24000, 12000, "" },
            { "bipod_01_F_blk",             "", 5000, 2500, "" },
            { "bipod_01_F_mtp",             "", 5000, 2500, "" },
            { "bipod_01_F_snd",             "", 5000, 2500, "" },
            { "bipod_02_F_blk",             "", 5000, 2500, "" },
            { "bipod_02_F_hex",             "", 5000, 2500, "" },
            { "bipod_02_F_tan",             "", 5000, 2500, "" },
            { "bipod_03_F_blk",             "", 5000, 2500, "" },
            { "bipod_03_F_oli",             "", 5000, 2500, "" },
            { "optic_AMS",                  "", 10000, 5000, "" },
            { "optic_AMS_khk",              "", 10000, 5000, "" },
            { "optic_AMS_snd",              "", 10000, 5000, "" },
            { "optic_KHS_blk",              "", 10000, 5000, "" },
            { "optic_KHS_hex",              "", 10000, 5000, "" },
            { "optic_KHS_old",              "", 10000, 5000, "" },
            { "optic_KHS_tan",              "", 10000, 5000, "" },
			{"1Rnd_SmokeRed_Grenade_shell", "", 150, 75, "" },
            {"1Rnd_SmokeGreen_Grenade_shell",   "", 150, 75, "" },
            {"1Rnd_SmokeYellow_Grenade_shell",  "", 150, 75, "" },
            {"1Rnd_SmokePurple_Grenade_shell",  "", 150, 75, "" },
            {"1Rnd_SmokeBlue_Grenade_shell",    "", 150, 75, "" },
            {"1Rnd_SmokeOrange_Grenade_shell",  "", 150, 75, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_05_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_SPAR_01_blk_F", "", 35000, 17500, "call life_coplevel >= 1" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "arifle_SPAR_03_blk_F", "", 50000, 25000, "call life_coplevel >= 3" },			//Apex DLC Sniper
            { "arifle_SPAR_01_GL_blk_F", "", 45000, 22500, "call life_coplevel >= 4" },
            { "arifle_ARX_blk_F", "", 30000, 15000, "call life_coplevel >= 1" },
            { "srifle_DMR_02_F", "", 30000, 15000, "call life_coplevel >= 1" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_65x39_caseless_green", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "30Rnd_556x45_Stanag", "", 100, 50, "call life_coplevel >= 1" },
            { "20Rnd_762x51_Mag", "", 100, 50, "call life_coplevel >= 3" }, //Apex DLC
			{ "30Rnd_9x21_Mag_SMG_02", "", 150, 75, "" },
            { "10Rnd_50BW_Mag_F", "", 300, 150, "" },
            { "10Rnd_338_Mag", "", 300, 150, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_Aco", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" },
            { "optic_Hamr", "", 4500, 2250, "" },
            { "optic_MRCO", "", 10000, 5000, "" },
            { "optic_DMS", "", 14500, 7250, "" },
            { "optic_KHS_blk", "", 14500, 7250, "" },
            { "optic_AMS", "", 5000, 2500, "" },
            { "bipod_03_F_blk", "", 1000, 500, "" },
            { "muzzle_snds_L", "", 1000, 500, "" },
            { "muzzle_snds_M", "", 2000, 1000, "" },
            { "muzzle_snds_B", "", 3000, 1500, "" },
            { "muzzle_snds_338_black", "", 4000, 2000, "" },
            { "1Rnd_Smoke_Grenade_shell", "", 100, 50, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};

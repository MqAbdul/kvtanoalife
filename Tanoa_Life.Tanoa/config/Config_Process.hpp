/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	
		class canned_banana {
        MaterialsReq[] = {{"banana",1}};
        MaterialsGive[] = {{"canned_banana",1}};
        Text = "STR_Process_BananaC";
        //ScrollText = "Can Bananas";
        NoLicenseCost = 800;
    };
	
	class canned_apple {
        MaterialsReq[] = {{"apple",1}};
        MaterialsGive[] = {{"canned_apple",1}};
        Text = "STR_Process_AppleC";
        //ScrollText = "Can Apples";
        NoLicenseCost = 800;
    };
	
	class canned_peach {
        MaterialsReq[] = {{"peach",1}};
        MaterialsGive[] = {{"canned_peach",1}};
        Text = "STR_Process_PeachC";
        //ScrollText = "Can Peaches";
        NoLicenseCost = 800;
    };
	
	class planks {
        MaterialsReq[] = {{"wooden_logs",1}};
        MaterialsGive[] = {{"planks",1}};
        Text = "STR_Process_Planks";
        //ScrollText = "Produce Planks";
        NoLicenseCost = 700;
    };
	
	class planks {
        MaterialsReq[] = {{"planks",2}};      //wert von f-parts noch hoch weil 2 bretter
        MaterialsGive[] = {{"furniture_parts",1}};
        Text = "STR_Process_FurnitureP";
        //ScrollText = "Produce Furniture parts";
        NoLicenseCost = 1200;
    };
	
	class cocoa {
        MaterialsReq[] = {{"cocoa_beans",1}};
        MaterialsGive[] = {{"cocoa_powder",1}};
        Text = "STR_Process_Cocoa";
        //ScrollText = "Dry Cocoa Beans";
        NoLicenseCost = 900;
    };
	
	class chocmilkP {
        MaterialsReq[] = {{"cocoa_powder",2}};
        MaterialsGive[] = {{"chocmilk_pallet",1}};
        Text = "STR_Process_ChocmilkP";
        //ScrollText = "Produce and stack Chocmilk";
        NoLicenseCost = 1400;
    };
	
	class coffee {
        MaterialsReq[] = {{"coffee_beans",1}};
        MaterialsGive[] = {{"coffee_powder",1}};
        Text = "STR_Process_Coffee";
        //ScrollText = "Dry Coffee Beans";
        NoLicenseCost = 900;
    };
	
	class coffeeP {
        MaterialsReq[] = {{"coffee_powder",2}};
        MaterialsGive[] = {{"coffee_pallet",1}};
        Text = "STR_Process_CoffeeP";
        //ScrollText = "Produce and stack Coffee";
        NoLicenseCost = 1400;
    };
	
	class tea {
        MaterialsReq[] = {{"tea_lefs",1}};
        MaterialsGive[] = {{"tea_bags",1}};
        Text = "STR_Process_Tea";
        //ScrollText = "Dry Tea Leafs";
        NoLicenseCost = 900;
    };
	
	class teaP {
        MaterialsReq[] = {{"tea_bags",2}};
        MaterialsGive[] = {{"tea_pallet",1}};
        Text = "STR_Process_TeaP";
        //ScrollText = "Produce and stack Tea";
        NoLicenseCost = 1400;
    };
	
	class sugar {
        MaterialsReq[] = {{"sugar_cane",1}};
        MaterialsGive[] = {{"sugar",1}};
        Text = "STR_Process_Sugar";
        //ScrollText = "Produce Sugar";
        NoLicenseCost = 700;
    };
	
	class cornmeal {
        MaterialsReq[] = {{"corn",1}};
        MaterialsGive[] = {{"cornmeal",1}};
        Text = "STR_Process_Cornmeal";
        //ScrollText = "Produce Cornmeal";
        NoLicenseCost = 700;
    };
	
};

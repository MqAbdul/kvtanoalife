/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

switch (playerSide) do
{
    case civilian:
    {
        life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];

        life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];

        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
    };
    case west:
    {
        life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];

        life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
    };
    case independent:
    {
        life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];

        life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
    };
    case east:
    {
        life_actions = life_actions + [player addAction["Personalausweis ansehen",{[cursorTarget] remoteExecCall ["fvs_fnc_zeigePerso",player];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];

        life_actions = life_actions + [player addAction["Personalausweis zeigen",{[player] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
        isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];
    };
};

#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Restrains the target.
*/
private ["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3.5) exitWith {}; // lol, im keyhandler aber 3.5, statt 3?
if (_unit getVariable "restrained") exitWith {};
if ((side _unit isEqualTo west && playerSide isEqualTo west) || (playerSide isEqualTo civilian && side _unit isEqualTo independent)) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
//Broadcast!
_unit setVariable ["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
if (playerSide isEqualTo west) then {
	[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
} else {
	if (playerSide isEqualTo civilian) then {
		systemChat format["%1 wurde von dir mit Kabelbindern gefesselt",_unit getVariable ["realname", name _unit]];
	};
};
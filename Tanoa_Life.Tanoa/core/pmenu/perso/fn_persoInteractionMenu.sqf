/*
	Dateiname: fn_persoInteractionMenu.sqf
	Author: Felix von Studsinske
			(Bryan "Tonic" Boardwine)
	Beschreibung:
		Personalausweismenü
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Btn11 374510
#define Btn12 374511
#define Btn13 374512
#define Btn14 374513
#define Btn15 374514
#define Btn16 374515
#define Btn17 374516
#define Btn18 374517
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
life_pInact_curTarget = _curTarget;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
if(player distance _curTarget > 5) exitWith {};

if(!dialog) then {
	createDialog "pInteraction_Menu";
};
	
if(!isPlayer _curTarget && !(_curTarget isKindOf "Man")) exitWith {closeDialog 0;}; //Bad side check?
_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
_Btn11 = _display displayCtrl Btn11;
_Btn12 = _display displayCtrl Btn12;
_Btn13 = _display displayCtrl Btn13;
_Btn14 = _display displayCtrl Btn14;
_Btn15 = _display displayCtrl Btn15;
_Btn16 = _display displayCtrl Btn16;
_Btn17 = _display displayCtrl Btn17;
_Btn18 = _display displayCtrl Btn18;

_Btn1 ctrlShow false;
_Btn2 ctrlShow false;
_Btn3 ctrlShow false;
_Btn4 ctrlShow false;
_Btn5 ctrlShow false;
_Btn6 ctrlShow false;
_Btn7 ctrlShow false;
_Btn8 ctrlShow false;
_Btn9 ctrlShow false;
_Btn10 ctrlShow false;
_Btn11 ctrlShow false;
_Btn12 ctrlShow false;
_Btn13 ctrlShow false;
_Btn14 ctrlShow false;
_Btn15 ctrlShow false;
_Btn16 ctrlShow false;
_Btn17 ctrlShow false;
_Btn18 ctrlShow false;

_Btn1 ctrlSetText "Zeigen";
_Btn1 ctrlSetTooltip "Personal-/Dienstausweis dem Gegenueber zeigen";
_Btn1 buttonSetAction "[player] remoteExecCall [""fvs_fnc_zeigePerso"",life_pInact_curTarget]; closeDialog 0;";
_Btn2 ctrlSetText "Ansehen";
_Btn2 ctrlSetTooltip "Personal-/Dienstausweis von dem Gegenueber ansehen";
_Btn2 buttonSetAction "[life_pInact_curTarget] remoteExecCall [""fvs_fnc_zeigePerso"",player]; closeDialog 0;";
//just ignore _btn3, _btn4 and _btn5 (was for zipties)
//_Btn3 ctrlSetText "Geld geben";
//_Btn3 buttonSetAction "[life_pInact_curTarget] call fvs_fnc_geldgebenDiag;";
//_Btn4 ctrlSetText "Freilassen";
//_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";
//_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
//if(!(_curTarget getVariable ["Escorting",false])) then {
//	_Btn5 ctrlSetText localize "STR_pInAct_Escort";
//} else {
//	_Btn5 ctrlSetText localize "STR_pInAct_StopEscort";
//};
_Btn6 ctrlSetText "Ins Fahrzeug";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";
//_Btn3 ctrlShow true;
//_Btn5 ctrlShow true;
_Btn2 ctrlShow true;
_Btn1 ctrlShow true;
//_Btn4 ctrlShow true;
_Btn6 ctrlShow true;
if(!(player getVariable ["restrained",false])) then {
	_Btn1 ctrlEnable true;
	//_Btn3 ctrlEnable true;
	if(_curTarget getVariable ["restrained",false] && (side _curTarget != independent)) then {
		//_Btn5 ctrlEnable true;
		if(_curTarget getVariable ["restrained",false]) then {_Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false;};
		//_Btn4 ctrlEnable true;
		_Btn6 ctrlEnable true;
	} else {
		//_Btn5 ctrlShow false;
		_Btn2 ctrlShow false; // Perso ansehen
		//_Btn4 ctrlShow false;
		_Btn6 ctrlShow false;
	};
} else {
	_Btn1 ctrlEnable false;
	//_Btn3 ctrlEnable false;
	//_Btn5 ctrlEnable false;
	_Btn2 ctrlEnable false; // Perso ansehen
	//_Btn4 ctrlEnable false;
	_Btn6 ctrlEnable false;
};
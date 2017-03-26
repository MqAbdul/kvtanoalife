/*
	Autor: Felix von Studsinske
	Dateiname: fn_zeigePerso.sqf
	Beschreibung:
		Setzt nen HUD für den Spieler auf und zeigt den Personalausweis an.
		
	Sie dürfen meine Funktionen/Scripte nur mit der "License-FvS.txt" nutzen sowie der Einhaltung der Regeln.
		Im Missionshauptverzeichnis oder in einem leicht zu findenen Ordner muss die "License-FvS.txt" vorhanden sein!
			Beispiel-Pfad: 
				Altis_Life.Altis\License-FvS.txt
				MyExampleMission.Altis\License-FvS.txt
	You are only allowed to use my scripts/functions with my littly "License-FvS.txt" and the agreements to the rules.
		The "License-FvS.txt" has to be in your mission root folder or in an easy to finding folder
			Destination example:
				Altis_Life.Altis\License-FvS.txt
				MyExampleMission.Altis\License-FvS.txt
*/
disableSerialization;
_sender = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(!(isNull (uiNameSpace getVariable "playerPerso"))) exitWith {hint format["%1 moechte dir seinen Personal- / Dienstausweis zeigen, jedoch schaust du dir gerade einen an. Blende den aktuellen Ausweis mit F10 aus, um den von %1 zu sehen.",_sender getVariable["realname",name _sender]]}; // Aktuell wird schon ein Personalausweis angesehen
if(_sender distance player > 5) exitWith {titleText ["Der Spieler ist zu weit weg","PLAIN"];};
if(isNull _sender) exitWith {};
_senderVar = _sender getVariable ["personaltext",[]];
if(_senderVar isEqualTo []) exitWith {hint format ["Fehler im Personalausweis von %1 und kann somit nicht dargestellt werden ( %1 )",_sender getVariable["realname",name _sender],_senderVar];}; // Fehler

("perso" call BIS_fnc_rscLayer) cutRsc ["playerPerso","PLAIN"];
_ui = uiNameSpace getVariable "playerPerso";

_nameP = _senderVar select 0;
_alter = _senderVar select 1;
_sex = _senderVar select 2;
_bltg = _senderVar select 3;
_stra = _senderVar select 4;
_handynr = _senderVar select 5;
_email = _senderVar select 6;
_cm = _senderVar select 7;
_kg = _senderVar select 8;
_t = _senderVar select 9;
_m = _senderVar select 10;
_j = _senderVar select 11;
_plz = _senderVar select 12;
_hsnr = _senderVar select 13;
_wohnort = getText(missionConfigFile >> "Personalausweis" >> "persoOrt" >> (_senderVar select 12) >> "name");
_bildID = getText(missionConfigFile >> "Personalausweis" >> "persoBild" >> (_senderVar select 14) >> "pfad");

_bildPerso = _ui displayCtrl 410001;
_bildPerso ctrlSetText format["%1",_bildID];

_name = _ui displayCtrl 410002;
_name ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1</t></t>",_nameP];

_bday = _ui displayCtrl 410003;
_bday ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1. %2. %3</t></t>",_t,_m,_j];

_adresse = _ui displayCtrl 410004;
_adresse ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1 %2<br/>%3 %4</t></t>",_stra,_hsnr,_plz,_wohnort];

_groesse = _ui displayCtrl 410005;
_groesse ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1 cm</t></t>",_cm];

_geschlecht = _ui displayCtrl 410006;
_geschlecht ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1</t></t>",_sex];

_mail = _ui displayCtrl 410007;
_mail ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1</t></t>",_email];

_gewicht = _ui displayCtrl 410008;
_gewicht ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>%1 kg</t></t>",_kg];

_handynrUI = _ui displayCtrl 410009;
_handynrUI ctrlSetStructuredText parseText format["<t size='.9'><t color='#000000'>0%1</t></t>",_handynr];

_seite = _ui displayCtrl 410010;
_gang = if(side _sender == civilian && (group _sender) getVariable ["gang_name",""] != "") then {(group _sender) getVariable "gang_name"} else {""};
_frakt = switch (side _sender) do
	{
		case west: {"Polizist"}; // Cop
		case independent: {"Sanitaeter"}; // Medic
		case civilian: {"Zivilist<br/>" + _gang}; // Civilian + gang name
		case east: {"Opfor"}; // Opfor/East
		default {"Unbekannt"};
	};
_seite ctrlSetStructuredText parseText format["<t size='.75'><t color='#000000'>%1</t></t>",_frakt];

_fraktBild = _ui displayCtrl 410011;
_textBild = if(side _sender == civilian) then {getText(missionConfigFile >> "Personalausweis" >> "logoCiv")} else {if(side _sender == west) then {getText(missionConfigFile >> "Personalausweis" >> "logoWest")} else {if(side _sender == independent) then {getText(missionConfigFile >> "Personalausweis" >> "logoIndep")} else {getText(missionConfigFile >> "Personalausweis" >> "logoUnkn")};};};
_fraktBild ctrlSetText _textBild;

if(_sender != player) then {
	hint format["Dir wird gerade der Personal- / Dienstausweis von %1 angezeigt. Blende ihn mit F10 wieder aus",_sender getVariable["realname",name _sender]];
} else {
	hint "Du schaust die gerade deinen Personal- / Dienstausweis an. Blende ihn mit F10 wieder aus"; // Eigener Personalausweis?
};
PERSO_EXIT = (findDisplay 46) displayAddEventHandler ["KeyDown","if((_this select 1) == 68) then {(findDisplay 46) displayRemoveEventHandler ['KeyDown',PERSO_EXIT];(""perso"" call BIS_fnc_rscLayer) cutText ["""",""PLAIN""];};false"];

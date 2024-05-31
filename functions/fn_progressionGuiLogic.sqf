
profileNameSpace setVariable ["rad_playerProgression",[progression_score + score player,progression_recoil,progression_sway,progression_strength,progression_rank,progression_isMedic,progression_isEngineer,progression_isEod,progression_isHacker]];
_progression = profileNameSpace getVariable ["rad_playerProgression",[0,0,0,0,"PRIVATE",false,false,false,false]];
_progression_score = _progression select 0;
_progression_recoil = _progression select 1;
_progression_sway = _progression select 2;
_progression_strength = _progression select 3;
_progression_rank = _progression select 4;
_progression_isMedic = _progression select 5;
_progression_isEngineer = _progression select 6;
_progression_isEod = _progression select 7;
_progression_isHacker = _progression select 8;

_initial_trait_cost = 250;
_perk_count = 0;

if(_progression_isMedic) then{
	_perk_count = _perk_count + 1;
};
if(_progression_isEngineer) then{
	_perk_count = _perk_count + 1;
};
if(_progression_isEod) then{
	_perk_count = _perk_count + 1;
};
if(_progression_isHacker) then{
	_perk_count = _perk_count + 1;
};

_gui = findDisplay 1969;

_playername = _gui displayCtrl 1;
_playername ctrlSetText name player;

_recoil = _gui displayCtrl 3;
_recoil ctrlSetText "Recoil control:";

_recoilBar = _gui displayCtrl 25;
_recoilBar progressSetPosition _progression_recoil / 0.75 toFixed 2;

_sway = _gui displayCtrl 4;
_sway ctrlSetText "Sway control:";

_swayBar = _gui displayCtrl 26;
_swayBar progressSetPosition _progression_sway / 0.5 toFixed 2;

_strength = _gui displayCtrl 5;
_strength ctrlSetText "Strength Level:";

_strengthBar = _gui displayCtrl 27;
_strengthBar progressSetPosition _progression_strength / 0.5 toFixed 2;

_rankIcon = _gui displayCtrl 6;
_rank = _gui displayCtrl 7;
_rankUp = _gui displayCtrl 15;
_rankImageIcon = "";

_rank ctrlSetText _progression_rank;
_rankProgBar = _gui displayCtrl 60;
_rankProg = _gui displayCtrl 61;


switch(_progression_rank) do {
	case "PRIVATE": {
		_rankImageIcon = ["PRIVATE","texture"] call BIS_fnc_rankParams;
		if(_progression_score < 250) then {
			_rankProg ctrlSetText format ["%1 / 250", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 250 toFixed 2;
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format ["['Rankup', 'CORPORAL', %1] spawn CO_fnc_confirmationGuiLogic", 250];
		};
	};
	case "CORPORAL": {
        _rankImageIcon = ["CORPORAL","texture"] call BIS_fnc_rankParams;
		_initial_trait_cost = round (_initial_trait_cost * 0.9);
		if(_progression_score < 500) then {
			_rankProg ctrlSetText format ["%1 / 500", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 500 toFixed 2;
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format ["['Rankup', 'SERGEANT', %1] spawn CO_fnc_confirmationGuiLogic", 500];
		};
	};
	case "SERGEANT": {
        _rankImageIcon = ["SERGEANT","texture"] call BIS_fnc_rankParams;
		_initial_trait_cost = round(_initial_trait_cost * 0.8);
		if(_progression_score < 750) then {
			_rankProg ctrlSetText format ["%1 / 750", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 750 toFixed 2;
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format["['Rankup', 'LIEUTENANT', %1] spawn CO_fnc_confirmationGuiLogic", 750];
		};
	};
	case "LIEUTENANT": {
        _rankImageIcon = ["LIEUTENANT","texture"] call BIS_fnc_rankParams;
		_initial_trait_cost = round (_initial_trait_cost * 0.7);
		if(_progression_score < 1000) then {
			_rankProg ctrlSetText format ["%1 / 1000", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 1000 toFixed 2;
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format ["['Rankup', 'CAPTAIN', %1] spawn CO_fnc_confirmationGuiLogic", 1000];
		};
	};
	case "CAPTAIN": {
        _rankImageIcon = ["CAPTAIN","texture"] call BIS_fnc_rankParams;
		_initial_trait_cost = round (_initial_trait_cost * 0.6);
		if(_progression_score < 1500) then {
			_rankProg ctrlSetText format ["%1 / 1500", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 1500 toFixed 2; 
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format["['Rankup', 'MAJOR', %1] spawn CO_fnc_confirmationGuiLogic", 1500];
		};
	};
    case "MAJOR": {
        _rankImageIcon = ["MAJOR","texture"] call BIS_fnc_rankParams;
		_initial_trait_cost = round (_initial_trait_cost * 0.5);
		if(_progression_score < 2500) then {
			_rankProg ctrlSetText format ["%1 / 2500", _progression_score];
			_rankProgBar progressSetPosition _progression_score / 2500 toFixed 2; 
			ctrlDelete _rankUp;
		} else {
			ctrlDelete _rankProgBar;
			ctrlDelete _rankProg;
			_rankUp buttonSetAction format["['Rankup', 'COLONEL', %1] spawn CO_fnc_confirmationGuiLogic", 2500];
		};
	};
	case "COLONEL": {
		_rankImageIcon = ["COLONEL","texture"] call BIS_fnc_rankParams;
	    ctrlDelete _rankProgBar;
		ctrlDelete _rankProg;
		ctrlDelete _rankUp;
	};
};

_rankIcon ctrlSetText _rankImageIcon;

_cost_with_multiplier = _initial_trait_cost + (250 * _perk_count);

if(_cost_with_multiplier < 0 || _progression_rank == "COLONEL") then {
	_cost_with_multiplier = 0;
};

if(_progression_isHacker && _progression_isEod && _progression_isEngineer && _progression_isMedic) then {
	_cost_with_multiplier = 0;
};

_score = _gui displayCtrl 9;
_score ctrlSetText format ["Overall score: %1", _progression_score];

_cost = _gui displayCtrl 8;
_cost ctrlSetText format ["Combat traits, Cost: %1", _cost_with_multiplier];

_traitOneIcon = _gui displayCtrl 16;
_traitOneIcon ctrlSetText "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_revive_ca.paa";

_traitTwoIcon = _gui displayCtrl 18;
_traitTwoIcon ctrlSetText "\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\repair_ca.paa";

_traitThreeIcon = _gui displayCtrl 19;
_traitThreeIcon ctrlSetText "\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\destroy_ca.paa";

_traitFourIcon = _gui displayCtrl 17;
_traitFourIcon ctrlSetText "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa";

_traitOne = _gui displayCtrl 10;

if(!_progression_isMedic) then {
	_traitOneIcon ctrlSetTextColor [0.873, 0, 0, 1];
};
if(!_progression_isMedic && _progression_score >= _cost_with_multiplier) then {
	_traitOne buttonSetAction format ["['Trait', 'Medic', %1] spawn CO_fnc_confirmationGuiLogic", _cost_with_multiplier];
};

_traitTwo = _gui displayCtrl 12;

if(!_progression_isEngineer) then {
   _traitTwoIcon ctrlSetTextColor [0.873, 0, 0, 1];
};
if(!_progression_isEngineer && _progression_score >= _cost_with_multiplier) then {
	_traitTwo buttonSetAction format ["['Trait', 'Engineer', %1] spawn CO_fnc_confirmationGuiLogic", _cost_with_multiplier];
};

_traitThree = _gui displayCtrl 11;

if(!_progression_isEod) then {
	 _traitThreeIcon ctrlSetTextColor [0.873, 0, 0, 1];
};
if(!_progression_isEod && _progression_score >= _cost_with_multiplier) then {
	_traitThree buttonSetAction format ["['Trait', 'Eod', %1] spawn CO_fnc_confirmationGuiLogic", _cost_with_multiplier];
};

_traitFour = _gui displayCtrl 13;

if(!_progression_isHacker) then {
	_traitFourIcon ctrlSetTextColor [0.873, 0, 0, 1];
};
if(!_progression_isHacker && _progression_score >= _cost_with_multiplier) then {
	_traitFour buttonSetAction format ["['Trait', 'Hacker', %1] spawn CO_fnc_confirmationGuiLogic", _cost_with_multiplier];
};

_workout = _gui displayCtrl 14;
_workout buttonSetAction "createDialog 'workoutGui'";

_wipe = _gui displayCtrl 28;
_wipe buttonSetAction "['Wipe', 'None', 1] spawn CO_fnc_confirmationGuiLogic";
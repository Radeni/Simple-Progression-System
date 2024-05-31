params ["_functionRequested", "_paramForFunction", "_cost"];

createDialog "confirmationGui";

_gui = findDisplay 1970;

_confirmButton = _gui displayCtrl 0;
_declineButton = _gui displayCtrl 1;
_title = _gui displayCtrl 3;

switch(_functionRequested) do {
	case "Trait": {
		_title ctrlSetText format ["Are you sure you want to spend: %1 points?", _cost];
		_confirmButton buttonSetAction format ["[%1, %2] spawn CO_fnc_addTrait;", str _paramForFunction, _cost];
	
	};
	case "Rankup": {
		_title ctrlSetText format ["Do you want to rank up using: %1 points?", _cost];
		_confirmButton buttonSetAction format ["[%1, %2] spawn CO_fnc_rankUp;", str _paramForFunction, _cost];
	};
	case "Wipe": {
		_title ctrlSetText "Are you sure you want to wipe all progress?";
		_confirmButton buttonSetAction "[] spawn CO_fnc_wipeData;";
	};
};


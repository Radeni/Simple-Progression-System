params ["_trait", "_cost"];

switch(_trait) do {
	case "Medic": {
		player setUnitTrait ["medic",true];
		progression_isMedic = true;
	};
	case "Engineer": {
		player setUnitTrait ["engineer",true];
		progression_isEngineer = true;
	};
	case "Eod": {
		player setUnitTrait ["explosiveSpecialist",true];
		progression_isEod = true;
	};
		case "Hacker": {
		player setUnitTrait ["UAVHacker",true];
		progression_isHacker = true;
	};
};

progression_score = progression_score - _cost;


while{dialog} do {closeDialog 0; sleep 0.01};

createDialog "progressionGui";


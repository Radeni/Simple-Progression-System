params ["_paramForFunction", "_cost"];
	
progression_rank = _paramForFunction;
player setRank _paramForFunction;
	
progression_score = progression_score - _cost;

while{dialog} do {closeDialog 0; sleep 0.01};
createDialog "progressionGui";
params ["_sets"];

while{dialog} do {closeDialog 0; sleep 0.01};

for "_i" from 1 to _sets do 
{
	player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
	sleep 15;
	progression_strength = progression_strength + 0.0025;
	player setUnitTrait ["loadCoef",(1 - progression_strength)];
};
profileNameSpace setVariable ["rad_playerProgression",[progression_score + score player,progression_recoil,progression_sway,progression_strength,progression_rank,progression_isMedic,progression_isEngineer,progression_isEod,progression_isHacker]];


profileNameSpace setVariable ["rad_playerProgression",nil];

player addScore -(getPlayerScores player select 5);

progression_score = 0;
progression_recoil = 0; 
progression_sway = 0;
progression_strength = 0;
progression_rank = "PRIVATE";
progression_isMedic = false;
progression_isEngineer = false;
progression_isEod = false;
progression_isHacker = false;

while{dialog} do {closeDialog 0; sleep 0.01};

createDialog "progressionGui";

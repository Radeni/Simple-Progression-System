sleep 600;
profileNameSpace setVariable ["rad_playerProgression",[progression_score + score player,progression_recoil,progression_sway,progression_strength,progression_rank,progression_isMedic,progression_isEngineer,progression_isEod,progression_isHacker]];
[] spawn CO_fnc_progressionsave;
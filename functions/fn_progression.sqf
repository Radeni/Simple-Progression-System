// [score, recoil, sway, strength, rank, medic, engineer, eod, hacker]
if (!hasInterface) exitWith {};
waitUntil {time > 0};
[] spawn CO_fnc_progressionsave;
	progression = profileNameSpace getVariable ["rad_playerProgression",[0,0,0,0,"PRIVATE",false,false,false,false]];
	progression_score = progression select 0;
	progression_recoil = progression select 1;
	progression_sway = progression select 2;
	progression_strength = progression select 3;
	progression_rank = progression select 4;
	progression_isMedic = progression select 5;
	progression_isEngineer = progression select 6;
	progression_isEod = progression select 7;
	progression_isHacker = progression select 8;
	player enableAimPrecision false;
	player setUnitRecoilCoefficient (1 - progression_recoil);
	player setCustomAimCoef (getCustomAimCoef player - progression_sway);
	player setUnitTrait ["loadCoef",(1 - progression_strength)];
	player setUnitTrait ["Medic",progression_isMedic];
	player setUnitTrait ["explosiveSpecialist",progression_isEod];
	player setUnitTrait ["engineer",progression_isEngineer];
	player setUnitTrait ["UAVHacker",progression_isHacker];
	player setRank progression_rank;
	
    _actionId = player addAction ["Progression menu", {createDialog "progressionGui";}];
	
	// RECOIL LEVELING
	if (progression_recoil < 0.75) then {
	player addEventHandler ["Fired", 
	{
		//params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
		//_recoilClass = configfile >> "CfgWeapons" >> _weapon >> "recoil";
		//_permRecoil = configfile >> "CfgRecoils" >> _recoilClass >> "temporary";
		progression_recoil = progression_recoil + 0.00020;
		player setUnitRecoilCoefficient (1 - progression_recoil);
		if (progression_recoil >= 0.75) then {progression_recoil = 0.75; player removeEventHandler ["Fired", _thisEventHandler];}
	}];
	} else {progression_recoil = 0.75};
	
	// SWAY LEVELING
	if (progression_sway < 0.5) then {
	player addEventHandler ["Fired", 
	{
		//params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
		progression_sway = progression_sway + 0.0000333;
		player setCustomAimCoef (1 - progression_sway);
		if (progression_sway >= 0.5) then {progression_sway = 0.5; player removeEventHandler ["Fired", _thisEventHandler];}
	}];
	player addEventHandler ["weaponRested", 
	{
		progression_sway = progression_sway + 0.000025;
		player setCustomAimCoef (1 - progression_sway);
		if (progression_sway >= 0.5) then {progression_sway = 0.5; player removeEventHandler ["weaponRested", _thisEventHandler];}
	}];
	player addEventHandler ["weaponDeployed", 
	{
		params ["_unit","_isRested"];
		progression_sway = progression_sway + 0.000833;
		player setCustomAimCoef (getCustomAimCoef player - progression_sway);
		if (progression_sway >= 0.5) then {progression_sway = 0.5; player removeEventHandler ["weaponDeployed", _thisEventHandler];}
	}];} else {progression_sway = 0.5};
	
	//STRENGTH LEVELING
	if (progression_strength < 0.5) then {
	player addEventHandler ["Fired", 
	{
		//params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
		progression_strength = progression_strength + 0.000001;
		player setUnitTrait [ "loadCoef",(1 - progression_strength)];
		if (progression_strength >= 0.5) then {progression_strength = 0.5; player removeEventHandler ["Fired", _thisEventHandler];}
	}];
	player addEventHandler ["weaponRested", 
	{
		progression_strength = progression_strength + 0.0000025;
		player setUnitTrait [ "loadCoef",(1 - progression_strength)];
		if (progression_strength >= 0.5) then {progression_strength = 0.5; player removeEventHandler ["weaponRested", _thisEventHandler];}
	}];
	player addEventHandler ["weaponDeployed", 
	{
		progression_sway = progression_sway + 0.00000125;
		player setUnitTrait [ "loadCoef",(1 - progression_strength)];
		if (progression_strength >= 0.5) then {progression_strength = 0.5; player removeEventHandler ["weaponDeployed", _thisEventHandler];}
	}];} else {progression_strength = 0.5};
	
	player addEventHandler ["Respawn", {
	//params ["_unit", "_corpse"];
		
    _actionId = player addAction ["Progression menu", {createDialog "progressionGui";}];
	player enableAimPrecision false;
	player setUnitTrait [ "loadCoef",(1 - progression_strength)];
	player setCustomAimCoef (1 - progression_sway);
	player setUnitRecoilCoefficient (1 - progression_recoil);
	}];
	
	//PROFILE UPDATE
	player addEventHandler ["Killed",
	{;
	    player removeAction _actionId;
		profileNameSpace setVariable ["rad_playerProgression",[progression_score,progression_recoil,progression_sway,progression_strength,progression_rank,progression_isMedic,progression_isEngineer,progression_isEod,progression_isHacker]];	
	}];
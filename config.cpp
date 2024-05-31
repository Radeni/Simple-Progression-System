#include "BIS_AddonInfo.hpp"
#include "GUI\confirmationGui.hpp"
#include "GUI\workoutGui.hpp"
#include "GUI\progressionGui.hpp"
class CfgFunctions
{
	class CO
	{
		class functions
		{
			tag = "A3Progression";
			file = "PROGRESSIONSYS\functions";
            class progressionGuiLogic{};
			class addTrait{};
			class rankUp{};
			class confirmationGuiLogic{};
			class workout{};
			class workoutGuiLogic{};
            class progression{};
			class wipeData{};
			class progressionInit{postInit = 1;};
		};
	};
};

class CfgPatches 
{
	class progression_ctrg9
	{
		units[] = {};
		author[] = {"Rad","Broken_Algorithm"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		version = "1";
	};
};
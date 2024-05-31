class workoutGui
{
	idd = 1971;
	
	class ControlsBackground
	{
		
	};
	class Controls
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = 0.08835938;
			y = 0.08430556;
			w = 0.57404042;
			h = 0.20723908;
			style = 0;
			text = "";
			colorBackground[] = {0.4,0.4,0.4,0.75};
			colorText[] = {0.6588,0.1725,0.8157,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			onLoad = "[] spawn CO_fnc_workoutGuiLogic;";
			
		};
		class Title
		{
			type = 0;
			idc = 1;
			x = 0.17424172;
			y = 0.07151904;
			w = 0.82227489;
			h = 0.13822786;
			style = 0;
			text = "Workout: How many sets?";
			colorBackground[] = {0.6863,0.3294,0.3569,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3);
			
		};
		class DropdownBox
		{
			type = 4;
			idc = 2;
			x = 0.09924172;
			y = 0.20151904;
			w = 0.55000001;
			h = 0.05500003;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0.2,0.2,0.2,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.4,0.502,0.902,1};
			colorSelectBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};	
	};	
};


class ProgressionGui
{
	idd = 1969;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = 0.06060607;
			y = 0.20707073;
			w = 0.65404042;
			h = 0.55723908;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorText[] = {0.9686,0.9529,0.8118,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class PlayerName
		{
			type = 0;
			idc = 1;
			x = 0.07449496;
			y = 0.22558924;
			w = 0.44949496;
			h = 0.07575759;
			style = 0;
			text = "name player;";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2);
			
		};
		class HeaderOne
		{
			type = 0;
			idc = 2;
			x = 0.07500003;
			y = 0.27500007;
			w = 0.45000002;
			h = 0.07500004;
			style = 0;
			text = "Passive skills:";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Recoil
		{
			type = 0;
			idc = 3;
			x = 0.07500009;
			y = 0.35000004;
			w = 0.45000002;
			h = 0.05000015;
			style = 0;
			text = "Recoil control; + progression select 0;";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class Sway
		{
			type = 0;
			idc = 4;
			x = 0.07500002;
			y = 0.40000005;
			w = 0.45000002;
			h = 0.05000011;
			style = 0;
			text = "Sway control; + progression select 1;";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class Strength
		{
			type = 0;
			idc = 5;
			x = 0.07500002;
			y = 0.45000007;
			w = 0.45000002;
			h = 0.05000011;
			style = 0;
			text = "Strength + progression select 2;";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class Rank
		{
			type = 0;
			idc = 7;
			x = 0.5348889;
			y = 0.46632999;
			w = 0.125;
			h = 0.05050506;
			style = 0;
			text = "PRIVATE";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8);
			
		};
		class HeaderTwo
		{
			type = 0;
			idc = 8;
			x = 0.07500002;
			y = 0.57500008;
			w = 0.45000002;
			h = 0.07500004;
			style = 0;
			text = "Combat traits:";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class OverallScore
		{
			type = 0;
			idc = 9;
			x = 0.07449496;
			y = 0.52525253;
			w = 0.44949496;
			h = 0.07575759;
			style = 0;
			text = "Overall score: ";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class RankIcon
		{
			type = 0;
			idc = 6;
			x = 0.47500005;
			y = 0.22500001;
			w = 0.20000001;
			h = 0.25000001;
			style = 0+48;
			text = "";
			colorBackground[] = {0.702,0.702,0.702,1};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TraitOneIcon
		{
			type = 0;
			idc = 16;
			x = 0.08000031;
			y = 0.65527282;
			w = 0.0659091;
			h = 0.09090911;
			style = 0+48;
			text = "";
			colorBackground[] = {0.698,0.2549,0.3765,1};
			colorText[] = {0.302,0.7451,0.6235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TraitTwoIcon
		{
			type = 0;
			idc = 17;
			x = 0.37960614;
			y = 0.65527282;
			w = 0.0659091;
			h = 0.09090911;
			style = 0+48;
			text = "";
			colorBackground[] = {0.698,0.2549,0.3765,1};
			colorText[] = {0.302,0.7451,0.6235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TraitThreeIcon
		{
			type = 0;
			idc = 18;
			x = 0.18060611;
			y = 0.65527282;
			w = 0.0659091;
			h = 0.09090911;
			style = 0+48;
			text = "";
			colorBackground[] = {0.698,0.2549,0.3765,1};
			colorText[] = {0.302,0.7451,0.6235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TraitFourIcon
		{
			type = 0;
			idc = 19;
			x = 0.2790611;
			y = 0.65527282;
			w = 0.0659091;
			h = 0.09090911;
			style = 0+48;
			text = "";
			colorBackground[] = {0.698,0.2549,0.3765,1};
			colorText[] = {0.302,0.7451,0.6235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class TraitOne
		{
			type = 1;
			idc = 10;
			x = 0.07500031;
			y = 0.65000019;
			w = 0.07500004;
			h = 0.10000007;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,0.3059};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,0.4235};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.502,0.502,0.502,0};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class TraitTwo
		{
			type = 1;
			idc = 11;
			x = 0.27500027;
			y = 0.65000019;
			w = 0.07500004;
			h = 0.10000007;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,0.3059};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.502,0.502,0.502,0};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class TraitThree
		{
			type = 1;
			idc = 12;
			x = 0.17500029;
			y = 0.6500002;
			w = 0.07500004;
			h = 0.10000007;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,0.3059};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.502,0.502,0.502,0};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class TraitFour
		{
			type = 1;
			idc = 13;
			x = 0.37500028;
			y = 0.65000019;
			w = 0.07500004;
			h = 0.10000007;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,0.3059};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.502,0.502,0.502,0};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onLoad = "[] spawn CO_fnc_progressionGuiLogic;";
			
		};
		class WorkOut
		{
			type = 1;
			idc = 14;
			x = 0.47500051;
			y = 0.60500026;
			w = 0.20000006;
			h = 0.05000007;
			style = 0;
			text = "Strength Workout";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,1};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.302,0.302,0.302,0};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class WipeData
		{
			type = 1;
			idc = 28;
			x = 0.50950051;
			y = 0.67500026;
			w = 0.13000006;
			h = 0.05000007;
			style = 0;
			text = "Wipe Data";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,1};
			colorBackgroundActive[] = {0.949,0.949,0.949,1};
			colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.6,0.6,0.6,1};
			colorShadow[] = {0.302,0.302,0.302,0};
			colorText[] = {234, 0, 0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class RankUp
		{
			type = 1;
			idc = 15;
			x = 0.52500011;
			y = 0.52500007;
			w = 0.10000006;
			h = 0.05000004;
			style = 0;
			text = "Rank Up";
			deletable = true;
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0.302,0.302,0.302,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick = "";
			
		};
		class ProgressRecoil
		{
			type = 8;
			idc = 25;
			x = 0.21742426;
			y = 0.3636364;
			w = 0.21212122;
			h = 0.03341751;
			style = 0;
			colorBar[] = {0.949,0.949,0.949,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class ProgressSway
		{
			type = 8;
			idc = 26;
			x = 0.21742426;
			y = 0.41363642;
			w = 0.21212122;
			h = 0.03341751;
			style = 0;
			colorBar[] = {0.949,0.949,0.949,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class ProgressStrength
		{
			type = 8;
			idc = 27;
			x = 0.21742426;
			y = 0.46363643;
			w = 0.21212122;
			h = 0.03341751;
			style = 0;
			colorBar[] = {0.949,0.949,0.949,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class ProgressRank
		{
			type = 8;
			idc = 60;
			x = 0.49720204;
			y = 0.51841751;
			w = 0.15151516;
			h = 0.03367004;
			deletable = true;
			style = 0;
			colorBar[] = {0.949,0.949,0.949,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class RankBar
		{
			type = 0;
			idc = 61;
			x = 0.5048889;
			y = 0.52233001;
			w = 0.33000001;
			h = 0.02550507;
			deletable = true;
			style = 0;
			text = "0 / 2500";
			colorBackground[] = {0.949,0.949,0.949,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*0.8);
			
		};
		
	};
	
};

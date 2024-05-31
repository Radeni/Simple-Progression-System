
class ConfirmationGui
{
	idd = 1970;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 2;
			x = 0.35303036;
			y = 0.29141416;
			w = 0.55393941;
			h = 0.18378792;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.75};
			colorText[] = {0.7765,0.1451,0.1686,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class AreYouSure
		{
			type = 0;
			idc = 3;
			x = 0.37297983;
			y = 0.29099328;
			w = 0.50848489;
			h = 0.11447813;
			style = 0;
			text = "Are you sure";
			colorBackground[] = {0.302,0.302,0.302,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class Yes
		{
			type = 1;
			idc = 0;
			x = 0.43500008;
			y = 0.37500005;
			w = 0.185000007;
			h = 0.07000005;
			style = 0+2;
			text = "Confirm";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
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
			
		};
		class No
		{
			type = 1;
			idc = 1;
			x = 0.6150001;
			y = 0.37500005;
			w = 0.18000007;
			h = 0.07000005;
			style = 0+2;
			text = "Cancel";
			borderSize = 0;
			colorBackground[] = {0.8,0.8,0.8,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
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
			
		};
		
	};
	
};

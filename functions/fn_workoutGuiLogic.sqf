_gui = findDisplay 1971;

_dropdown = _gui displayCtrl 2;

_firstValue = _dropdown lbAdd "One";
_secondValue = _dropdown lbAdd "Two";
_thirdValue = _dropdown lbAdd "Three";
_fourValue = _dropdown lbAdd "Four";
_fiveValue = _dropdown lbAdd "Five";





_confirm = _gui displayCtrl 3;


_dropdown ctrlAddEventHandler ["LBSelChanged",
{
	params ["_control", "_selectedIndex"];
    _valueToPass = lbCurSel _control + 1; 
	[_valueToPass] spawn CO_fnc_workout;
}];





class CfgPatches
{
	class akt
	{
		name="AkT";
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ace_nametags",
			"ace_interaction"
		};
		author="YouMax";
		authors[]=
		{
			"YouMax"
		};
		version="1.0.0";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_TeamManagement
			{
				modifierFunction="[(_target getVariable ['akt_color', 'main']), _this select 3] call akt_fnc_modifyIcon";
				class ACE_remoteTeamManagement
				{
					condition="false";
				};
				class ACE_JoinTeamRed
				{
					condition="false";
				};
				class ACE_JoinTeamGreen
				{
					condition="false";
				};
				class ACE_JoinTeamBlue
				{
					condition="false";
				};
				class ACE_JoinTeamYellow
				{
					condition="false";
				};
				class ACE_JoinTeamMain
				{
					condition="false";
				};
				class aktred
				{
					displayName="$STR_AKT_JOIN_RED";
					condition="[_target, 'red'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'red'] call akt_fnc_setColor";
					modifierFunction="['red', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktgreen
				{
					displayName="$STR_AKT_JOIN_GREEN";
					condition="[_target, 'green'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'green'] call akt_fnc_setColor";
					modifierFunction="['green', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktblue
				{
					displayName="$STR_AKT_JOIN_BLUE";
					condition="[_target, 'blue'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'blue'] call akt_fnc_setColor";
					modifierFunction="['blue', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktyellow
				{
					displayName="$STR_AKT_JOIN_YELLOW";
					condition="[_target, 'yellow'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'yellow'] call akt_fnc_setColor";
					modifierFunction="['yellow', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktmain
				{
					displayName="$STR_AKT_JOIN_MAIN";
					condition="[_target, 'main'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'white'] call akt_fnc_setColor";
					icon="\akt\icon\team_white_ca.paa";
					modifierFunction="['main', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktpink
				{
					displayName="$STR_AKT_JOIN_PINK";
					condition="[_target, 'pink'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'pink'] call akt_fnc_setColor";
					icon="\akt\icon\team_pink_ca.paa";
					modifierFunction="['pink', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktcyan
				{
					displayName="$STR_AKT_JOIN_CYAN";
					condition="[_target, 'cyan'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'cyan'] call akt_fnc_setColor";
					icon="\akt\icon\team_cyan_ca.paa";
					modifierFunction="['cyan', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktpurple
				{
					displayName="$STR_AKT_JOIN_PURPLE";
					condition="[_target, 'purple'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'purple'] call akt_fnc_setColor";
					modifierFunction="['purple', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktorange
				{
					displayName="$STR_AKT_JOIN_ORANGE";
					condition="[_target, 'orange'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'orange'] call akt_fnc_setColor";
					icon="\akt\icon\team_orange_ca.paa";
					modifierFunction="['orange', _this select 3] call akt_fnc_modifyIcon";
				};
				class aktblack
				{
					displayName="$STR_AKT_JOIN_BLACK";
					condition="[_target, 'black'] call akt_fnc_canSetColor";
					exceptions[]={};
					statement="[_target, 'black'] call akt_fnc_setColor";
					icon="\akt\icon\team_black_ca.paa";
					modifierFunction="['black', _this select 3] call akt_fnc_modifyIcon";
				};
			};
		};
	};
};
class CfgFunctions
{
	class overwrite_ace_nametags
	{
		tag="ace_nametags";
		class ace_nametags
		{
			class drawNameTagIcon
			{
				file="\akt\aknametag.sqf";
			};
		};
	};
	class akt
	{
		tag="akt";
		class functions
		{
			file="\akt";
			class setColor
			{
			};
			class preInit
			{
				preInit=1;
			};
			class canSetColor
			{
			};
			class modifyIcon
			{
			};
		};
	};
};

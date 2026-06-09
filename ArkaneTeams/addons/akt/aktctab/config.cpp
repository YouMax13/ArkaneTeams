class CfgPatches
{
	class aktctab
	{
		skipWhenMissingDependencies=1;
		name="AkTctab";
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ctab_core"
		};
		author="YouMax";
		authors[]=
		{
			"YouMax"
		};
		version="1.0.0";
	};
};
class CfgFunctions
{
	class overwrite_cTab
	{
		tag="ctab";
		class ctab_core
		{
			class drawBftMarkers
			{
				file="\akt\aktctab\fn_drawAkTMarkers.sqf";
			};
		};
	};
};

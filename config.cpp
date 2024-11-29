#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \vbs2\customer\plugins\behaviors_fm\

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_behaviors_fm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {
			vbs2_editor, 
			vbs2_people,
			vbs2_plugins_function_library,
			vbs2_vbs_plugins_standard_behaviors,
			vbs2_vbs_plugins_ai_core_public
		};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class behaviors_fm //this is an arbitrary className, it needs to be unique though
	{
		path = "\vbs2\customer\plugins\behaviors_fm\data\behaviors_fm\behaviors_fm.btset"; //This is the relative path to the BT-set file to load
		name = "behaviors_fm"; // This is the btset name duplicated in the configuration
	};
};

// Defines the new order as available from the Control AI - Military
class CfgAvailableBehaviors
{
	class behaviors_sample
	{
		icon = "\vbs2\customer\plugins\behaviors_sample\data\behaviors_sample.paa";
		allowRotate = true;


		displayname = "Sample Idle";
		description = "Sample Idle";				

		orderName = "Idle";
		prepareActionMessage = "vbs2\vbs_plugins\ai\standard_behaviors\data\scripts\PrepareBTParameters.sqf";
		
		class RootBehaviors
		{
		  group[] = {"standard_behaviors", "GroupRoot"};
		  entity[] = {"standard_behaviors", "EntityRoot"};
		  vehicle[] = {"standard_behaviors", "VehicleRoot"};
		};
		
		class Parameters
		{
			class debugEnabled
			{
				displayName = "debugEnabled";
				value = "true";
				type = "boolean";
			};
		};
	};
};
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Box_Misc"};
        weapons[] = {"ACE_ItemCore","ACE_FakePrimaryWeapon"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_main"};
        author[] = {"KoffeinFlummi"};
        authorUrl = "https://github.com/KoffeinFlummi/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

class ACE_Rsc_Display_Base {
    idd = -1;
    type = 0;
    style = 48;
    name = "";
    duration = 999999;
    fadeIn = 0;
    fadeOut = 0;
    font = "TahomaB";
    size = 1;
    colorBackground[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 1};
};

class ACE_Rsc_Control_Base {
    idc = 1;
    type = 0;
    style = 48;
    access = 0;
    lineSpacing = 0;
    moving = 1;
    text = "";
    size = 1;
    sizeEx = 0;
    font = "TahomaB";
    colorBackground[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 1};
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

class ACE_canInteractConditions {
    class GVAR(notOnMap) {
        condition = "!visibleMap";
    };
};

class ACE_Settings {
    /*
    *class GVAR(sampleSetting) {
    * Value
    *    value = 1;
    *
    * Type (SCALAR, BOOL, STRING, ARRAY, COLOR)
    *    typeName = "SCALAR";
    *
    * Force the setting?
    *    force = 0;
    *
    * Does it appear on the options menu?
    *    isClientSetable = 1;
    *
    * The following settings only apply when isClientSetable == 1
    * Stringtable entry with the setting name
    *    displayName = "$STR_ACE_Common_SettingName";
    *
    * Stringtable entry with the setting description
    *    description = "$STR_ACE_Common_SettingDescription";
    *
    * Stringtable entries that describe the options
    * Only applies if typeName == "SCALAR";
    *    values[] = {"Disabled", "Enabled", "Only Cursor", "Only On Keypress", "Only Cursor and KeyPress"};
    *};
    */
    class GVAR(forceAllSettings) {
        value = 0;
        typeName = "BOOL";
    };
    class GVAR(enableNumberHotkeys) {
        value = 1;
        typeName = "BOOL";
        isClientSetable = 1;
        displayName = "$STR_ACE_Common_EnableNumberHotkeys";
    };
};

#include <ProgressScreen.hpp>
#include <HintConfig.hpp>
#include <RscInfoType.hpp>
#include <FixPickup.hpp>
#include <FixAnimations.hpp>
#include <NoVoice.hpp>


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\Rewired_Core\Rewired_ModifierKeyFlags.h"
#include "..\Rewired_Core\Rewired_ControllerType.h"

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct LanguageDataBase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Initialize();
		mscorlib::System::String* GetCustomEntry(mscorlib::System::String* key);
		bool ContainsCustomEntryKey(mscorlib::System::String* key);
		mscorlib::System::String* get_yes();
		mscorlib::System::String* get_no();
		mscorlib::System::String* get_add();
		mscorlib::System::String* get_replace();
		mscorlib::System::String* get_remove();
		mscorlib::System::String* get_swap();
		mscorlib::System::String* get_cancel();
		mscorlib::System::String* get_none();
		mscorlib::System::String* get_okay();
		mscorlib::System::String* get_done();
		mscorlib::System::String* get_default_();
		mscorlib::System::String* get_assignControllerWindowTitle();
		mscorlib::System::String* get_assignControllerWindowMessage();
		mscorlib::System::String* get_controllerAssignmentConflictWindowTitle();
		mscorlib::System::String* get_elementAssignmentPrePollingWindowMessage();
		mscorlib::System::String* get_elementAssignmentConflictWindowMessage();
		mscorlib::System::String* get_mouseAssignmentConflictWindowTitle();
		mscorlib::System::String* get_calibrateControllerWindowTitle();
		mscorlib::System::String* get_calibrateAxisStep1WindowTitle();
		mscorlib::System::String* get_calibrateAxisStep2WindowTitle();
		mscorlib::System::String* get_inputBehaviorSettingsWindowTitle();
		mscorlib::System::String* get_restoreDefaultsWindowTitle();
		mscorlib::System::String* get_actionColumnLabel();
		mscorlib::System::String* get_keyboardColumnLabel();
		mscorlib::System::String* get_mouseColumnLabel();
		mscorlib::System::String* get_controllerColumnLabel();
		mscorlib::System::String* get_removeControllerButtonLabel();
		mscorlib::System::String* get_calibrateControllerButtonLabel();
		mscorlib::System::String* get_assignControllerButtonLabel();
		mscorlib::System::String* get_inputBehaviorSettingsButtonLabel();
		mscorlib::System::String* get_doneButtonLabel();
		mscorlib::System::String* get_restoreDefaultsButtonLabel();
		mscorlib::System::String* get_controllerSettingsGroupLabel();
		mscorlib::System::String* get_playersGroupLabel();
		mscorlib::System::String* get_assignedControllersGroupLabel();
		mscorlib::System::String* get_settingsGroupLabel();
		mscorlib::System::String* get_mapCategoriesGroupLabel();
		mscorlib::System::String* get_restoreDefaultsWindowMessage();
		mscorlib::System::String* get_calibrateWindow_deadZoneSliderLabel();
		mscorlib::System::String* get_calibrateWindow_zeroSliderLabel();
		mscorlib::System::String* get_calibrateWindow_sensitivitySliderLabel();
		mscorlib::System::String* get_calibrateWindow_invertToggleLabel();
		mscorlib::System::String* get_calibrateWindow_calibrateButtonLabel();
		mscorlib::System::String* GetControllerAssignmentConflictWindowMessage(mscorlib::System::String* joystickName, mscorlib::System::String* otherPlayerName, mscorlib::System::String* currentPlayerName);
		mscorlib::System::String* GetJoystickElementAssignmentPollingWindowMessage(mscorlib::System::String* actionName);
		mscorlib::System::String* GetJoystickElementAssignmentPollingWindowMessage_FullAxisFieldOnly(mscorlib::System::String* actionName);
		mscorlib::System::String* GetKeyboardElementAssignmentPollingWindowMessage(mscorlib::System::String* actionName);
		mscorlib::System::String* GetMouseElementAssignmentPollingWindowMessage(mscorlib::System::String* actionName);
		mscorlib::System::String* GetMouseElementAssignmentPollingWindowMessage_FullAxisFieldOnly(mscorlib::System::String* actionName);
		mscorlib::System::String* GetElementAlreadyInUseBlocked(mscorlib::System::String* elementName);
		mscorlib::System::String* GetElementAlreadyInUseCanReplace(mscorlib::System::String* elementName, bool allowConflicts);
		mscorlib::System::String* GetMouseAssignmentConflictWindowMessage(mscorlib::System::String* otherPlayerName, mscorlib::System::String* thisPlayerName);
		mscorlib::System::String* GetCalibrateAxisStep1WindowMessage(mscorlib::System::String* axisName);
		mscorlib::System::String* GetCalibrateAxisStep2WindowMessage(mscorlib::System::String* axisName);
		mscorlib::System::String* GetPlayerName(int32_t playerId);
		mscorlib::System::String* GetControllerName(Rewired_Core::Rewired::Controller* controller);
		mscorlib::System::String* GetElementIdentifierName(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		mscorlib::System::String* GetElementIdentifierName(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange);
		mscorlib::System::String* GetElementIdentifierName(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags);
		mscorlib::System::String* GetActionName(int32_t actionId);
		mscorlib::System::String* GetActionName(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		mscorlib::System::String* GetMapCategoryName(int32_t id);
		mscorlib::System::String* GetActionCategoryName(int32_t id);
		mscorlib::System::String* GetLayoutName(Rewired_Core::Rewired::ControllerType controllerType, int32_t id);
		mscorlib::System::String* ModifierKeyFlagsToString(Rewired_Core::Rewired::ModifierKeyFlags flags);
		void _ctor();
	};
}


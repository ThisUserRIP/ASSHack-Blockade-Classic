#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_LanguageDataBase.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct LanguageData_ModifierKeys; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct LanguageData_CustomEntry; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
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
	struct LanguageData : Assembly_CSharp::Rewired::UI::ControlMapper::LanguageDataBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _yes;
		mscorlib::System::String* _no;
		mscorlib::System::String* _add;
		mscorlib::System::String* _replace;
		mscorlib::System::String* _remove;
		mscorlib::System::String* _swap;
		mscorlib::System::String* _cancel;
		mscorlib::System::String* _none;
		mscorlib::System::String* _okay;
		mscorlib::System::String* _done;
		mscorlib::System::String* _default;
		mscorlib::System::String* _assignControllerWindowTitle;
		mscorlib::System::String* _assignControllerWindowMessage;
		mscorlib::System::String* _controllerAssignmentConflictWindowTitle;
		mscorlib::System::String* _controllerAssignmentConflictWindowMessage;
		mscorlib::System::String* _elementAssignmentPrePollingWindowMessage;
		mscorlib::System::String* _joystickElementAssignmentPollingWindowMessage;
		mscorlib::System::String* _joystickElementAssignmentPollingWindowMessage_fullAxisFieldOnly;
		mscorlib::System::String* _keyboardElementAssignmentPollingWindowMessage;
		mscorlib::System::String* _mouseElementAssignmentPollingWindowMessage;
		mscorlib::System::String* _mouseElementAssignmentPollingWindowMessage_fullAxisFieldOnly;
		mscorlib::System::String* _elementAssignmentConflictWindowMessage;
		mscorlib::System::String* _elementAlreadyInUseBlocked;
		mscorlib::System::String* _elementAlreadyInUseCanReplace;
		mscorlib::System::String* _elementAlreadyInUseCanReplace_conflictAllowed;
		mscorlib::System::String* _mouseAssignmentConflictWindowTitle;
		mscorlib::System::String* _mouseAssignmentConflictWindowMessage;
		mscorlib::System::String* _calibrateControllerWindowTitle;
		mscorlib::System::String* _calibrateAxisStep1WindowTitle;
		mscorlib::System::String* _calibrateAxisStep1WindowMessage;
		mscorlib::System::String* _calibrateAxisStep2WindowTitle;
		mscorlib::System::String* _calibrateAxisStep2WindowMessage;
		mscorlib::System::String* _inputBehaviorSettingsWindowTitle;
		mscorlib::System::String* _restoreDefaultsWindowTitle;
		mscorlib::System::String* _restoreDefaultsWindowMessage_onePlayer;
		mscorlib::System::String* _restoreDefaultsWindowMessage_multiPlayer;
		mscorlib::System::String* _actionColumnLabel;
		mscorlib::System::String* _keyboardColumnLabel;
		mscorlib::System::String* _mouseColumnLabel;
		mscorlib::System::String* _controllerColumnLabel;
		mscorlib::System::String* _removeControllerButtonLabel;
		mscorlib::System::String* _calibrateControllerButtonLabel;
		mscorlib::System::String* _assignControllerButtonLabel;
		mscorlib::System::String* _inputBehaviorSettingsButtonLabel;
		mscorlib::System::String* _doneButtonLabel;
		mscorlib::System::String* _restoreDefaultsButtonLabel;
		mscorlib::System::String* _playersGroupLabel;
		mscorlib::System::String* _controllerSettingsGroupLabel;
		mscorlib::System::String* _assignedControllersGroupLabel;
		mscorlib::System::String* _settingsGroupLabel;
		mscorlib::System::String* _mapCategoriesGroupLabel;
		mscorlib::System::String* _calibrateWindow_deadZoneSliderLabel;
		mscorlib::System::String* _calibrateWindow_zeroSliderLabel;
		mscorlib::System::String* _calibrateWindow_sensitivitySliderLabel;
		mscorlib::System::String* _calibrateWindow_invertToggleLabel;
		mscorlib::System::String* _calibrateWindow_calibrateButtonLabel;
		Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_ModifierKeys* _modifierKeys;
		IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry*>* _customEntries;
		bool _initialized;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* customDict;
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


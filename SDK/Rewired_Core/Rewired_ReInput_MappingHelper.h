#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput.h"
namespace Rewired_Core::Rewired { struct ReInput; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputMapCategory; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct InputCategory; };
namespace Rewired_Core::Rewired { struct InputLayout; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct InputAction; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct KeyboardMap; };
namespace Rewired_Core::Rewired { struct MouseMap; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
namespace Rewired_Core::Rewired { struct CustomController; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired { struct ControllerTemplateMap; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_RuleSet; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_RuleSet; };

namespace Rewired_Core::Rewired
{
	struct ReInput_MappingHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_MappingHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_MappingHelper* get_Instance();
		void _ctor();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputMapCategory>* get_MapCategories();
		Rewired_Core::Rewired::InputMapCategory* GetMapCategory(int32_t mapCategoryId);
		Rewired_Core::Rewired::InputMapCategory* GetMapCategory(mscorlib::System::String* name);
		int32_t GetMapCategoryId(mscorlib::System::String* name);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* MapCategoriesWithTag(mscorlib::System::String* tag);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* get_UserAssignableMapCategories();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* UserAssignableMapCategoriesWithTag(mscorlib::System::String* tag);
		bool IsMapCategoryUserAssignable(int32_t mapCategoryId);
		Rewired_Core::Rewired::InputCategory* GetActionCategory(int32_t mapCategoryId);
		Rewired_Core::Rewired::InputCategory* GetActionCategory(mscorlib::System::String* name);
		int32_t GetActionCategoryId(mscorlib::System::String* name);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputCategory>* get_ActionCategories();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* ActionCategoriesWithTag(mscorlib::System::String* tag);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* get_UserAssignableActionCategories();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* UserAssignableActionCategoriesWithTag(mscorlib::System::String* tag);
		bool IsActionCategoryUserAssignable(int32_t mapCategoryId);
		Rewired_Core::Rewired::InputLayout* GetLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t layoutId);
		Rewired_Core::Rewired::InputLayout* GetLayout(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* name);
		int32_t GetLayoutId(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* name);
		Rewired_Core::Rewired::InputLayout* GetJoystickLayout(int32_t layoutId);
		Rewired_Core::Rewired::InputLayout* GetJoystickLayout(mscorlib::System::String* name);
		int32_t GetJoystickLayoutId(mscorlib::System::String* name);
		Rewired_Core::Rewired::InputLayout* GetKeyboardLayout(int32_t layoutId);
		Rewired_Core::Rewired::InputLayout* GetKeyboardLayout(mscorlib::System::String* name);
		int32_t GetKeyboardLayoutId(mscorlib::System::String* name);
		Rewired_Core::Rewired::InputLayout* GetMouseLayout(int32_t layoutId);
		Rewired_Core::Rewired::InputLayout* GetMouseLayout(mscorlib::System::String* name);
		int32_t GetMouseLayoutId(mscorlib::System::String* name);
		Rewired_Core::Rewired::InputLayout* GetCustomControllerLayout(int32_t layoutId);
		Rewired_Core::Rewired::InputLayout* GetCustomControllerLayout(mscorlib::System::String* name);
		int32_t GetCustomControllerLayoutId(mscorlib::System::String* name);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* MapLayouts(Rewired_Core::Rewired::ControllerType controllerType);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* get_JoystickLayouts();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* get_KeyboardLayouts();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* get_MouseLayouts();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* get_CustomControllerLayouts();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputAction>* get_Actions();
		Rewired_Core::Rewired::InputAction* GetAction(int32_t actionId);
		Rewired_Core::Rewired::InputAction* GetAction(mscorlib::System::String* name);
		int32_t GetActionId(mscorlib::System::String* name);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* get_UserAssignableActions();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* ActionsInCategory(mscorlib::System::String* mapCategoryName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* ActionsInCategory(mscorlib::System::String* mapCategoryName, bool sort);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* ActionsInCategory(int32_t mapCategoryId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* ActionsInCategory(int32_t mapCategoryId, bool sort);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* ActionsInCategoriesWithTag(mscorlib::System::String* tag);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* UserAssignableActionsInCategory(int32_t mapCategoryId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* UserAssignableActionsInCategory(int32_t mapCategoryId, bool sort);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* UserAssignableActionsInCategory(mscorlib::System::String* mapCategoryName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* UserAssignableActionsInCategory(mscorlib::System::String* mapCategoryName, bool sort);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* GetInputBehaviors(int32_t playerId);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* GetSystemPlayerInputBehaviors();
		Rewired_Core::Rewired::InputBehavior* GetInputBehavior(int32_t playerId, int32_t behaviorId);
		Rewired_Core::Rewired::InputBehavior* GetInputBehavior(int32_t playerId, mscorlib::System::String* behaviorName);
		Rewired_Core::Rewired::InputBehavior* GetSystemPlayerInputBehavior(int32_t behaviorId);
		Rewired_Core::Rewired::InputBehavior* GetSystemPlayerInputBehavior(mscorlib::System::String* behaviorName);
		int32_t GetInputBehaviorId(mscorlib::System::String* behaviorName);
		Rewired_Core::Rewired::InputBehavior* skqOJGkcOGMmiwzhkjzKjcDIOEu(int32_t A_1);
		Rewired_Core::Rewired::InputBehavior* skqOJGkcOGMmiwzhkjzKjcDIOEu(mscorlib::System::String* A_1);
		Rewired_Core::Rewired::ControllerMap* GetControllerMap(int32_t id);
		Rewired_Core::Rewired::ActionElementMap* GetActionElementMap(int32_t id);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstance(Rewired_Core::Rewired::Controller* controller, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstance(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(Rewired_Core::Rewired::Joystick* joystick, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(Rewired_Core::Rewired::Joystick* joystick, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(mscorlib::System::Guid joystickTypeGuid, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(mscorlib::System::Guid joystickTypeGuid, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::KeyboardMap* GetKeyboardMapInstance(int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::KeyboardMap* GetKeyboardMapInstance(mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::MouseMap* GetMouseMapInstance(int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::MouseMap* GetMouseMapInstance(mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstance(Rewired_Core::Rewired::CustomController* customController, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstance(Rewired_Core::Rewired::CustomController* customController, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Controller* controller, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Joystick* joystick, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Joystick* joystick, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::CustomController* customController, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::CustomController* customController, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::KeyboardMap* GetKeyboardMapInstanceSavedOrDefault(int32_t playerId, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::KeyboardMap* GetKeyboardMapInstanceSavedOrDefault(int32_t playerId, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::MouseMap* GetMouseMapInstanceSavedOrDefault(int32_t playerId, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::MouseMap* GetMouseMapInstanceSavedOrDefault(int32_t playerId, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetFirstJoystickTemplateElementIdentifier(Rewired_Core::Rewired::Joystick* joystick, int32_t joystickElementIdentifierId);
		Rewired_Core::Rewired::ControllerElementIdentifier* UoGAUvRQFvakkjSBnCcWcYgbmVC(mscorlib::System::Guid A_1, int32_t A_2);
		Rewired_Core::Rewired::ControllerTemplateMap* GetControllerTemplateMapInstance(mscorlib::System::Guid templateTypeGuid, int32_t mapCategoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerTemplateMap* GetControllerTemplateMapInstance(mscorlib::System::Guid templateTypeGuid, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet* GetControllerMapLayoutManagerRuleSetInstance(int32_t id);
		Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet* GetControllerMapLayoutManagerRuleSetInstance(mscorlib::System::String* name);
		Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* GetControllerMapEnablerRuleSetInstance(int32_t id);
		Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* GetControllerMapEnablerRuleSetInstance(mscorlib::System::String* name);
	};
}


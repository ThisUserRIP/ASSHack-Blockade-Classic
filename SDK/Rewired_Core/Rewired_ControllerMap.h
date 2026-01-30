#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct AList_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct Player; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };
#include "Rewired_Pole.h"
#include "Rewired_ModifierKey.h"
#include "Rewired_ControllerElementType.h"
#include "Rewired_AxisRange.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace Rewired_Core::Rewired { struct ControllerTemplateMap; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct ControllerMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		int32_t _sourceMapId;
		int32_t _categoryId;
		int32_t _layoutId;
		mscorlib::System::String* _name;
		mscorlib::System::Guid _hardwareGuid;
		bool _enabled;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>* DtDayTiaIlAMIlhysuPZjMgOOXP;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::ActionElementMap>* VWsJnIbgXxPnjdsAuFnebkgtAqq;
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>* ijXUHGmIzRRpLWBkcAdcxXXnkvT;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::ActionElementMap>* eJTameBhYCMHqKBLNNzxZbZBHpt;
		int32_t _playerId;
		int32_t _controllerId;
		Rewired_Core::Rewired::ControllerType _controllerType;
		struct StaticFields
		{
			int32_t FUsFdmscBSrBSOObjhqlhhlZTfP;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_nextUid();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerMap* source);
		int32_t get_id();
		int32_t get_sourceMapId();
		void set_sourceMapId(int32_t value);
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		int32_t get_layoutId();
		void set_layoutId(int32_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::Guid get_hardwareGuid();
		void set_hardwareGuid(mscorlib::System::Guid value);
		bool get_enabled();
		void set_enabled(bool value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		Rewired_Core::Rewired::Player* get_player();
		int32_t get_elementMapCount();
		int32_t get_buttonMapCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* get_AllMaps();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* get_ButtonMaps();
		bool ContainsAction(mscorlib::System::String* actionName);
		bool ContainsAction(int32_t actionId);
		bool ContainsElementIdentifier(int32_t elementIdentifierId);
		bool ContainsKeyboardKey(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeys);
		bool ContainsElementMap(Rewired_Core::Rewired::ActionElementMap* elementMap);
		bool ContainsElementMap(int32_t elementMapId);
		bool ReplaceOrCreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment);
		bool ReplaceOrCreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result);
		bool CreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment);
		bool CreateElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3, Rewired_Core::Rewired::ActionElementMap& result);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, Rewired_Core::Rewired::ActionElementMap& result);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result);
		bool ReplaceElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment);
		bool ReplaceElementMap(Rewired_Core::Rewired::ElementAssignment elementAssignment, Rewired_Core::Rewired::ActionElementMap& result);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3, Rewired_Core::Rewired::ActionElementMap& result);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags, Rewired_Core::Rewired::ActionElementMap& result);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result);
		bool DeleteElementMap(int32_t elementMapId);
		bool DeleteElementMapsWithAction(mscorlib::System::String* actionName);
		bool DeleteElementMapsWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetElementMap(int32_t elementMapId);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMaps();
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMaps(bool skipDisabledMaps);
		int32_t GetElementMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMaps(bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMapsWithAction(mscorlib::System::String* actionName);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMapsWithAction(int32_t actionId);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		int32_t GetElementMapsWithAction(mscorlib::System::String* actionName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(int32_t actionId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(mscorlib::System::String* actionName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(int32_t actionId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(mscorlib::System::String* actionName);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		int32_t GetElementMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		void ForEachElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		void ClearElementMaps();
		int32_t SetAllElementMapsEnabled(bool state);
		Rewired_Core::Rewired::ActionElementMap* GetButtonMap(int32_t index);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMaps();
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMaps(bool skipDisabledMaps);
		int32_t GetButtonMaps(bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMapsWithAction(mscorlib::System::String* actionName);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMapsWithAction(int32_t actionId);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		int32_t GetButtonMapsWithAction(mscorlib::System::String* actionName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(int32_t actionId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(int32_t actionId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(mscorlib::System::String* actionName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(mscorlib::System::String* actionName);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate);
		Rewired_Core::Rewired::ActionElementMap* ZOXvlIFqAMoYToCITlWhZQKaYQe(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		int32_t GetButtonMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t xKpyLUmKKKcpzXeOxXOhSpBgHReF(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		void ForEachButtonMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		bool DeleteButtonMapsWithAction(mscorlib::System::String* actionName);
		bool DeleteButtonMapsWithAction(int32_t actionId);
		int32_t SetAllButtonMapsEnabled(bool state);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps);
		int32_t ForEachElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform, bool skipDisabledMaps);
		IL2CPP::Array<mscorlib::System::String*>* GetButtonNames();
		mscorlib::System::String* ToXmlString();
		mscorlib::System::String* ToJsonString();
		Rewired_Core::Rewired::ControllerTemplateMap* ToControllerTemplateMap(mscorlib::System::Guid templateTypeGuid);
		template <typename T> Rewired_Core::Rewired::ControllerTemplateMap* ToControllerTemplateMap()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToControllerTemplateMap");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
		}
		Rewired_Core::Rewired::ControllerTemplateMap* ToControllerTemplateMap(mscorlib::System::Type* templateInterfaceType);
		Rewired_Core::Rewired::ControllerTemplateMap* ftdUCNKatERmjtfAkgKJGGeuzDYU(Rewired_Core::Rewired::IControllerTemplate* A_1);
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>* get_ButtonMaps_orig();
		bool AddActionMapping_BeforeBake(Rewired_Core::Rewired::ActionElementMap* A_1);
		int32_t GetElementMaps_Append(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t GetElementMapsWithElementIdentifier(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		bool ContainsElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t FirstIndexOfElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t zEDIoOJjpjAYhRKEzLRHtGwySsvh(int32_t A_1);
		int32_t DrBsTsOJclgSFySctThQiTVDkWL(bool A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		int32_t PhvjWzVlndcjGaWuuNXNcJAUJVw(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t GetElementMapsWithAction(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, bool& A_5);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6, bool& A_7);
		void ZtQyhWNtTHFYlRDXdUTiYedsaNO(int32_t A_1, Rewired_Core::Rewired::ControllerElementType A_2);
		bool AddElementMap(Rewired_Core::Rewired::ActionElementMap* A_1);
		bool ejPjdVyPapWAUvbtDlfOopokIZQC(Rewired_Core::Rewired::IControllerElementTarget* A_1);
		bool BSOWLQQEyYNHySrxkuCNIYEDucE(mscorlib::System::String* A_1);
		bool FGCkqDCRcRMIJWirpaboXHDvxrk(mscorlib::System::String* A_1);
		void sgqqpFhkEHvozrWoIxbSzoSDcUN(Rewired_Core::Rewired::ActionElementMap* A_1);
		void ulPpNOzVyZYaroZkYldIbMRQVX(int32_t A_1);
		void vGYiMxSJObbapINvGNAnCwSXAiaC(int32_t A_1, Rewired_Core::Rewired::ActionElementMap* A_2);
		static void CYBHxzvsKSLfHavYOqqtJpdrAHR(Rewired_Core::Rewired::ActionElementMap* A_0, int32_t A_1, Rewired_Core::Rewired::Pole A_2, int32_t A_3, Rewired_Core::Rewired::ControllerElementType A_4, Rewired_Core::Rewired::AxisRange A_5, bool A_6);
		void BakeElementMap(Rewired_Core::Rewired::ActionElementMap* map);
		bool Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		void ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		bool wxQwTHgtXdcMqmRsHxQvFWscVgg(Rewired_Core::Rewired::ControllerElementType A_1);
		void tCSaCrobXEgNOwRwIVTXIEtxQvE(int32_t A_1, int32_t A_2);
		void OFewcOiFROEFXXKLDjnECBGnbrmH(Rewired_Core::Rewired::ActionElementMap* A_1);
		void ITIUcsYDyngdQeerzNrolmRhWnWQ(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2);
		int32_t iCUMRFonMWanwfJuqclXbgAhgRep(int32_t A_1);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* BTjEytEDmfXDlKCGhgjizVfcbDhc();
		static Rewired_Core::Rewired::ControllerMap* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::ControllerType A_0);
		static Rewired_Core::Rewired::ControllerMap* DkVxZLCeRoJEyDBbixORShIbRqJ(Rewired_Core::Rewired::Controller* A_0, int32_t A_1, int32_t A_2);
		static Rewired_Core::Rewired::ControllerMap* CreateFromXml(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* xmlString);
		static void _cctor();
	};
}


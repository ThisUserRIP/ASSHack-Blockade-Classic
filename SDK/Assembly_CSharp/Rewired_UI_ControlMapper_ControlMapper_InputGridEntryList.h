#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_MapCategoryEntry; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { template <typename TKey, typename TValue> struct ControlMapper_IndexedDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_ActionEntry; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUILabel; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_ActionCategoryEntry; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIInputField; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputActionSet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_MapCategoryEntry>* entries;
		void _ctor();
		void AddMapCategory(int32_t mapCategoryId);
		void AddAction(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* AddActionEntry(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		void AddActionLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		void AddActionCategory(int32_t mapCategoryId, int32_t actionCategoryId);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry* AddActionCategoryEntry(int32_t mapCategoryId, int32_t actionCategoryId);
		void AddActionCategoryLabel(int32_t mapCategoryId, int32_t actionCategoryId, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		void AddInputFieldSet(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, UnityEngine_CoreModule::UnityEngine::GameObject* fieldSetContainer);
		void AddInputField(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* inputField);
		bool Contains(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		bool Contains(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex);
		void SetColumnHeight(int32_t mapCategoryId, float height);
		float GetColumnHeight(int32_t mapCategoryId);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* GetGUIInputField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* GetActionEntry(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* GetActionEntry(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet>* GetActionSets(int32_t mapCategoryId);
		void SetFieldsActive(int32_t mapCategoryId, bool state);
		void SetLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t index, mscorlib::System::String* label);
		void PopulateField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, mscorlib::System::String* label, bool invert);
		void SetFixedFieldData(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void InitializeFields(int32_t mapCategoryId);
		void Show(int32_t mapCategoryId);
		void HideAll();
		void ClearLabels(int32_t mapCategoryId);
		void Clear();
	};
}


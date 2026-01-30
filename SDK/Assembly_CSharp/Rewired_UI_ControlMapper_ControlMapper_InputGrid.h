#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIInputField; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUILabel; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputActionSet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGrid : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList* list;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* groups;
		void _ctor();
		void AddMapCategory(int32_t mapCategoryId);
		void AddAction(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		void AddActionCategory(int32_t mapCategoryId, int32_t actionCategoryId);
		void AddInputFieldSet(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, UnityEngine_CoreModule::UnityEngine::GameObject* fieldSetContainer);
		void AddInputField(int32_t mapCategoryId, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* inputField);
		void AddGroup(UnityEngine_CoreModule::UnityEngine::GameObject* group);
		void AddActionLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		void AddActionCategoryLabel(int32_t mapCategoryId, int32_t actionCategoryId, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		bool Contains(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* GetGUIInputField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex);
		mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet>* GetActionSets(int32_t mapCategoryId);
		void SetColumnHeight(int32_t mapCategoryId, float height);
		float GetColumnHeight(int32_t mapCategoryId);
		void SetFieldsActive(int32_t mapCategoryId, bool state);
		void SetFieldLabel(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t index, mscorlib::System::String* label);
		void PopulateField(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, mscorlib::System::String* label, bool invert);
		void SetFixedFieldData(int32_t mapCategoryId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void InitializeFields(int32_t mapCategoryId);
		void Show(int32_t mapCategoryId);
		void HideAll();
		void ClearLabels(int32_t mapCategoryId);
		void ClearGroups();
		void ClearAll();
	};
}


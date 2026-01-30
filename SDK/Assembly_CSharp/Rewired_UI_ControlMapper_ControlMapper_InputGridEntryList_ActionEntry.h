#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_FieldSet; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { template <typename TKey, typename TValue> struct ControlMapper_IndexedDictionary_2; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUILabel; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputActionSet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIInputField; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList_ActionEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_FieldSet>* fieldSets;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label;
		Rewired_Core::Rewired::InputAction* action;
		Rewired_Core::Rewired::AxisRange axisRange;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet* actionSet;
		void _ctor(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		void SetLabel(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		bool Matches(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		void AddInputFieldSet(Rewired_Core::Rewired::ControllerType controllerType, UnityEngine_CoreModule::UnityEngine::GameObject* fieldSetContainer);
		void AddInputField(Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* inputField);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* GetGUIInputField(Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldIndex);
		bool Contains(Rewired_Core::Rewired::ControllerType controllerType, int32_t fieldId);
		void SetFieldLabel(Rewired_Core::Rewired::ControllerType controllerType, int32_t index, mscorlib::System::String* label);
		void PopulateField(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, mscorlib::System::String* label, bool invert);
		void SetFixedFieldData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void Initialize();
		void SetActive(bool state);
		void ClearLabels();
		void SetFieldsActive(bool state);
	};
}


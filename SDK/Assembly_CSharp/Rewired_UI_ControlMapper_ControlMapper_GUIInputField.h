#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_ControlMapper_GUIElement.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIToggle; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputFieldInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIInputField : Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIToggle* _toggle_k__BackingField;
		UnityEngine_UI::UnityEngine::UI::Button* get_button();
		Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* get_fieldInfo();
		bool get_hasToggle();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIToggle* get_toggle();
		void set_toggle(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIToggle* value);
		int32_t get_actionElementMapId();
		void set_actionElementMapId(int32_t value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor(UnityEngine_UI::UnityEngine::UI::Button* button, Unity_TextMeshPro::TMPro::TMP_Text* label);
		void SetFieldInfoData(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t intData);
		void SetOnClickCallback(mscorlib::System::Action_1<Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo>* callback);
		void SetInteractable(bool state, bool playTransition, bool permanent);
		void AddToggle(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIToggle* toggle);
	};
}


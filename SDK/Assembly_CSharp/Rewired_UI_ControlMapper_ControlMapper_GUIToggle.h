#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_ControlMapper_GUIElement.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ToggleInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\Rewired_Core\Rewired_ControllerType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIToggle : Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Toggle* get_toggle();
		Assembly_CSharp::Rewired::UI::ControlMapper::ToggleInfo* get_toggleInfo();
		int32_t get_actionElementMapId();
		void set_actionElementMapId(int32_t value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor(UnityEngine_UI::UnityEngine::UI::Toggle* toggle, Unity_TextMeshPro::TMPro::TMP_Text* label);
		void SetToggleInfoData(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ControllerType controllerType, int32_t intData);
		void SetOnSubmitCallback(mscorlib::System::Action_2<Assembly_CSharp::Rewired::UI::ControlMapper::ToggleInfo, mscorlib::System::Boolean>* callback);
		void SetToggleState(bool state);
	};
}


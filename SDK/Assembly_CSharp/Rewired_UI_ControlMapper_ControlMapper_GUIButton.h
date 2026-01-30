#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_ControlMapper_GUIElement.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ButtonInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIButton : Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Button* get_button();
		Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo* get_buttonInfo();
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor(UnityEngine_UI::UnityEngine::UI::Button* button, Unity_TextMeshPro::TMPro::TMP_Text* label);
		void SetButtonInfoData(mscorlib::System::String* identifier, int32_t intData);
		void SetOnClickCallback(mscorlib::System::Action_1<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo>* callback);
	};
}


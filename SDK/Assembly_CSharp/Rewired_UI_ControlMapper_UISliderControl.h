#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_UIControl.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UISliderControl : Assembly_CSharp::Rewired::UI::ControlMapper::UIControl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* iconImage;
		UnityEngine_UI::UnityEngine::UI::Slider* slider;
		bool _showIcon;
		bool _showSlider;
		bool get_showIcon();
		void set_showIcon(bool value);
		bool get_showSlider();
		void set_showSlider(bool value);
		void SetCancelCallback(mscorlib::System::Action* cancelCallback);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct ControllerUIEffect; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct ControllerUIElement; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\Rewired_Core\Rewired_AxisRange.h"

namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI
{
	struct ControllerUIElement : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color _highlightColor;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIEffect* _positiveUIEffect;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIEffect* _negativeUIEffect;
		UnityEngine_UI::UnityEngine::UI::Text* _label;
		UnityEngine_UI::UnityEngine::UI::Text* _positiveLabel;
		UnityEngine_UI::UnityEngine::UI::Text* _negativeLabel;
		IL2CPP::Array<Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement*>* _childElements;
		UnityEngine_UI::UnityEngine::UI::Image* _image;
		UnityEngine_CoreModule::UnityEngine::Color _color;
		UnityEngine_CoreModule::UnityEngine::Color _origColor;
		bool _isActive;
		float _highlightAmount;
		bool get_hasEffects();
		void Awake();
		void Activate(float amount);
		void Deactivate();
		void SetLabel(mscorlib::System::String* text, Rewired_Core::Rewired::AxisRange labelType);
		void ClearLabels();
		void RedrawImage();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI
{
	struct ControllerUIEffect : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color _highlightColor;
		UnityEngine_UI::UnityEngine::UI::Image* _image;
		UnityEngine_CoreModule::UnityEngine::Color _color;
		UnityEngine_CoreModule::UnityEngine::Color _origColor;
		bool _isActive;
		float _highlightAmount;
		void Awake();
		void Activate(float amount);
		void Deactivate();
		void RedrawImage();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_CustomControllerControl.h"
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls { struct IComponentController; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchControl : Rewired_Core::Rewired::ComponentControls::CustomControllerControl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UIModule::UnityEngine::Canvas* _canvas;
		UnityEngine_CoreModule::UnityEngine::RectTransform* __rectTransform;
		Rewired_Core::Rewired::ComponentControls::TouchController* get_touchController();
		UnityEngine_UIModule::UnityEngine::Canvas* get_canvas();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_canvasTransform();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		void OnValidate();
		void OnCanvasGroupChanged();
		void OnTransformParentChanged();
		bool get_hasController();
		bool OnInitialize();
		void OnSetProperty();
		Rewired_Core::Rewired::ComponentControls::IComponentController* FindController();
		mscorlib::System::Type* GetRequiredControllerType();
		bool rzAFxecxYNoxNMMloXHyDHyQkGiZ(bool A_1, bool A_2);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_UIBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct UIPointer : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _hideHardwarePointer;
		bool _autoSort;
		UnityEngine_UIModule::UnityEngine::Canvas* _canvas;
		bool get_autoSort();
		void set_autoSort(bool value);
		void Awake();
		void Update();
		void OnTransformParentChanged();
		void OnCanvasGroupChanged();
		void OnScreenPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 screenPosition);
		void GetDependencies();
		void _ctor();
	};
}


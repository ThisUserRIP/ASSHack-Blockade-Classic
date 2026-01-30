#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Examples
{
	struct UIButtonAutomatedTextValue : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* PresetCategory;
		UnityEngine_UI::UnityEngine::UI::Text* PresetName;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType BehaviorType;
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct DemoScriptManualAutomatic : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* LightningPrefab;
		UnityEngine_UI::UnityEngine::UI::Toggle* AutomaticToggle;
		UnityEngine_CoreModule::UnityEngine::Transform* a;
		UnityEngine_CoreModule::UnityEngine::Transform* b;
		void Update();
		void AutomaticToggled();
		void ManualTriggerClicked();
		void _ctor();
	};
}


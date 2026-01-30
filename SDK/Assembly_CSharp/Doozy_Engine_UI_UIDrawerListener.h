#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerEvent; };
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerMessage; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerListener : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		mscorlib::System::String* DrawerName;
		bool CustomDrawerName;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerEvent* Event;
		bool ListenForAllUIDrawers;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType TriggerAction;
		void Reset();
		void OnEnable();
		void OnDisable();
		void RegisterListener();
		void UnregisterListener();
		void OnMessage(Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage* message);
		void InvokeEvent(Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage* message);
		static Assembly_CSharp::Doozy::Engine::UI::UIDrawerListener* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::UI::UIDrawerListener* AddToScene(UnityEngine_CoreModule::UnityEngine::GameObject* parent, bool selectGameObjectAfterCreation);
		void _ctor();
	};
}


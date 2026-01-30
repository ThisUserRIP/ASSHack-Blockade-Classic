#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonEvent; };
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonMessage; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIButtonListener : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ButtonCategory;
		mscorlib::System::String* ButtonName;
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonEvent* Event;
		bool ListenForAllUIButtons;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType TriggerAction;
		bool m_listeningForBackButton;
		void Reset();
		void OnEnable();
		void OnDisable();
		void RegisterListener();
		void UnregisterListener();
		void OnMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message);
		void InvokeEvent(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message);
		static Assembly_CSharp::Doozy::Engine::UI::UIButtonListener* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::UI::UIButtonListener* AddToScene(UnityEngine_CoreModule::UnityEngine::GameObject* parent, bool selectGameObjectAfterCreation);
		void _ctor();
	};
}


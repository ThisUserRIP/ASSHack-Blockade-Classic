#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIViewEvent; };
#include "Doozy_Engine_UI_UIViewBehaviorType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIViewMessage; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIViewListener : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::UI::UIViewEvent* Event;
		bool ListenForAllUIViews;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType TriggerAction;
		mscorlib::System::String* ViewCategory;
		mscorlib::System::String* ViewName;
		void Reset();
		void OnEnable();
		void OnDisable();
		void RegisterListener();
		void UnregisterListener();
		void OnMessage(Assembly_CSharp::Doozy::Engine::UI::UIViewMessage* message);
		void InvokeEvent(Assembly_CSharp::Doozy::Engine::UI::UIViewMessage* message);
		static Assembly_CSharp::Doozy::Engine::UI::UIViewListener* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::UI::UIViewListener* AddToScene(UnityEngine_CoreModule::UnityEngine::GameObject* parent, bool selectGameObjectAfterCreation);
		void _ctor();
	};
}


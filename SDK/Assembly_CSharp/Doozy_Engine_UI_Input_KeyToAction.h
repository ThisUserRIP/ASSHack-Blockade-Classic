#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Input { struct InputData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Input
{
	struct KeyToAction : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Actions;
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::UI::Input::InputData* InputData;
		bool get_DebugComponent();
		void Awake();
		void Update();
		void Execute();
		static Assembly_CSharp::Doozy::Engine::UI::Input::KeyToAction* AddToScene(bool selectGameObjectAfterCreation);
		void _ctor();
	};
}


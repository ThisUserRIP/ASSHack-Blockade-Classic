#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_InputManager_Base.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils::Interfaces { struct IExternalTools; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"

namespace Assembly_CSharp::Rewired
{
	struct InputManager : Rewired_Core::Rewired::InputManager_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ignoreRecompile;
		void OnInitialized();
		void OnDeinitialized();
		void DetectPlatform();
		void CheckRecompile();
		Rewired_Core::Rewired::Utils::Interfaces::IExternalTools* GetExternalTools();
		bool CheckDeviceName(mscorlib::System::String* searchPattern, mscorlib::System::String* deviceName, mscorlib::System::String* deviceModel);
		void SubscribeEvents();
		void UnsubscribeEvents();
		void OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_SceneManagement_LoadSceneMode.h"
#include "UnityEngine_SceneManagement_LocalPhysicsMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	struct LoadSceneParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode;
		UnityEngine_CoreModule::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode;
		void _ctor(UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
	};
}


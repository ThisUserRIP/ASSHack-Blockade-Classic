#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::Playables
{
	struct MaterialEffectPlayable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle m_Handle;
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle GetHandle();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Experimental::Playables::MaterialEffectPlayable other);
	};
}


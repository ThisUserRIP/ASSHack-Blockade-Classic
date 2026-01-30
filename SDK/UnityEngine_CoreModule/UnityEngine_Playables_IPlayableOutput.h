#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Playables_PlayableOutputHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutputHandle; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct IPlayableOutput
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle GetHandle();
	};
}


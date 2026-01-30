#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Playables_PlayableOutputHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutputHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableOutput
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle m_Handle;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle handle);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle GetHandle();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutput other);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct Playable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle m_Handle;
		static UnityEngine_CoreModule::UnityEngine::Playables::Playable get_Null();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle handle);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle GetHandle();
		bool Equals(UnityEngine_CoreModule::UnityEngine::Playables::Playable other);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_DirectorModule::UnityEngine::Playables
{
	struct PlayableDirector : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector>* played;
		mscorlib::System::Action_1<UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector>* paused;
		mscorlib::System::Action_1<UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector>* stopped;
		void SendOnPlayableDirectorPlay();
		void SendOnPlayableDirectorPause();
		void SendOnPlayableDirectorStop();
	};
}


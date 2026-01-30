#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Playables_Playable.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct Playable; };
#include "UnityEngine_Playables_FrameData.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct FrameData; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableBehaviour : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void OnGraphStart(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable);
		void OnGraphStop(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable);
		void OnPlayableCreate(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable);
		void OnPlayableDestroy(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable);
		void OnBehaviourPlay(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info);
		void OnBehaviourPause(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info);
		void PrepareFrame(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info);
		void ProcessFrame(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info, mscorlib::System::Object* playerData);
		mscorlib::System::Object* Clone();
	};
}


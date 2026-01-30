#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutputHandle; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutputHandle; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimationPlayableGraphExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool InternalCreateAnimationOutput(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& graph, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& handle);
	};
}


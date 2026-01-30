#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ScriptableObject.h"
#include "UnityEngine_Playables_Playable.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct Playable; };
#include "UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "UnityEngine_Playables_PlayableBinding.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableBinding; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableAsset : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::Playable CreatePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_CoreModule::UnityEngine::GameObject* owner);
		double get_duration();
		mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_CoreModule::UnityEngine::Playables::PlayableBinding>* get_outputs();
		static void Internal_CreatePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset* asset, UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_CoreModule::UnityEngine::GameObject* go, intptr_t ptr);
		static void Internal_GetPlayableAssetDuration(UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset* asset, intptr_t ptrToDouble);
		void _ctor();
	};
}


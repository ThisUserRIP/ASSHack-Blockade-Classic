#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct StaticBatchingUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker s_CombineMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker s_SortMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker s_MakeBatchMarker;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Combine(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* gos, UnityEngine_CoreModule::UnityEngine::GameObject* staticBatchRoot);
		static void _cctor();
	};
}


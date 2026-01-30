#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AIModule::UnityEngine::AI { struct NavMesh_OnNavMeshPreUpdate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_AIModule::UnityEngine::AI { struct NavMeshPath; };
namespace UnityEngine_AIModule::UnityEngine::AI { struct NavMeshHit; };
namespace UnityEngine_AIModule::UnityEngine::AI { struct NavMeshHit; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_AIModule::UnityEngine::AI
{
	struct NavMesh : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_AIModule::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* onPreUpdate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Internal_CallOnNavMeshPreUpdate();
		static bool CalculatePath(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path);
		static bool CalculatePathInternal(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path);
		static bool SamplePosition(UnityEngine_CoreModule::UnityEngine::Vector3 sourcePosition, UnityEngine_AIModule::UnityEngine::AI::NavMeshHit& hit, float maxDistance, int32_t areaMask);
		static bool CalculatePathInternal_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& sourcePosition, UnityEngine_CoreModule::UnityEngine::Vector3& targetPosition, int32_t areaMask, UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path);
		static bool SamplePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& sourcePosition, UnityEngine_AIModule::UnityEngine::AI::NavMeshHit& hit, float maxDistance, int32_t areaMask);
	};
}


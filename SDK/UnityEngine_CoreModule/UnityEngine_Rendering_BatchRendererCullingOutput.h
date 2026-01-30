#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Unity_Jobs_JobHandle.h"
namespace UnityEngine_CoreModule::Unity::Jobs { struct JobHandle; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchVisibility; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchVisibility; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int32.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct BatchRendererCullingOutput
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Jobs::JobHandle cullingJobsFence;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 cullingMatrix;
		UnityEngine_CoreModule::UnityEngine::Plane* cullingPlanes;
		UnityEngine_CoreModule::UnityEngine::Rendering::BatchVisibility* batchVisibility;
		int32_t* visibleIndices;
		int32_t* visibleIndicesY;
		int32_t cullingPlanesCount;
		int32_t batchVisibilityCount;
		int32_t visibleIndicesCount;
		float nearPlane;
	};
}


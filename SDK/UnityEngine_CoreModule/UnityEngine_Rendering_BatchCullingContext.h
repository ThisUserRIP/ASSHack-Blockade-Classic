#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Plane.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "UnityEngine_Rendering_BatchVisibility.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BatchVisibility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_LODParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct LODParameters; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct BatchCullingContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Plane> cullingPlanes;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::BatchVisibility> batchVisibility;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> visibleIndices;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> visibleIndicesY;
		UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters lodParameters;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 cullingMatrix;
		float nearPlane;
		void _ctor(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Plane> inCullingPlanes, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> outVisibleIndices, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> outVisibleIndicesY, UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters inLodParameters, UnityEngine_CoreModule::UnityEngine::Matrix4x4 inCullingMatrix, float inNearPlane);
	};
}


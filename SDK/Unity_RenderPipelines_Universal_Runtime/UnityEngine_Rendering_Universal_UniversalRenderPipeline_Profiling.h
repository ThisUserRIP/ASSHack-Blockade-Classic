#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_UniversalRenderPipeline.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalRenderPipeline; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipeline_Profiling : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler>* s_HashSamplerCache;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* unknownSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* TryGetOrAddCameraSampler(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void _cctor();
	};
}


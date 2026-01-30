#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_UniversalRenderPipeline.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalRenderPipeline; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_GlobalIllumination_LightDataGI.h"
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct LightDataGI; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipeline___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* __9;
			mscorlib::System::Comparison_1<UnityEngine_CoreModule::UnityEngine::Camera>* __9__16_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t __ctor_b__16_0(UnityEngine_CoreModule::UnityEngine::Camera* camera1, UnityEngine_CoreModule::UnityEngine::Camera* camera2);
		void __cctor_b__53_0(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* requests, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
	};
}


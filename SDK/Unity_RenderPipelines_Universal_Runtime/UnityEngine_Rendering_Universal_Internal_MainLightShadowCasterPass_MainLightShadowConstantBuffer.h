#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct MainLightShadowCasterPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct MainLightShadowCasterPass_MainLightShadowConstantBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _WorldToShadow;
			int32_t _ShadowParams;
			int32_t _CascadeShadowSplitSpheres0;
			int32_t _CascadeShadowSplitSpheres1;
			int32_t _CascadeShadowSplitSpheres2;
			int32_t _CascadeShadowSplitSpheres3;
			int32_t _CascadeShadowSplitSphereRadii;
			int32_t _ShadowOffset0;
			int32_t _ShadowOffset1;
			int32_t _ShadowOffset2;
			int32_t _ShadowOffset3;
			int32_t _ShadowmapSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}


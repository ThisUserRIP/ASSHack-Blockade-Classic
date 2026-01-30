#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct AdditionalLightsShadowCasterPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _AdditionalLightsWorldToShadow;
			int32_t _AdditionalShadowParams;
			int32_t _AdditionalShadowOffset0;
			int32_t _AdditionalShadowOffset1;
			int32_t _AdditionalShadowOffset2;
			int32_t _AdditionalShadowOffset3;
			int32_t _AdditionalShadowmapSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}


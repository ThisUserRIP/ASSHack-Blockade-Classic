#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShadowData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool supportsMainLightShadows;
		bool requiresScreenSpaceShadowResolve;
		int32_t mainLightShadowmapWidth;
		int32_t mainLightShadowmapHeight;
		int32_t mainLightShadowCascadesCount;
		UnityEngine_CoreModule::UnityEngine::Vector3 mainLightShadowCascadesSplit;
		bool supportsAdditionalLightShadows;
		int32_t additionalLightsShadowmapWidth;
		int32_t additionalLightsShadowmapHeight;
		bool supportsSoftShadows;
		int32_t shadowmapDepthBufferBits;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* bias;
	};
}


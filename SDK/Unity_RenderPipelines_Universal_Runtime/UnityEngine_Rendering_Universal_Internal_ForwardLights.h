#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "UnityEngine_Rendering_Universal_MixedLightingSetup.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_VisibleLight.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct ForwardLights : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_AdditionalLightsBufferId;
		int32_t m_AdditionalLightsIndicesId;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup m_MixedLightingSetup;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_AdditionalLightPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_AdditionalLightColors;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_AdditionalLightAttenuations;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_AdditionalLightSpotDirections;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_AdditionalLightOcclusionProbeChannels;
		bool m_UseStructuredBuffer;
		struct StaticFields
		{
			mscorlib::System::String* k_SetupLightConstants;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void InitializeLightConstants(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Vector4& lightPos, UnityEngine_CoreModule::UnityEngine::Vector4& lightColor, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir, UnityEngine_CoreModule::UnityEngine::Vector4& lightOcclusionProbeChannel);
		void SetupShaderLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupMainLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData);
		void SetupAdditionalLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		int32_t SetupPerObjectLightIndices(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData);
		static void _cctor();
	};
}


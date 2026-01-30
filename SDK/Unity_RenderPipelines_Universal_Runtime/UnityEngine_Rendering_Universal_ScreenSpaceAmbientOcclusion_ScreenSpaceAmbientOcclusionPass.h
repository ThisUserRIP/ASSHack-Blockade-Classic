#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusion.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScreenSpaceAmbientOcclusion; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScreenSpaceAmbientOcclusionSettings; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
#include "UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_ShaderPasses.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* profilerTag;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_CurrentSettings;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture1Target;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture2Target;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture3Target;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor m_Descriptor;
		struct StaticFields
		{
			mscorlib::System::String* k_SSAOAmbientOcclusionParamName;
			mscorlib::System::String* k_SSAOTextureName;
			int32_t s_BaseMapID;
			int32_t s_SSAOParamsID;
			int32_t s_SSAOTexture1ID;
			int32_t s_SSAOTexture2ID;
			int32_t s_SSAOTexture3ID;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool Setup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* featureSettings);
		void OnCameraSetup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Render(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier target, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_ShaderPasses pass);
		void RenderAndSetBaseMap(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier baseMap, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier target, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_ShaderPasses pass);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static void _cctor();
	};
}


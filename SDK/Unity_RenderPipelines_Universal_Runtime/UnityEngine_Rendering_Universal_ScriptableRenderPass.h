#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPassInput.h"
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_ClearFlag.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_DrawingSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_SortingCriteria.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScriptableRenderPass : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _profilingSampler_k__BackingField;
		bool _overrideCameraTarget_k__BackingField;
		bool _isBlitRenderPass_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* m_ColorAttachments;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_DepthAttachment;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPassInput m_Input;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag m_ClearFlag;
		UnityEngine_CoreModule::UnityEngine::Color m_ClearColor;
		void FrameCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent get_renderPassEvent();
		void set_renderPassEvent(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* get_colorAttachments();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_colorAttachment();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_depthAttachment();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPassInput get_input();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag get_clearFlag();
		UnityEngine_CoreModule::UnityEngine::Color get_clearColor();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* get_profilingSampler();
		void set_profilingSampler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* value);
		bool get_overrideCameraTarget();
		void set_overrideCameraTarget(bool value);
		bool get_isBlitRenderPass();
		void set_isBlitRenderPass(bool value);
		void _ctor();
		void ConfigureInput(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPassInput passInput);
		void ConfigureTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);
		void ConfigureTarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorAttachments, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);
		void ConfigureTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment);
		void ConfigureTarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorAttachments);
		void ConfigureClear(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		void OnCameraSetup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Configure(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void OnFinishCameraStackRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Blit(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier destination, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t passIndex);
		UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId shaderTagId, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria sortingCriteria);
		UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria sortingCriteria);
		static bool op_LessThan(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);
		static bool op_GreaterThan(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);
	};
	bool operator<(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass& lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass& rhs);
	bool operator>(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass& lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass& rhs);
}


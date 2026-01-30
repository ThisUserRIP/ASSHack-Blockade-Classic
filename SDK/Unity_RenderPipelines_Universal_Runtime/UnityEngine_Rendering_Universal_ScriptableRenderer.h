#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer_RenderingFeatures; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_GraphicsDeviceType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderPass; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRendererFeature; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRendererData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_ClearFlag.h"
#include "UnityEngine_Rendering_Universal_CameraRenderType.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer_RenderBlocks; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer_RenderBlocks; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferLoadAction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferStoreAction.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_GizmoSubset.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScriptableRenderer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _profilingExecute_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* _supportedRenderingFeatures_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>* _unsupportedGraphicsDeviceTypes_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* m_ActiveRenderPassQueue;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* m_RendererFeatures;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_CameraColorTarget;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_CameraDepthTarget;
		bool m_FirstTimeCameraColorTargetIsBound;
		bool m_FirstTimeCameraDepthTargetIsBound;
		bool m_IsPipelineExecuting;
		bool isCameraColorTargetValid;
		struct StaticFields
		{
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* current;
			int32_t k_RenderPassBlockCount;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* m_ActiveColorAttachments;
			UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_ActiveDepthAttachment;
			IL2CPP::Array<IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>*>* m_TrimmedColorAttachmentCopies;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepth();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute();
		void set_profilingExecute(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* value);
		static void SetCameraMatrices(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, bool setInverseMatrices);
		void SetPerCameraShaderVariables(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void SetShaderTimeValues(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float time, float deltaTime, float smoothDeltaTime);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTarget();
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* get_rendererFeatures();
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* get_activeRenderPassQueue();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* get_supportedRenderingFeatures();
		void set_supportedRenderingFeatures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>* get_unsupportedGraphicsDeviceTypes();
		void set_unsupportedGraphicsDeviceTypes(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>* value);
		static void ConfigureActiveTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData* data);
		void Dispose();
		void Dispose(bool disposing);
		void ConfigureCameraTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget);
		void ConfigureCameraColorTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorTarget);
		void Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupCullingParameters(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void FinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void EnqueuePass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void AddRenderPasses(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void ClearRenderingState(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void Clear(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType cameraType);
		void ExecuteBlock(int32_t blockIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks& renderBlocks, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, bool submit);
		void ExecuteRenderPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetRenderPassAttachments(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void BeginXRRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void EndXRRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlags, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlags, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorAttachments, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		void DrawGizmos(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::GizmoSubset gizmoSubset);
		void DrawWireOverlay(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void InternalStartRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void InternalFinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, bool resolveFinalTarget);
		static void SortStable(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* list);
		static void _cctor();
	};
}


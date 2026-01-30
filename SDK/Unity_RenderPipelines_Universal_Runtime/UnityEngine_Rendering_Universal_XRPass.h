#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_XRView.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRView; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableCullingParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass_CustomMirrorView; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Rendering_Universal_XRPassCreateInfo.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPassCreateInfo; };
#include "..\UnityEngine_XRModule\UnityEngine_XR_XRDisplaySubsystem_XRRenderPass.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderPass; };
#include "..\UnityEngine_XRModule\UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRRenderParameter; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "UnityEngine_Rendering_Universal_CameraData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRPass : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView>* views;
		bool _xrSdkEnabled_k__BackingField;
		bool _copyDepth_k__BackingField;
		int32_t _multipassId_k__BackingField;
		int32_t _cullingPassId_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _renderTarget_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor _renderTargetDesc_k__BackingField;
		bool _renderTargetIsRenderTexture_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters _cullingParams_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Material* occlusionMeshMaterial;
		UnityEngine_CoreModule::UnityEngine::Mesh* occlusionMeshCombined;
		int32_t occlusionMeshCombinedHashCode;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass_CustomMirrorView* customMirrorView;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* stereoEyeIndices;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* stereoProjectionMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* stereoViewMatrix;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* stereoCameraProjectionMatrix;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier invalidRT;
			mscorlib::System::String* k_XRCustomMirrorTag;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _XRCustomMirrorProfilingSampler;
			mscorlib::System::String* k_XROcclusionTag;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _XROcclusionProfilingSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_enabled();
		bool get_xrSdkEnabled();
		void set_xrSdkEnabled(bool value);
		bool get_copyDepth();
		void set_copyDepth(bool value);
		int32_t get_multipassId();
		void set_multipassId(int32_t value);
		int32_t get_cullingPassId();
		void set_cullingPassId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_renderTarget();
		void set_renderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_renderTargetDesc();
		void set_renderTargetDesc(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor value);
		bool get_renderTargetValid();
		bool get_renderTargetIsRenderTexture();
		void set_renderTargetIsRenderTexture(bool value);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetProjMatrix(int32_t viewIndex);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);
		int32_t GetTextureArraySlice(int32_t viewIndex);
		UnityEngine_CoreModule::UnityEngine::Rect GetViewport(int32_t viewIndex);
		UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters get_cullingParams();
		void set_cullingParams(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters value);
		int32_t get_viewCount();
		bool get_singlePassEnabled();
		bool get_isOcclusionMeshSupported();
		bool get_hasValidOcclusionMesh();
		void SetCustomMirrorView(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass_CustomMirrorView* callback);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* Create(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPassCreateInfo createInfo);
		void UpdateView(int32_t viewId, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrSdkRenderPass, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter xrSdkRenderParameter);
		void UpdateView(int32_t viewId, UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Rect vp, int32_t textureArraySlice);
		void UpdateCullingParams(int32_t cullingPassId, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters cullingParams);
		void AddView(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Rect vp, int32_t textureArraySlice);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* Create(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrRenderPass, int32_t multipassId, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters, UnityEngine_CoreModule::UnityEngine::Material* occlusionMeshMaterial);
		void AddView(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrSdkRenderPass, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter xrSdkRenderParameter);
		static void Release(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* xrPass);
		void AddViewInternal(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView xrView);
		void UpdateOcclusionMesh();
		bool TryGetOcclusionMeshCombinedHashCode(int32_t& hashCode);
		void CreateOcclusionMeshCombined();
		void StartSinglePass(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void StopSinglePass(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void EndCamera(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData);
		void RenderOcclusionMesh(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void UpdateGPUViewAndProjectionMatrices(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, bool isRenderToTexture);
		void _ctor();
		static void _cctor();
	};
}


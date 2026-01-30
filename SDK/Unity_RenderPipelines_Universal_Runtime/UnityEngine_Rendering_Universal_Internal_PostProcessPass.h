#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass_MaterialLibrary; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct DepthOfField; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct MotionBlur; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PaniniProjection; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct Bloom; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LensDistortion; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ChromaticAberration; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct Vignette; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ColorLookup; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ColorAdjustments; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct Tonemapping; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct FilmGrain; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
#include "UnityEngine_Rendering_Universal_CameraData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_BuiltinRenderTextureType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass___c__DisplayClass52_0; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass___c__DisplayClass52_0; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct PostProcessPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor m_Descriptor;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_Source;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_Destination;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_Depth;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_InternalLut;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary* m_Materials;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* m_Data;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MotionBlur* m_MotionBlur;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PaniniProjection* m_PaniniProjection;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Bloom* m_Bloom;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LensDistortion* m_LensDistortion;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ChromaticAberration* m_ChromaticAberration;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Vignette* m_Vignette;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ColorLookup* m_ColorLookup;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ColorAdjustments* m_ColorAdjustments;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Tonemapping* m_Tonemapping;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::FilmGrain* m_FilmGrain;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultHDRFormat;
		bool m_UseRGBM;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat m_GaussianCoCFormat;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* m_PrevViewProjM;
		bool m_ResetHistory;
		int32_t m_DitheringTextureIndex;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* m_MRT2;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* m_BokehKernel;
		int32_t m_BokehHash;
		bool m_IsFinalPass;
		bool m_HasFinalPass;
		bool m_EnableSRGBConversionIfNeeded;
		bool m_UseDrawProcedural;
		UnityEngine_CoreModule::UnityEngine::Material* m_BlitMaterial;
		struct StaticFields
		{
			mscorlib::System::String* k_RenderPostProcessingTag;
			mscorlib::System::String* k_RenderFinalPostProcessingTag;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderPostProcessing;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderFinalPostProcessing;
			int32_t k_MaxPyramidSize;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* viewProjMatrixStereo;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data, UnityEngine_CoreModule::UnityEngine::Material* blitMaterial);
		void Cleanup();
		void Setup(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& baseDescriptor, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& source, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& destination, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& depth, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& internalLut, bool hasFinalPass, bool enableSRGBConversion);
		void SetupFinalPass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& source);
		void OnCameraSetup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void ResetHistory();
		bool CanRunOnTile();
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor();
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t depthBufferBits);
		bool RequireSRGBConversionBlitToBackBuffer(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData);
		void Blit(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier destination, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t passIndex);
		void DrawFullscreenMesh(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t passIndex);
		void Render(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinRenderTextureType BlitDstDiscardContent(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt);
		void DoSubpixelMorphologicalAntialiasing(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination);
		void DoDepthOfField(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination, UnityEngine_CoreModule::UnityEngine::Rect pixelRect);
		void DoGaussianDepthOfField(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination, UnityEngine_CoreModule::UnityEngine::Rect pixelRect);
		void PrepareBokehKernel();
		static float GetMaxBokehRadiusInPixels(float viewportHeight);
		void DoBokehDepthOfField(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination, UnityEngine_CoreModule::UnityEngine::Rect pixelRect);
		void DoMotionBlur(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination);
		void DoPaniniProjection(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, int32_t destination);
		UnityEngine_CoreModule::UnityEngine::Vector2 CalcViewExtents(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		UnityEngine_CoreModule::UnityEngine::Vector2 CalcCropExtents(UnityEngine_CoreModule::UnityEngine::Camera* camera, float d);
		void SetupBloom(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t source, UnityEngine_CoreModule::UnityEngine::Material* uberMaterial);
		void SetupLensDistortion(UnityEngine_CoreModule::UnityEngine::Material* material, bool isSceneView);
		void SetupChromaticAberration(UnityEngine_CoreModule::UnityEngine::Material* material);
		void SetupVignette(UnityEngine_CoreModule::UnityEngine::Material* material);
		void SetupColorGrading(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::UnityEngine::Material* material);
		void SetupGrain(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, UnityEngine_CoreModule::UnityEngine::Material* material);
		void SetupDithering(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, UnityEngine_CoreModule::UnityEngine::Material* material);
		void RenderFinalPass(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		static void _cctor();
		int32_t _Render_g__GetSource_52_0(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass52_0& A_1);
		int32_t _Render_g__GetDestination_52_1(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass52_0& A_1);
		void _Render_g__Swap_52_2(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass___c__DisplayClass52_0& A_1);
	};
}


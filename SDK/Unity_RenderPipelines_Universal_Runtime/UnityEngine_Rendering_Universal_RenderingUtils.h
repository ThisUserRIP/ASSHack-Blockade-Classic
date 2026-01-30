#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingUtils_StereoConstants; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_FormatUsage.h"
namespace mscorlib::System::Collections::Generic::Dictionary_2_UnityEngine::Experimental::Rendering::GraphicsFormat_System::Collections { template <typename TKey, typename TValue> struct Dictionary_2_UnityEngine_Experimental_Rendering_GraphicsFormat_System_Collections_Generic_Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferLoadAction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferStoreAction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_SortingCriteria.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_ClearFlag.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct RenderingUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* m_LegacyShaderPassNames;
			UnityEngine_CoreModule::UnityEngine::Mesh* s_FullscreenMesh;
			UnityEngine_CoreModule::UnityEngine::Material* s_ErrorMaterial;
			int32_t UNITY_STEREO_MATRIX_V;
			int32_t UNITY_STEREO_MATRIX_IV;
			int32_t UNITY_STEREO_MATRIX_P;
			int32_t UNITY_STEREO_MATRIX_IP;
			int32_t UNITY_STEREO_MATRIX_VP;
			int32_t UNITY_STEREO_MATRIX_IVP;
			int32_t UNITY_STEREO_CAMERA_PROJECTION;
			int32_t UNITY_STEREO_CAMERA_INV_PROJECTION;
			int32_t UNITY_STEREO_VECTOR_CAMPOS;
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingUtils_StereoConstants* stereoConstants;
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_CoreModule::UnityEngine::RenderTextureFormat, mscorlib::System::Boolean>* m_RenderTextureFormatSupport;
			mscorlib::System::Collections::Generic::Dictionary_2_UnityEngine::Experimental::Rendering::GraphicsFormat_System::Collections::Dictionary_2_UnityEngine_Experimental_Rendering_GraphicsFormat_System_Collections_Generic_Dictionary_2<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat, mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::FormatUsage, mscorlib::System::Boolean>>* m_GraphicsFormatSupport;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Mesh* get_fullscreenMesh();
		static bool get_useStructuredBuffer();
		static UnityEngine_CoreModule::UnityEngine::Material* get_errorMaterial();
		static void SetViewAndProjectionMatrices(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Matrix4x4 viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4 projectionMatrix, bool setInverseMatrices);
		static void SetStereoViewAndProjectionMatrices(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* viewMatrix, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* projMatrix, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* cameraProjMatrix, bool setInverseMatrices);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier destination, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t passIndex, bool useDrawProcedural, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
		static void RenderObjectsWithError(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings filterSettings, UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria sortFlags);
		static void ClearSystemInfoCache();
		static bool SupportsRenderTextureFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		static bool SupportsGraphicsFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::FormatUsage usage);
		static int32_t GetLastValidColorBufferIndex(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers);
		static uint32_t GetValidColorBufferCount(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers);
		static bool IsMRT(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers);
		static bool Contains(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		static int32_t IndexOf(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		static uint32_t CountDistinct(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		static int32_t LastValid(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* source);
		static bool Contains(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag b);
		static bool SequenceEqual(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* left, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* right);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRendererFeature.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScreenSpaceAmbientOcclusionSettings; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScreenSpaceAmbientOcclusion : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Shader* m_Shader;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_Settings;
		UnityEngine_CoreModule::UnityEngine::Material* m_Material;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass* m_SSAOPass;
		struct StaticFields
		{
			mscorlib::System::String* k_ShaderName;
			mscorlib::System::String* k_OrthographicCameraKeyword;
			mscorlib::System::String* k_NormalReconstructionLowKeyword;
			mscorlib::System::String* k_NormalReconstructionMediumKeyword;
			mscorlib::System::String* k_NormalReconstructionHighKeyword;
			mscorlib::System::String* k_SourceDepthKeyword;
			mscorlib::System::String* k_SourceDepthNormalsKeyword;
			mscorlib::System::String* k_SourceGBufferKeyword;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Create();
		void AddRenderPasses(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void Dispose(bool disposing);
		bool GetMaterial();
		void _ctor();
	};
}


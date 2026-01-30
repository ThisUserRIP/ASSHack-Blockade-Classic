#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderPass.h"
#include "UnityEngine_Experimental_Rendering_Universal_RenderQueueType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct RenderObjects_CustomCameraSettings; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CompareFunction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilOp.h"
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
#include "UnityEngine_Rendering_Universal_URPProfileId.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct RenderObjectsPass : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType;
		UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* m_CameraSettings;
		mscorlib::System::String* m_ProfilerTag;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
		UnityEngine_CoreModule::UnityEngine::Material* _overrideMaterial_k__BackingField;
		int32_t _overrideMaterialPassIndex_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;
		UnityEngine_CoreModule::UnityEngine::Material* get_overrideMaterial();
		void set_overrideMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		int32_t get_overrideMaterialPassIndex();
		void set_overrideMaterialPassIndex(int32_t value);
		void SetDetphState(bool writeEnabled, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction function);
		void SetStencilState(int32_t reference, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOp, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOp, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOp);
		void _ctor(mscorlib::System::String* profilerTag, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, IL2CPP::Array<mscorlib::System::String*>* shaderTags, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::URPProfileId profileId, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, IL2CPP::Array<mscorlib::System::String*>* shaderTags, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);
		void Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
	};
}


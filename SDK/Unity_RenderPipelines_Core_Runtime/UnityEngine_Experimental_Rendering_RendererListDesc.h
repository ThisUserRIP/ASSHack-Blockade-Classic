#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_SortingCriteria.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_PerObjectData.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderQueueRange.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderQueueRange; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering
{
	struct RendererListDesc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingCriteria sortingCriteria;
		UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData rendererConfiguration;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange;
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock> stateBlock;
		UnityEngine_CoreModule::UnityEngine::Material* overrideMaterial;
		bool excludeObjectMotionVectors;
		int32_t layerMask;
		int32_t overrideMaterialPassIndex;
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults _cullingResult_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Camera* _camera_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId _passName_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* _passNames_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults get_cullingResult();
		void set_cullingResult(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults value);
		UnityEngine_CoreModule::UnityEngine::Camera* get_camera();
		void set_camera(UnityEngine_CoreModule::UnityEngine::Camera* value);
		UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId get_passName();
		void set_passName(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* get_passNames();
		void set_passNames(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId passName, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResult, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void _ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* passNames, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResult, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		bool IsValid();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_DrawingSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering
{
	struct RendererList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isValid_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResult;
		UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings drawSettings;
		UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings filteringSettings;
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock> stateBlock;
		bool get_isValid();
		void set_isValid(bool value);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList Create(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc& desc);
		static void _cctor();
	};
}


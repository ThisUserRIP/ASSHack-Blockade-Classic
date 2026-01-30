#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_GraphicsTier.h"
#include "UnityEngine_Rendering_BuiltinShaderDefine.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ScriptableObject; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderPipelineAsset; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct GraphicsSettings : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_lightsUseLinearIntensity();
		static void set_lightsUseLinearIntensity(bool value);
		static void set_useScriptableRenderPipelineBatching(bool value);
		static bool HasShaderDefine(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier tier, UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinShaderDefine defineHash);
		static UnityEngine_CoreModule::UnityEngine::ScriptableObject* get_INTERNAL_currentRenderPipeline();
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* get_currentRenderPipeline();
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset();
		static void set_renderPipelineAsset(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* value);
		static UnityEngine_CoreModule::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline();
		static void set_INTERNAL_defaultRenderPipeline(UnityEngine_CoreModule::UnityEngine::ScriptableObject* value);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline();
		static void set_defaultRenderPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* value);
	};
}


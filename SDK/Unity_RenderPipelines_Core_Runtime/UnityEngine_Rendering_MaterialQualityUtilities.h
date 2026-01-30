#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderKeyword.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderKeyword; };
#include "UnityEngine_Rendering_MaterialQuality.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct MaterialQualityUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* KeywordNames;
			IL2CPP::Array<mscorlib::System::String*>* EnumNames;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderKeyword>* Keywords;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality GetHighestQuality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality levels);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality GetClosestQuality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality availableLevels, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality requestedLevel);
		static void SetGlobalShaderKeywords(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level);
		static void SetGlobalShaderKeywords(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static int32_t ToFirstIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality FromIndex(int32_t index);
		static void _cctor();
	};
}


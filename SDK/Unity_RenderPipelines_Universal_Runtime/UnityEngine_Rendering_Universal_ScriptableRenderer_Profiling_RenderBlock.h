#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_ScriptableRenderer_Profiling.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer_Profiling; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScriptableRenderer_Profiling_RenderBlock : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* k_Name;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* beforeRendering;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* mainRenderingOpaque;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* mainRenderingTransparent;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* afterRendering;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}


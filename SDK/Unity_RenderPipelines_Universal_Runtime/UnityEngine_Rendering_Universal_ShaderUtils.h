#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Rendering_Universal_ShaderPathID.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShaderUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* s_ShaderPaths;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetShaderPath(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderPathID id);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderPathID GetEnumFromPath(mscorlib::System::String* path);
		static bool IsLWShader(UnityEngine_CoreModule::UnityEngine::Shader* shader);
		static void _cctor();
	};
}


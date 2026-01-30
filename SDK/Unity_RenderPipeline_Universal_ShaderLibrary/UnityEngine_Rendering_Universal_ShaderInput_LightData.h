#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ShaderInput.h"
namespace Unity_RenderPipeline_Universal_ShaderLibrary::UnityEngine::Rendering::Universal { struct ShaderInput; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace Unity_RenderPipeline_Universal_ShaderLibrary::UnityEngine::Rendering::Universal
{
	struct ShaderInput_LightData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector4 position;
		UnityEngine_CoreModule::UnityEngine::Vector4 color;
		UnityEngine_CoreModule::UnityEngine::Vector4 attenuation;
		UnityEngine_CoreModule::UnityEngine::Vector4 spotDirection;
		UnityEngine_CoreModule::UnityEngine::Vector4 occlusionProbeChannels;
	};
}


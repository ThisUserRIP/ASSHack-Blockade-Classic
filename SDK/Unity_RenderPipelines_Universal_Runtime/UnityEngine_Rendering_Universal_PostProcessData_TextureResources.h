#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_PostProcessData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct PostProcessData_TextureResources : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* blueNoise16LTex;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* filmGrainTex;
		UnityEngine_CoreModule::UnityEngine::Texture2D* smaaAreaTex;
		UnityEngine_CoreModule::UnityEngine::Texture2D* smaaSearchTex;
		void _ctor();
	};
}


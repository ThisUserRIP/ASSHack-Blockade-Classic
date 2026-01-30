#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ScriptableObject.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderPipeline; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderPipelineAsset : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();
		IL2CPP::Array<mscorlib::System::String*>* get_renderingLayerMaskNames();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultMaterial();
		UnityEngine_CoreModule::UnityEngine::Shader* get_autodeskInteractiveShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_autodeskInteractiveTransparentShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_autodeskInteractiveMaskedShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_terrainDetailLitShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_terrainDetailGrassShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_terrainDetailGrassBillboardShader();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultParticleMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultLineMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultTerrainMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIOverdrawMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIETC1SupportedMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_default2DMaterial();
		UnityEngine_CoreModule::UnityEngine::Shader* get_defaultShader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_defaultSpeedTree7Shader();
		UnityEngine_CoreModule::UnityEngine::Shader* get_defaultSpeedTree8Shader();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* CreatePipeline();
		void OnValidate();
		void OnDisable();
		void _ctor();
	};
}


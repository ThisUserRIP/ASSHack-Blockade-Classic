#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct PostEffectsBase : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool supportHDRTextures;
		bool supportDX11;
		bool isSupported;
		UnityEngine_CoreModule::UnityEngine::Material* CheckShaderAndCreateMaterial(UnityEngine_CoreModule::UnityEngine::Shader* s, UnityEngine_CoreModule::UnityEngine::Material* m2Create);
		UnityEngine_CoreModule::UnityEngine::Material* CreateMaterial(UnityEngine_CoreModule::UnityEngine::Shader* s, UnityEngine_CoreModule::UnityEngine::Material* m2Create);
		void OnEnable();
		bool CheckSupport();
		bool CheckResources();
		void Start();
		bool CheckSupport(bool needDepth);
		bool CheckSupport(bool needDepth, bool needHdr);
		bool Dx11Support();
		void ReportAutoDisable();
		bool CheckShader(UnityEngine_CoreModule::UnityEngine::Shader* s);
		void NotSupported();
		void DrawBorder(UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* material);
		void _ctor();
	};
}


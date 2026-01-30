#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct ContrastStretch : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float adaptationSpeed;
		float limitMinimum;
		float limitMaximum;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::RenderTexture*>* adaptRenderTex;
		int32_t curAdaptIndex;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderLum;
		UnityEngine_CoreModule::UnityEngine::Material* m_materialLum;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderReduce;
		UnityEngine_CoreModule::UnityEngine::Material* m_materialReduce;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderAdapt;
		UnityEngine_CoreModule::UnityEngine::Material* m_materialAdapt;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderApply;
		UnityEngine_CoreModule::UnityEngine::Material* m_materialApply;
		UnityEngine_CoreModule::UnityEngine::Material* get_materialLum();
		UnityEngine_CoreModule::UnityEngine::Material* get_materialReduce();
		UnityEngine_CoreModule::UnityEngine::Material* get_materialAdapt();
		UnityEngine_CoreModule::UnityEngine::Material* get_materialApply();
		void Start();
		void OnEnable();
		void OnDisable();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void CalculateAdaptation(UnityEngine_CoreModule::UnityEngine::Texture* curTexture);
		void _ctor();
	};
}


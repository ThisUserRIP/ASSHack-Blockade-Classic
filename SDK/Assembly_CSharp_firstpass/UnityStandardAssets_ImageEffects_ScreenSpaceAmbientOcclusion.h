#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion_SSAOSamples.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct ScreenSpaceAmbientOcclusion : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Radius;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion_SSAOSamples m_SampleCount;
		float m_OcclusionIntensity;
		int32_t m_Blur;
		int32_t m_Downsampling;
		float m_OcclusionAttenuation;
		float m_MinZ;
		UnityEngine_CoreModule::UnityEngine::Shader* m_SSAOShader;
		UnityEngine_CoreModule::UnityEngine::Material* m_SSAOMaterial;
		UnityEngine_CoreModule::UnityEngine::Texture2D* m_RandomTexture;
		bool m_Supported;
		static UnityEngine_CoreModule::UnityEngine::Material* CreateMaterial(UnityEngine_CoreModule::UnityEngine::Shader* shader);
		static void DestroyMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		void OnDisable();
		void Start();
		void OnEnable();
		void CreateMaterials();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}


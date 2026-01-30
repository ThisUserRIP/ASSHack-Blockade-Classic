#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct Blur : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t iterations;
		float blurSpread;
		UnityEngine_CoreModule::UnityEngine::Shader* blurShader;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Material* m_Material;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void OnDisable();
		void Start();
		void FourTapCone(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, int32_t iteration);
		void DownSample4x(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest);
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
		static void _cctor();
	};
}


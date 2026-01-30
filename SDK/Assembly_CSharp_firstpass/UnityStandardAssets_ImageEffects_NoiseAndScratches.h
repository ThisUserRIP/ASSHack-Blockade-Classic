#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct NoiseAndScratches : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool monochrome;
		bool rgbFallback;
		float grainIntensityMin;
		float grainIntensityMax;
		float grainSize;
		float scratchIntensityMin;
		float scratchIntensityMax;
		float scratchFPS;
		float scratchJitter;
		UnityEngine_CoreModule::UnityEngine::Texture* grainTexture;
		UnityEngine_CoreModule::UnityEngine::Texture* scratchTexture;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderRGB;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderYUV;
		UnityEngine_CoreModule::UnityEngine::Material* m_MaterialRGB;
		UnityEngine_CoreModule::UnityEngine::Material* m_MaterialYUV;
		float scratchTimeLeft;
		float scratchX;
		float scratchY;
		void Start();
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void OnDisable();
		void SanitizeParameters();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}


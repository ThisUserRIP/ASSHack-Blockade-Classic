#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct ImageEffects : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void RenderDistortion(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination, float angle, UnityEngine_CoreModule::UnityEngine::Vector2 center, UnityEngine_CoreModule::UnityEngine::Vector2 radius);
		static void Blit(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest);
		static void BlitWithMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest);
		void _ctor();
	};
}


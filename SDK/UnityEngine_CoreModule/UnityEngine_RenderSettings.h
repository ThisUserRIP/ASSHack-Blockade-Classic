#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_FogMode.h"
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "UnityEngine_Rendering_SphericalHarmonicsL2.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SphericalHarmonicsL2; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RenderSettings : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_fog();
		static float get_fogStartDistance();
		static void set_fogStartDistance(float value);
		static float get_fogEndDistance();
		static void set_fogEndDistance(float value);
		static UnityEngine_CoreModule::UnityEngine::FogMode get_fogMode();
		static void set_fogColor(UnityEngine_CoreModule::UnityEngine::Color value);
		static float get_fogDensity();
		static UnityEngine_CoreModule::UnityEngine::Color get_ambientSkyColor();
		static UnityEngine_CoreModule::UnityEngine::Color get_ambientEquatorColor();
		static UnityEngine_CoreModule::UnityEngine::Color get_ambientGroundColor();
		static UnityEngine_CoreModule::UnityEngine::Color get_subtractiveShadowColor();
		static UnityEngine_CoreModule::UnityEngine::Material* get_skybox();
		static void set_skybox(UnityEngine_CoreModule::UnityEngine::Material* value);
		static UnityEngine_CoreModule::UnityEngine::Light* get_sun();
		static void set_sun(UnityEngine_CoreModule::UnityEngine::Light* value);
		static UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe();
		static float get_reflectionIntensity();
		static void set_fogColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		static void get_ambientSkyColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void get_ambientEquatorColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void get_ambientGroundColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void get_subtractiveShadowColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void get_ambientProbe_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::SphericalHarmonicsL2& ret);
	};
}


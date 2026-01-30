#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Behaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_LightType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_LightBakingOutput.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LightBakingOutput; };
#include "UnityEngine_LightShadows.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "UnityEngine_LightRenderMode.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Light : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_BakedIndex;
		UnityEngine_CoreModule::UnityEngine::LightType get_type();
		void set_type(UnityEngine_CoreModule::UnityEngine::LightType value);
		float get_spotAngle();
		float get_innerSpotAngle();
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		float get_intensity();
		void set_intensity(float value);
		float get_bounceIntensity();
		void set_bounceIntensity(float value);
		float get_shadowBias();
		void set_shadowBias(float value);
		float get_shadowNormalBias();
		void set_shadowNormalBias(float value);
		float get_shadowNearPlane();
		float get_range();
		void set_range(float value);
		UnityEngine_CoreModule::UnityEngine::LightBakingOutput get_bakingOutput();
		void set_cullingMask(int32_t value);
		UnityEngine_CoreModule::UnityEngine::LightShadows get_shadows();
		void set_shadows(UnityEngine_CoreModule::UnityEngine::LightShadows value);
		float get_shadowStrength();
		void set_shadowStrength(float value);
		float get_cookieSize();
		UnityEngine_CoreModule::UnityEngine::Texture* get_cookie();
		void set_renderMode(UnityEngine_CoreModule::UnityEngine::LightRenderMode value);
		void _ctor();
		void get_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		void set_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		void get_bakingOutput_Injected(UnityEngine_CoreModule::UnityEngine::LightBakingOutput& ret);
	};
}


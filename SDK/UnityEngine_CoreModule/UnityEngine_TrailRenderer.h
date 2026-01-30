#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Renderer.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct TrailRenderer : UnityEngine_CoreModule::UnityEngine::Renderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float get_time();
		void set_time(float value);
		float get_startWidth();
		void set_startWidth(float value);
		float get_endWidth();
		void set_endWidth(float value);
		float get_widthMultiplier();
		void set_widthMultiplier(float value);
		UnityEngine_CoreModule::UnityEngine::Gradient* get_colorGradient();
		void set_colorGradient(UnityEngine_CoreModule::UnityEngine::Gradient* value);
		UnityEngine_CoreModule::UnityEngine::Gradient* GetColorGradientCopy();
		void SetColorGradient(UnityEngine_CoreModule::UnityEngine::Gradient* curve);
	};
}


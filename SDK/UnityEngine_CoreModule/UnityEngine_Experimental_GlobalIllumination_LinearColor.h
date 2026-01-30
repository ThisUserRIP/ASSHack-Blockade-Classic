#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination
{
	struct LinearColor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_red;
		float m_green;
		float m_blue;
		float m_intensity;
		float get_red();
		void set_red(float value);
		float get_green();
		void set_green(float value);
		float get_blue();
		void set_blue(float value);
		static UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(UnityEngine_CoreModule::UnityEngine::Color color, float intensity);
		static UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LinearColor Black();
	};
}


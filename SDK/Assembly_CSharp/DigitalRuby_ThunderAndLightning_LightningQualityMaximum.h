#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningQualityMaximum : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _MaximumGenerations_k__BackingField;
		float _MaximumLightPercent_k__BackingField;
		float _MaximumShadowPercent_k__BackingField;
		int32_t get_MaximumGenerations();
		void set_MaximumGenerations(int32_t value);
		float get_MaximumLightPercent();
		void set_MaximumLightPercent(float value);
		float get_MaximumShadowPercent();
		void set_MaximumShadowPercent(float value);
		void _ctor();
	};
}


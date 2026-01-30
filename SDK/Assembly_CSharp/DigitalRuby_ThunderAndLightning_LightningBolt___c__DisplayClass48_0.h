#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DigitalRuby_ThunderAndLightning_LightningBolt.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBolt; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningLightParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltQualitySetting.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBolt___c__DisplayClass48_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBolt* __4__this;
		UnityEngine_CoreModule::UnityEngine::Vector3 start;
		UnityEngine_CoreModule::UnityEngine::Vector3 end;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* lp;
		int32_t startGroupIndex;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltQualitySetting quality;
		void _ctor();
		void _RenderLightningBolt_b__0(bool inDestroy);
	};
}


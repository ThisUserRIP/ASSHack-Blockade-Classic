#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningCustomTransformStateInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningCustomTransformDelegate : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningCustomTransformStateInfo>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltPrefabScriptBase.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltPrefabScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScriptBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* Source;
		UnityEngine_CoreModule::UnityEngine::GameObject* Destination;
		UnityEngine_CoreModule::UnityEngine::Vector3 StartVariance;
		UnityEngine_CoreModule::UnityEngine::Vector3 EndVariance;
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void _ctor();
	};
}


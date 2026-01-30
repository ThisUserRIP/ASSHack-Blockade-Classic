#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltPrefabScriptBase.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningFieldScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScriptBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float MinimumLength;
		float minimumLengthSquared;
		UnityEngine_CoreModule::UnityEngine::Bounds FieldBounds;
		UnityEngine_CoreModule::UnityEngine::Light* Light;
		UnityEngine_CoreModule::UnityEngine::Vector3 RandomPointInBounds();
		void Start();
		void Update();
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void _ctor();
	};
}


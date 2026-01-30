#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorLight : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _baseIntensity;
		UnityEngine_CoreModule::UnityEngine::Color _baseColor;
		float _scaledDuration;
		float _explodeTime;
		UnityEngine_CoreModule::UnityEngine::GameObject* _light;
		UnityEngine_CoreModule::UnityEngine::Light* _lightComponent;
		float intensity;
		float _reduceAmount;
		void Init();
		void Update();
		void Explode();
		void Reset();
		void _ctor();
	};
}


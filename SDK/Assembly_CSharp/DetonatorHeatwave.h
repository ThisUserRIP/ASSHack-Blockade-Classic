#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorHeatwave : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _heatwave;
		float s;
		float _startSize;
		float _maxSize;
		float _baseDuration;
		bool _delayedExplosionStarted;
		float _explodeDelay;
		float zOffset;
		float distortion;
		float _elapsedTime;
		float _normalizedTime;
		UnityEngine_CoreModule::UnityEngine::Material* heatwaveMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* _material;
		void Init();
		void Update();
		void Explode();
		void Reset();
		void _ctor();
	};
}


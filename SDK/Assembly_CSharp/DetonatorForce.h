#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorForce : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _baseRadius;
		float _basePower;
		float _scaledRange;
		float _scaledIntensity;
		bool _delayedExplosionStarted;
		float _explodeDelay;
		float radius;
		float power;
		UnityEngine_CoreModule::UnityEngine::GameObject* fireObject;
		float fireObjectLife;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* _colliders;
		UnityEngine_CoreModule::UnityEngine::GameObject* _tempFireObject;
		UnityEngine_CoreModule::UnityEngine::Vector3 _explosionPosition;
		void Init();
		void Update();
		void Explode();
		void Reset();
		void _ctor();
	};
}


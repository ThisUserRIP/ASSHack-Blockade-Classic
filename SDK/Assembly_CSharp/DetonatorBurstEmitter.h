#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorBurstEmitter : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _baseDamping;
		float _baseSize;
		UnityEngine_CoreModule::UnityEngine::Color _baseColor;
		float damping;
		float startRadius;
		float maxScreenSize;
		bool explodeOnAwake;
		bool oneShot;
		float sizeVariation;
		float particleSize;
		float count;
		float sizeGrow;
		bool exponentialGrowth;
		float durationVariation;
		bool useWorldSpace;
		float upwardsBias;
		float angularVelocity;
		bool randomRotation;
		bool useExplicitColorAnimation;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colorAnimation;
		bool _delayedExplosionStarted;
		float _explodeDelay;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		float _emitTime;
		float speed;
		float initFraction;
		float _tmpParticleSize;
		UnityEngine_CoreModule::UnityEngine::Vector3 _tmpPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 _tmpDir;
		UnityEngine_CoreModule::UnityEngine::Vector3 _thisPos;
		float _tmpDuration;
		float _tmpCount;
		float _scaledDuration;
		float _scaledDurationVariation;
		float _scaledStartRadius;
		float _scaledColor;
		float _randomizedRotation;
		float _tmpAngularVelocity;
		struct StaticFields
		{
			float epsilon;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Init();
		void Awake();
		void Update();
		float SizeFunction(float elapsedTime);
		void Reset();
		void Explode();
		void _ctor();
		static void _cctor();
	};
}


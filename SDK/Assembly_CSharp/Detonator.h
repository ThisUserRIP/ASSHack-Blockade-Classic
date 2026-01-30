#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
namespace Assembly_CSharp { struct DetonatorFireball; };
namespace Assembly_CSharp { struct DetonatorSparks; };
namespace Assembly_CSharp { struct DetonatorShockwave; };
namespace Assembly_CSharp { struct DetonatorSmoke; };
namespace Assembly_CSharp { struct DetonatorGlow; };
namespace Assembly_CSharp { struct DetonatorLight; };
namespace Assembly_CSharp { struct DetonatorForce; };
namespace Assembly_CSharp { struct DetonatorHeatwave; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Detonator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float size;
		UnityEngine_CoreModule::UnityEngine::Color color;
		bool explodeOnStart;
		float duration;
		float detail;
		float upwardsBias;
		float destroyTime;
		bool useWorldSpace;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_CoreModule::UnityEngine::Material* fireballAMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* fireballBMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* smokeAMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* smokeBMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* shockwaveMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* sparksMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* glowMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* heatwaveMaterial;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Component*>* components;
		Assembly_CSharp::DetonatorFireball* _fireball;
		Assembly_CSharp::DetonatorSparks* _sparks;
		Assembly_CSharp::DetonatorShockwave* _shockwave;
		Assembly_CSharp::DetonatorSmoke* _smoke;
		Assembly_CSharp::DetonatorGlow* _glow;
		Assembly_CSharp::DetonatorLight* _light;
		Assembly_CSharp::DetonatorForce* _force;
		Assembly_CSharp::DetonatorHeatwave* _heatwave;
		bool autoCreateFireball;
		bool autoCreateSparks;
		bool autoCreateShockwave;
		bool autoCreateSmoke;
		bool autoCreateGlow;
		bool autoCreateLight;
		bool autoCreateForce;
		bool autoCreateHeatwave;
		float _lastExplosionTime;
		bool _firstComponentUpdate;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Component*>* _subDetonators;
		struct StaticFields
		{
			float _baseSize;
			UnityEngine_CoreModule::UnityEngine::Color _baseColor;
			float _baseDuration;
			UnityEngine_CoreModule::UnityEngine::Material* defaultFireballAMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultFireballBMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultSmokeAMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultSmokeBMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultShockwaveMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultSparksMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultGlowMaterial;
			UnityEngine_CoreModule::UnityEngine::Material* defaultHeatwaveMaterial;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void FillDefaultMaterials();
		void Start();
		void Update();
		void UpdateComponents();
		void Explode();
		void Reset();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultFireballAMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultFireballBMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultSmokeAMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultSmokeBMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultSparksMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultShockwaveMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultGlowMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* DefaultHeatwaveMaterial();
		void _ctor();
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct DetonatorBurstEmitter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorFireball : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _baseSize;
		float _baseDuration;
		UnityEngine_CoreModule::UnityEngine::Color _baseColor;
		UnityEngine_CoreModule::UnityEngine::Vector3 _baseVelocity;
		float _scaledDuration;
		UnityEngine_CoreModule::UnityEngine::GameObject* _fireballA;
		Assembly_CSharp::DetonatorBurstEmitter* _fireballAEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* fireballAMaterial;
		UnityEngine_CoreModule::UnityEngine::GameObject* _fireballB;
		Assembly_CSharp::DetonatorBurstEmitter* _fireballBEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* fireballBMaterial;
		UnityEngine_CoreModule::UnityEngine::GameObject* _fireShadow;
		Assembly_CSharp::DetonatorBurstEmitter* _fireShadowEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* fireShadowMaterial;
		bool drawFireballA;
		bool drawFireballB;
		bool drawFireShadow;
		UnityEngine_CoreModule::UnityEngine::Color _detailAdjustedColor;
		void Init();
		void FillMaterials(bool wipe);
		void BuildFireballA();
		void UpdateFireballA();
		void BuildFireballB();
		void UpdateFireballB();
		void BuildFireShadow();
		void UpdateFireShadow();
		void Reset();
		void Explode();
		void _ctor();
	};
}


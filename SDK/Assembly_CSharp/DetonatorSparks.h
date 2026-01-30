#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DetonatorComponent.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct DetonatorBurstEmitter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct DetonatorSparks : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _baseSize;
		float _baseDuration;
		UnityEngine_CoreModule::UnityEngine::Vector3 _baseVelocity;
		UnityEngine_CoreModule::UnityEngine::Color _baseColor;
		UnityEngine_CoreModule::UnityEngine::Vector3 _baseForce;
		float _scaledDuration;
		UnityEngine_CoreModule::UnityEngine::GameObject* _sparks;
		Assembly_CSharp::DetonatorBurstEmitter* _sparksEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* sparksMaterial;
		void Init();
		void FillMaterials(bool wipe);
		void BuildSparks();
		void UpdateSparks();
		void Reset();
		void Explode();
		void _ctor();
	};
}


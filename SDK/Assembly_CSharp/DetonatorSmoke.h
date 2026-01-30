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
namespace Assembly_CSharp { struct DetonatorBurstEmitter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorSmoke : Assembly_CSharp::DetonatorComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color _baseColor;
		float _scaledDuration;
		UnityEngine_CoreModule::UnityEngine::GameObject* _smokeA;
		Assembly_CSharp::DetonatorBurstEmitter* _smokeAEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* smokeAMaterial;
		UnityEngine_CoreModule::UnityEngine::GameObject* _smokeB;
		Assembly_CSharp::DetonatorBurstEmitter* _smokeBEmitter;
		UnityEngine_CoreModule::UnityEngine::Material* smokeBMaterial;
		bool drawSmokeA;
		bool drawSmokeB;
		struct StaticFields
		{
			float _baseSize;
			float _baseDuration;
			float _baseDamping;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Init();
		void FillMaterials(bool wipe);
		void BuildSmokeA();
		void UpdateSmokeA();
		void BuildSmokeB();
		void UpdateSmokeB();
		void Reset();
		void Explode();
		void _ctor();
	};
}


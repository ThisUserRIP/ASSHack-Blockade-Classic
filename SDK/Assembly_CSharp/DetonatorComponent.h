#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct Detonator; };

namespace Assembly_CSharp
{
	struct DetonatorComponent : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool on;
		bool detonatorControlled;
		float startSize;
		float size;
		float explodeDelayMin;
		float explodeDelayMax;
		float startDuration;
		float duration;
		float timeScale;
		float startDetail;
		float detail;
		UnityEngine_CoreModule::UnityEngine::Color startColor;
		UnityEngine_CoreModule::UnityEngine::Color color;
		UnityEngine_CoreModule::UnityEngine::Vector3 startLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 localPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 startForce;
		UnityEngine_CoreModule::UnityEngine::Vector3 force;
		UnityEngine_CoreModule::UnityEngine::Vector3 startVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 velocity;
		float detailThreshold;
		void Explode();
		void Init();
		void SetStartValues();
		Assembly_CSharp::Detonator* MyDetonator();
		void _ctor();
	};
}


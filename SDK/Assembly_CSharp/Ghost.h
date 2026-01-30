#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Ghost : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float cr;
		float cg;
		float cb;
		float er;
		float eg;
		float eb;
		float last_update;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_AnimationModule::UnityEngine::Animator* myAnimator;
		UnityEngine_CoreModule::UnityEngine::Material* mat;
		float FadeSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 LastPos;
		bool isBoss;
		void Start();
		void Update();
		void RecvDamage();
		void _ctor();
	};
}


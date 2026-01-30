#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_MuzzleFlash : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_FadeSpeed;
		bool m_ForceShow;
		UnityEngine_CoreModule::UnityEngine::Color m_Color;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		bool flamethrower;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* myPS;
		float flameTimer;
		float get_FadeSpeed();
		void set_FadeSpeed(float value);
		bool get_ForceShow();
		void set_ForceShow(bool value);
		void Awake();
		void Start();
		void Update();
		void Show();
		void Shoot();
		void _ctor();
	};
}


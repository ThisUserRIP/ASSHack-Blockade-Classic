#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct vp_EventHandler; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Earthquake : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_EarthQuakeForce;
		float m_Endtime;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Magnitude;
		Assembly_CSharp::vp_EventHandler* EventHandler;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		Assembly_CSharp::vp_FPPlayerEventHandler* get_Player();
		void Awake();
		void OnEnable();
		void OnDisable();
		void FixedUpdate();
		void UpdateEarthQuake();
		void OnStart_Earthquake();
		void OnMessage_BombShake(float impact);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_OnValue_EarthQuakeForce();
		void set_OnValue_EarthQuakeForce(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct Client; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct EntManager; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Assembly_CSharp { struct CarController; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp { struct Sound; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct OLDCar : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		int32_t classID;
		int32_t tank_type;
		int32_t health;
		int32_t armor;
		int32_t speed;
		int32_t reload;
		int32_t turretRotation;
		int32_t skin_id;
		float dlina;
		float shirina;
		UnityEngine_CoreModule::UnityEngine::Transform* MGFlash;
		UnityEngine_CoreModule::UnityEngine::Transform* MyTransform;
		float FlashTime;
		Assembly_CSharp::Client* cscl;
		bool gunner;
		Assembly_CSharp::EntManager* entmanager;
		UnityEngine_CoreModule::UnityEngine::GameObject* obj;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Texture* tex;
		UnityEngine_CoreModule::UnityEngine::Texture* armor_tex;
		Assembly_CSharp::CarController* cc;
		bool activeCC;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastRot;
		int32_t state;
		int32_t lastState;
		Assembly_CSharp::Sound* s;
		UnityEngine_AudioModule::UnityEngine::AudioSource* AS;
		float lastTime;
		float replayTime;
		float lastTime2;
		float replayTime2;
		int32_t currTurretState;
		UnityEngine_CoreModule::UnityEngine::Vector3 turretState;
		UnityEngine_AudioModule::UnityEngine::AudioSource* TurretAs;
		UnityEngine_CoreModule::UnityEngine::Transform* turret;
		UnityEngine_CoreModule::UnityEngine::Transform* JeepMesh;
		UnityEngine_CoreModule::UnityEngine::Transform* firePoint;
		float t_x;
		float t_z;
		float t_ry;
		float g_rx;
		int32_t team;
		bool initialized;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* particles;
		IL2CPP::Array<int32_t>* slots;
		UnityEngine_CoreModule::UnityEngine::GameObject* GunnerPos;
		UnityEngine_CoreModule::UnityEngine::GameObject* Gunner;
		UnityEngine_CoreModule::UnityEngine::GameObject* GunnerCap;
		UnityEngine_CoreModule::UnityEngine::GameObject* GunnerHelmet;
		UnityEngine_CoreModule::UnityEngine::GameObject* GunnerBudge;
		void Awake();
		void UnactiveGunner();
		void ActiveGunner(bool _trooper, bool _helmet, bool _cap, bool _budge);
		void Update();
		void OnGUI();
		void CheckSlots(int32_t plid);
		void KillSelf();
		void _ctor();
	};
}


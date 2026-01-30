#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct ScytheSoulsEffectController; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PlayerControl : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool freeze;
		UnityEngine_CoreModule::UnityEngine::GameObject* Gui;
		UnityEngine_CoreModule::UnityEngine::GameObject* Map;
		Assembly_CSharp::ScytheSoulsEffectController* mySSEC;
		UnityEngine_AudioModule::UnityEngine::AudioClip* DeathSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* HitSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* TraceHitSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* Headshot;
		UnityEngine_CoreModule::UnityEngine::GameObject* FollowCam;
		UnityEngine_CoreModule::UnityEngine::Vector3 _spawnPos;
		struct StaticFields
		{
			mscorlib::System::String* mapid;
			int32_t privateserver;
			int32_t privateadmin;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void Update();
		void SetSpectator();
		void UnSetSpectator();
		bool isSpectator();
		void Spawn(int32_t x, int32_t y, int32_t z);
		int32_t GetTeam();
		void StartMap(mscorlib::System::String* mapname);
		void SetHit();
		void SetTraceHit();
		static mscorlib::System::String* GetMapID();
		void AwardHeadshot();
		void SetPrivateServer(int32_t flag);
		int32_t isPrivateServer();
		static int32_t isPrivateAdmin();
		void _ctor();
		static void _cctor();
	};
}


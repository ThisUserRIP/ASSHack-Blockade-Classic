#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct Batch; };
namespace Assembly_CSharp { struct MiniMap; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct PlayerControl; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp { struct vp_FPController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp
{
	struct SpawnManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* goGUI;
		Assembly_CSharp::WeaponSystem* csws;
		Assembly_CSharp::Batch* csb;
		Assembly_CSharp::MiniMap* csr;
		Assembly_CSharp::Client* cl;
		Assembly_CSharp::PlayerControl* cspc;
		int32_t last_follow_player_index;
		int32_t _myindex;
		UnityEngine_CoreModule::UnityEngine::Vector3 DeathPos;
		UnityEngine_CoreModule::UnityEngine::GameObject* goCamera;
		UnityEngine_CoreModule::UnityEngine::GameObject* LocalPlayer;
		Assembly_CSharp::vp_FPController* m_Controller;
		bool msgshow;
		mscorlib::System::String* spectatormsg;
		UnityEngine_CoreModule::UnityEngine::Rect rSpectatormsg;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		bool waiting_for_respawn;
		int32_t currentCamType;
		void Awake();
		void PreSpawn();
		void Spawn(float x, float y, float z);
		void SpawnCamera(UnityEngine_CoreModule::UnityEngine::GameObject* head);
		void LateUpdate();
		void Update();
		void OnGUI();
		void SetRandomFollow(int32_t myindex, int32_t _last_index);
		void SetFollow(int32_t index);
		void SetNextCamType();
		void SetSpectatorMsg(mscorlib::System::String* msg);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Client; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DeathMsg : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Client* cscl;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style2;
		IL2CPP::Array<mscorlib::System::String*>* d_attacker;
		IL2CPP::Array<mscorlib::System::String*>* d_victim;
		IL2CPP::Array<int32_t>* d_weaponid;
		IL2CPP::Array<bool>* d_headshot;
		IL2CPP::Array<int32_t>* d_flag;
		float lastupdate;
		int32_t killstreak;
		bool killstreak_draw;
		float killstreak_time;
		int32_t killstreak_color;
		UnityEngine_CoreModule::UnityEngine::Texture2D* weapon_tykva;
		void Awake();
		void OnGUI();
		void AddDeathMsg(int32_t attackerid, int32_t victimid, int32_t weaponid, int32_t hitbox);
		void _ctor();
	};
}


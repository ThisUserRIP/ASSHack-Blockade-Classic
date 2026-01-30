#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct PlayerStats : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		IL2CPP::Array<bool>* hovermode;
		int32_t mode;
		int32_t x_pos;
		int32_t y_pos;
		IL2CPP::Array<mscorlib::System::String*>* info_name;
		IL2CPP::Array<mscorlib::System::String*>* info_frags;
		IL2CPP::Array<mscorlib::System::String*>* info_deaths;
		IL2CPP::Array<mscorlib::System::String*>* info_exp;
		IL2CPP::Array<mscorlib::System::String*>* info_vkid;
		int32_t count;
		float lastupdate;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		mscorlib::System::String* myvkid;
		IL2CPP::Array<mscorlib::System::String*>* clan_name;
		IL2CPP::Array<mscorlib::System::String*>* clan_creatorname;
		IL2CPP::Array<mscorlib::System::String*>* clan_level;
		IL2CPP::Array<mscorlib::System::String*>* clan_exp;
		int32_t clan_count;
		void myGlobalInit();
		void OnGUI();
		void DoWindow(int32_t windowID);
		void onActive();
		mscorlib::System::Collections::IEnumerator* get_playerstats();
		mscorlib::System::Collections::IEnumerator* get_clanstats();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id);
		void _ctor();
	};
}


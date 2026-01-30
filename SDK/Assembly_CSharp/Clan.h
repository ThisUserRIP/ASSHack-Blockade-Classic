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
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct Clan : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t state;
		int32_t restore;
		mscorlib::System::String* clantag;
		mscorlib::System::String* claninvite;
		mscorlib::System::String* clantagfind;
		int32_t find_clanid;
		mscorlib::System::String* find_clantag;
		mscorlib::System::String* find_level;
		mscorlib::System::String* find_capitan;
		mscorlib::System::String* find_slots;
		int32_t find_full;
		mscorlib::System::String* info_tag;
		mscorlib::System::String* info_adminname;
		mscorlib::System::String* info_timeparsed;
		int32_t info_exp;
		int32_t info_time;
		int32_t info_slots;
		int32_t info_admin;
		int32_t info_level;
		int32_t info_progress;
		bool editName;
		int32_t info_player_count;
		IL2CPP::Array<mscorlib::System::String*>* info_player_vkid;
		IL2CPP::Array<mscorlib::System::String*>* info_player_name;
		bool button_name_hover;
		bool button_save_hover;
		int32_t inv_player_count;
		IL2CPP::Array<mscorlib::System::String*>* inv_player_vkid;
		IL2CPP::Array<mscorlib::System::String*>* inv_player_name;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector0;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector2;
		void myGlobalInit();
		void onActive();
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawState0();
		void DrawState1();
		void DrawState2();
		void DrawState3();
		void DrawState4();
		mscorlib::System::Collections::IEnumerator* get_clan(bool noreset);
		mscorlib::System::Collections::IEnumerator* create_clan();
		mscorlib::System::Collections::IEnumerator* leave_clan();
		mscorlib::System::Collections::IEnumerator* restore_clan();
		mscorlib::System::Collections::IEnumerator* get_claninvite();
		mscorlib::System::Collections::IEnumerator* get_clanfind();
		mscorlib::System::Collections::IEnumerator* send_invite();
		mscorlib::System::Collections::IEnumerator* del_invite();
		mscorlib::System::Collections::IEnumerator* accept_invite(mscorlib::System::String* id);
		mscorlib::System::Collections::IEnumerator* accept_decline(mscorlib::System::String* id);
		mscorlib::System::Collections::IEnumerator* del_player(mscorlib::System::String* id);
		mscorlib::System::Collections::IEnumerator* set_clanname();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Achievement; };
namespace mscorlib::System { struct Action; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_UserStatsReceived_t.h"
namespace Facepunch_Steamworks::SteamNative { struct UserStatsReceived_t; };
#include "SteamNative_UserStatsStored_t.h"
namespace Facepunch_Steamworks::SteamNative { struct UserStatsStored_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Achievements : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* _All_k__BackingField;
		mscorlib::System::Action* OnUpdated;
		mscorlib::System::Action_1<Facepunch_Steamworks::Facepunch::Steamworks::Achievement>* OnAchievementStateChanged;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::Achievement>* unlockedRecently;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* get_All();
		void set_All(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void Refresh();
		void OnUnlocked(Facepunch_Steamworks::Facepunch::Steamworks::Achievement* a);
		void Dispose();
		void UserStatsReceived(Facepunch_Steamworks::SteamNative::UserStatsReceived_t stats);
		void UserStatsStored(Facepunch_Steamworks::SteamNative::UserStatsStored_t stats);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facepunch_Steamworks_BaseSteamworks.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct DirectoryInfo; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Voice; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct ServerList; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct LobbyList; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct App; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Achievements; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Stats; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct MicroTransactions; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct User; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct RemoteStorage; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Overlay; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Auth; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Lobby; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Screenshots; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Client : Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Username_k__BackingField;
		uint64_t _SteamId_k__BackingField;
		uint64_t _OwnerSteamId_k__BackingField;
		mscorlib::System::String* _BetaName_k__BackingField;
		int32_t _BuildId_k__BackingField;
		mscorlib::System::IO::DirectoryInfo* _InstallFolder_k__BackingField;
		mscorlib::System::String* _CurrentLanguage_k__BackingField;
		IL2CPP::Array<mscorlib::System::String*>* _AvailableLanguages_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Voice* _Voice_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::ServerList* _ServerList_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::LobbyList* _LobbyList_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::App* _App_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Achievements* _Achievements_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Stats* _Stats_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions* _MicroTransactions_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::User* _User_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::RemoteStorage* _RemoteStorage_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Overlay* _Overlay_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Auth* _auth;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends* _friends;
		Facepunch_Steamworks::Facepunch::Steamworks::Lobby* _lobby;
		Facepunch_Steamworks::Facepunch::Steamworks::Screenshots* _screenshots;
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::Client* _Instance_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Facepunch_Steamworks::Facepunch::Steamworks::Client* get_Instance();
		static void set_Instance(Facepunch_Steamworks::Facepunch::Steamworks::Client* value);
		mscorlib::System::String* get_Username();
		void set_Username(mscorlib::System::String* value);
		uint64_t get_SteamId();
		void set_SteamId(uint64_t value);
		void set_OwnerSteamId(uint64_t value);
		void set_BetaName(mscorlib::System::String* value);
		void set_BuildId(int32_t value);
		void set_InstallFolder(mscorlib::System::IO::DirectoryInfo* value);
		mscorlib::System::String* get_CurrentLanguage();
		Facepunch_Steamworks::Facepunch::Steamworks::Voice* get_Voice();
		void set_Voice(Facepunch_Steamworks::Facepunch::Steamworks::Voice* value);
		Facepunch_Steamworks::Facepunch::Steamworks::ServerList* get_ServerList();
		void set_ServerList(Facepunch_Steamworks::Facepunch::Steamworks::ServerList* value);
		Facepunch_Steamworks::Facepunch::Steamworks::LobbyList* get_LobbyList();
		void set_LobbyList(Facepunch_Steamworks::Facepunch::Steamworks::LobbyList* value);
		Facepunch_Steamworks::Facepunch::Steamworks::App* get_App();
		void set_App(Facepunch_Steamworks::Facepunch::Steamworks::App* value);
		Facepunch_Steamworks::Facepunch::Steamworks::Achievements* get_Achievements();
		void set_Achievements(Facepunch_Steamworks::Facepunch::Steamworks::Achievements* value);
		Facepunch_Steamworks::Facepunch::Steamworks::Stats* get_Stats();
		void set_Stats(Facepunch_Steamworks::Facepunch::Steamworks::Stats* value);
		Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions* get_MicroTransactions();
		void set_MicroTransactions(Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions* value);
		Facepunch_Steamworks::Facepunch::Steamworks::User* get_User();
		void set_User(Facepunch_Steamworks::Facepunch::Steamworks::User* value);
		Facepunch_Steamworks::Facepunch::Steamworks::RemoteStorage* get_RemoteStorage();
		void set_RemoteStorage(Facepunch_Steamworks::Facepunch::Steamworks::RemoteStorage* value);
		void set_Overlay(Facepunch_Steamworks::Facepunch::Steamworks::Overlay* value);
		void _ctor(uint32_t appId);
		void Finalize();
		void Update();
		void RunCallbacks();
		void Dispose();
		Facepunch_Steamworks::Facepunch::Steamworks::Auth* get_Auth();
		Facepunch_Steamworks::Facepunch::Steamworks::Friends* get_Friends();
	};
}


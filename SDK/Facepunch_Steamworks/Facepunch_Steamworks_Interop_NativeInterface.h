#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamApi; };
namespace Facepunch_Steamworks::SteamNative { struct SteamClient; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUser; };
namespace Facepunch_Steamworks::SteamNative { struct SteamApps; };
namespace Facepunch_Steamworks::SteamNative { struct SteamAppList; };
namespace Facepunch_Steamworks::SteamNative { struct SteamFriends; };
namespace Facepunch_Steamworks::SteamNative { struct SteamMatchmakingServers; };
namespace Facepunch_Steamworks::SteamNative { struct SteamMatchmaking; };
namespace Facepunch_Steamworks::SteamNative { struct SteamInventory; };
namespace Facepunch_Steamworks::SteamNative { struct SteamNetworking; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUserStats; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUtils; };
namespace Facepunch_Steamworks::SteamNative { struct SteamScreenshots; };
namespace Facepunch_Steamworks::SteamNative { struct SteamHTTP; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUGC; };
namespace Facepunch_Steamworks::SteamNative { struct SteamGameServer; };
namespace Facepunch_Steamworks::SteamNative { struct SteamGameServerStats; };
namespace Facepunch_Steamworks::SteamNative { struct SteamRemoteStorage; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::Facepunch::Steamworks::Interop
{
	struct NativeInterface : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::SteamApi* api;
		Facepunch_Steamworks::SteamNative::SteamClient* client;
		Facepunch_Steamworks::SteamNative::SteamUser* user;
		Facepunch_Steamworks::SteamNative::SteamApps* apps;
		Facepunch_Steamworks::SteamNative::SteamAppList* applist;
		Facepunch_Steamworks::SteamNative::SteamFriends* friends;
		Facepunch_Steamworks::SteamNative::SteamMatchmakingServers* servers;
		Facepunch_Steamworks::SteamNative::SteamMatchmaking* matchmaking;
		Facepunch_Steamworks::SteamNative::SteamInventory* inventory;
		Facepunch_Steamworks::SteamNative::SteamNetworking* networking;
		Facepunch_Steamworks::SteamNative::SteamUserStats* userstats;
		Facepunch_Steamworks::SteamNative::SteamUtils* utils;
		Facepunch_Steamworks::SteamNative::SteamScreenshots* screenshots;
		Facepunch_Steamworks::SteamNative::SteamHTTP* http;
		Facepunch_Steamworks::SteamNative::SteamUGC* ugc;
		Facepunch_Steamworks::SteamNative::SteamGameServer* gameServer;
		Facepunch_Steamworks::SteamNative::SteamGameServerStats* gameServerStats;
		Facepunch_Steamworks::SteamNative::SteamRemoteStorage* remoteStorage;
		bool isServer;
		bool InitClient(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks);
		void FillInterfaces(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, int32_t hpipe, int32_t huser);
		void Dispose();
		void _ctor();
	};
}


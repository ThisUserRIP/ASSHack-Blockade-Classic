#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Facepunch_Steamworks::SteamNative { struct SteamAppList; };
#include "SteamNative_HSteamUser.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamUser; };
#include "SteamNative_HSteamPipe.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamPipe; };
namespace mscorlib::System { struct String; };
namespace Facepunch_Steamworks::SteamNative { struct SteamApps; };
namespace Facepunch_Steamworks::SteamNative { struct SteamFriends; };
namespace Facepunch_Steamworks::SteamNative { struct SteamGameServer; };
namespace Facepunch_Steamworks::SteamNative { struct SteamGameServerStats; };
namespace Facepunch_Steamworks::SteamNative { struct SteamHTTP; };
namespace Facepunch_Steamworks::SteamNative { struct SteamInventory; };
namespace Facepunch_Steamworks::SteamNative { struct SteamMatchmaking; };
namespace Facepunch_Steamworks::SteamNative { struct SteamMatchmakingServers; };
namespace Facepunch_Steamworks::SteamNative { struct SteamNetworking; };
namespace Facepunch_Steamworks::SteamNative { struct SteamRemoteStorage; };
namespace Facepunch_Steamworks::SteamNative { struct SteamScreenshots; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUGC; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUser; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUserStats; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUtils; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		Facepunch_Steamworks::SteamNative::SteamAppList* GetISteamAppList(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamApps* GetISteamApps(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamFriends* GetISteamFriends(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamGameServer* GetISteamGameServer(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamGameServerStats* GetISteamGameServerStats(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamHTTP* GetISteamHTTP(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamInventory* GetISteamInventory(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamMatchmaking* GetISteamMatchmaking(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamMatchmakingServers* GetISteamMatchmakingServers(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamNetworking* GetISteamNetworking(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamRemoteStorage* GetISteamRemoteStorage(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamScreenshots* GetISteamScreenshots(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamUGC* GetISteamUGC(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamUser* GetISteamUser(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamUserStats* GetISteamUserStats(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
		Facepunch_Steamworks::SteamNative::SteamUtils* GetISteamUtils(Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion);
	};
}


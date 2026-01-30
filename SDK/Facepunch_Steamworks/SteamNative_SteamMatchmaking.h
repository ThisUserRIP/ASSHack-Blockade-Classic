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
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::SteamNative { struct AppId_t; };
namespace Facepunch_Steamworks::SteamNative { struct AppId_t; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct UInt16; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamMatchmaking : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		bool GetFavoriteGame(int32_t iGame, Facepunch_Steamworks::SteamNative::AppId_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer);
		int32_t GetFavoriteGameCount();
	};
}


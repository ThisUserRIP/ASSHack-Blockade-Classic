#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GSReputation_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint32_t ReputationScore;
		bool Banned;
		uint32_t BannedIP;
		uint16_t BannedPort;
		uint64_t BannedGameID;
		uint32_t BanExpires;
		static Facepunch_Steamworks::SteamNative::GSReputation_t FromPointer(intptr_t p);
		static int32_t StructSize();
		static void Register(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks);
		static void OnResultThis(intptr_t self, intptr_t param);
		static void OnResultWithInfoThis(intptr_t self, intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
		static int32_t OnGetSizeThis(intptr_t self);
		static int32_t OnGetSize();
		static void OnResult(intptr_t param);
		static void OnResultWithInfo(intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
	};
}


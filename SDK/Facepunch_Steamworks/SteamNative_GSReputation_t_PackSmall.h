#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GSReputation_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GSReputation_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GSReputation_t_PackSmall
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
		static Facepunch_Steamworks::SteamNative::GSReputation_t op_Implicit(Facepunch_Steamworks::SteamNative::GSReputation_t_PackSmall d);
	};
}


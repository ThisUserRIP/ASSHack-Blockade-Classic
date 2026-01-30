#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_ClanOfficerListResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct ClanOfficerListResponse_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct ClanOfficerListResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDClan;
		int32_t COfficers;
		uint8_t Success;
		static Facepunch_Steamworks::SteamNative::ClanOfficerListResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::ClanOfficerListResponse_t_PackSmall d);
	};
}


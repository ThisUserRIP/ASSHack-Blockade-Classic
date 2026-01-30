#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GSClientDeny_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GSClientDeny_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_DenyReason.h"
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GSClientDeny_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamID;
		Facepunch_Steamworks::SteamNative::DenyReason DenyReason;
		mscorlib::System::String* OptionalText;
		static Facepunch_Steamworks::SteamNative::GSClientDeny_t op_Implicit(Facepunch_Steamworks::SteamNative::GSClientDeny_t_PackSmall d);
	};
}


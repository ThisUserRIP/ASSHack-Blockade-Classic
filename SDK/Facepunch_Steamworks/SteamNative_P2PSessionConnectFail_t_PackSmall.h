#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_P2PSessionConnectFail_t.h"
namespace Facepunch_Steamworks::SteamNative { struct P2PSessionConnectFail_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct P2PSessionConnectFail_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDRemote;
		uint8_t P2PSessionError;
		static Facepunch_Steamworks::SteamNative::P2PSessionConnectFail_t op_Implicit(Facepunch_Steamworks::SteamNative::P2PSessionConnectFail_t_PackSmall d);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_MicroTxnAuthorizationResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct MicroTxnAuthorizationResponse_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct MicroTxnAuthorizationResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t AppID;
		uint64_t OrderID;
		uint8_t Authorized;
		static Facepunch_Steamworks::SteamNative::MicroTxnAuthorizationResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::MicroTxnAuthorizationResponse_t_PackSmall d);
	};
}


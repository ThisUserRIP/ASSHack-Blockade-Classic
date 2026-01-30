#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_ValidateAuthTicketResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct ValidateAuthTicketResponse_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_AuthSessionResponse.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct ValidateAuthTicketResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamID;
		Facepunch_Steamworks::SteamNative::AuthSessionResponse AuthSessionResponse;
		uint64_t OwnerSteamID;
		static Facepunch_Steamworks::SteamNative::ValidateAuthTicketResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::ValidateAuthTicketResponse_t_PackSmall d);
	};
}


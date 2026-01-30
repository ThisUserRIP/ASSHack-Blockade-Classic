#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GetAuthSessionTicketResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GetAuthSessionTicketResponse_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct GetAuthSessionTicketResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t AuthTicket;
		Facepunch_Steamworks::SteamNative::Result Result;
		static Facepunch_Steamworks::SteamNative::GetAuthSessionTicketResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::GetAuthSessionTicketResponse_t_PackSmall d);
	};
}


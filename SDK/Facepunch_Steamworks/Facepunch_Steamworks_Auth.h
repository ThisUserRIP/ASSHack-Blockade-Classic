#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Auth_Ticket; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_GetAuthSessionTicketResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GetAuthSessionTicketResponse_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Auth : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		bool _responded;
		Facepunch_Steamworks::Facepunch::Steamworks::Auth_Ticket* GetAuthSessionTicket();
		void AuthResponse(Facepunch_Steamworks::SteamNative::GetAuthSessionTicketResponse_t t);
		void _ctor();
	};
}


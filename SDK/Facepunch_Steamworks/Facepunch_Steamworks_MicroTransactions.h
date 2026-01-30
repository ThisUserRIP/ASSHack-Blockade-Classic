#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct MicroTransactions_AuthorizationResponse; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_MicroTxnAuthorizationResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct MicroTxnAuthorizationResponse_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct MicroTransactions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions_AuthorizationResponse* OnAuthorizationResponse;
		void add_OnAuthorizationResponse(Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions_AuthorizationResponse* value);
		void remove_OnAuthorizationResponse(Facepunch_Steamworks::Facepunch::Steamworks::MicroTransactions_AuthorizationResponse* value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void onMicroTxnAuthorizationResponse(Facepunch_Steamworks::SteamNative::MicroTxnAuthorizationResponse_t arg1);
		void Dispose();
	};
}


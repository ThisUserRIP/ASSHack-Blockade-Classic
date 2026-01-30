#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_AppProofOfPurchaseKeyResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct AppProofOfPurchaseKeyResponse_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct AppProofOfPurchaseKeyResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint32_t AppID;
		uint32_t CchKeyLength;
		mscorlib::System::String* Key;
		static Facepunch_Steamworks::SteamNative::AppProofOfPurchaseKeyResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::AppProofOfPurchaseKeyResponse_t_PackSmall d);
	};
}


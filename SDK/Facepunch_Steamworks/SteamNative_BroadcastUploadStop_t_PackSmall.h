#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_BroadcastUploadStop_t.h"
namespace Facepunch_Steamworks::SteamNative { struct BroadcastUploadStop_t; };
#include "SteamNative_BroadcastUploadResult.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct BroadcastUploadStop_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::BroadcastUploadResult Result;
		static Facepunch_Steamworks::SteamNative::BroadcastUploadStop_t op_Implicit(Facepunch_Steamworks::SteamNative::BroadcastUploadStop_t_PackSmall d);
	};
}


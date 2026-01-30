#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamServersDisconnected_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamServersDisconnected_t; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamServersDisconnected_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		static Facepunch_Steamworks::SteamNative::SteamServersDisconnected_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamServersDisconnected_t_PackSmall d);
	};
}


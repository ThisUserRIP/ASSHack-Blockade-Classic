#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamShutdown_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamShutdown_t; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamShutdown_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Facepunch_Steamworks::SteamNative::SteamShutdown_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamShutdown_t_PackSmall d);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamServerConnectFailure_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamServerConnectFailure_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamServerConnectFailure_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		bool StillRetrying;
		static Facepunch_Steamworks::SteamNative::SteamServerConnectFailure_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamServerConnectFailure_t_PackSmall d);
	};
}


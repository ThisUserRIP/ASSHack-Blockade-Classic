#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GetOPFSettingsResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GetOPFSettingsResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GetOPFSettingsResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint32_t VideoAppID;
		static Facepunch_Steamworks::SteamNative::GetOPFSettingsResult_t op_Implicit(Facepunch_Steamworks::SteamNative::GetOPFSettingsResult_t_PackSmall d);
	};
}


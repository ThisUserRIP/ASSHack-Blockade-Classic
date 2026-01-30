#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamInventoryResultReady_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResultReady_t; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamInventoryResultReady_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Handle;
		Facepunch_Steamworks::SteamNative::Result Result;
		static Facepunch_Steamworks::SteamNative::SteamInventoryResultReady_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamInventoryResultReady_t_PackSmall d);
	};
}


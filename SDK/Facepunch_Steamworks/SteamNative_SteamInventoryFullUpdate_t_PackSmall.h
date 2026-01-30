#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamInventoryFullUpdate_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryFullUpdate_t; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamInventoryFullUpdate_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Handle;
		static Facepunch_Steamworks::SteamNative::SteamInventoryFullUpdate_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamInventoryFullUpdate_t_PackSmall d);
	};
}


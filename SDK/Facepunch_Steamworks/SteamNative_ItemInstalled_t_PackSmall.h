#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_ItemInstalled_t.h"
namespace Facepunch_Steamworks::SteamNative { struct ItemInstalled_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct ItemInstalled_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t AppID;
		uint64_t PublishedFileId;
		static Facepunch_Steamworks::SteamNative::ItemInstalled_t op_Implicit(Facepunch_Steamworks::SteamNative::ItemInstalled_t_PackSmall d);
	};
}


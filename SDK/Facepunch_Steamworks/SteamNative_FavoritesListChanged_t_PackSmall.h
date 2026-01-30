#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_FavoritesListChanged_t.h"
namespace Facepunch_Steamworks::SteamNative { struct FavoritesListChanged_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct FavoritesListChanged_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t IP;
		uint32_t QueryPort;
		uint32_t ConnPort;
		uint32_t AppID;
		uint32_t Flags;
		bool Add;
		uint32_t AccountId;
		static Facepunch_Steamworks::SteamNative::FavoritesListChanged_t op_Implicit(Facepunch_Steamworks::SteamNative::FavoritesListChanged_t_PackSmall d);
	};
}


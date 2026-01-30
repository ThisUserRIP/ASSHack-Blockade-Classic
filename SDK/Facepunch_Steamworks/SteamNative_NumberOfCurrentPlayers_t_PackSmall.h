#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_NumberOfCurrentPlayers_t.h"
namespace Facepunch_Steamworks::SteamNative { struct NumberOfCurrentPlayers_t; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct NumberOfCurrentPlayers_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t Success;
		int32_t CPlayers;
		static Facepunch_Steamworks::SteamNative::NumberOfCurrentPlayers_t op_Implicit(Facepunch_Steamworks::SteamNative::NumberOfCurrentPlayers_t_PackSmall d);
	};
}


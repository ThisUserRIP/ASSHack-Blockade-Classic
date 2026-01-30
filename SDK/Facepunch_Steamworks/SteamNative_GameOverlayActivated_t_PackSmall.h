#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GameOverlayActivated_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameOverlayActivated_t; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GameOverlayActivated_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t Active;
		static Facepunch_Steamworks::SteamNative::GameOverlayActivated_t op_Implicit(Facepunch_Steamworks::SteamNative::GameOverlayActivated_t_PackSmall d);
	};
}


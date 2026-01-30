#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_MusicPlayerWantsShuffled_t.h"
namespace Facepunch_Steamworks::SteamNative { struct MusicPlayerWantsShuffled_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct MusicPlayerWantsShuffled_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Shuffled;
		static Facepunch_Steamworks::SteamNative::MusicPlayerWantsShuffled_t op_Implicit(Facepunch_Steamworks::SteamNative::MusicPlayerWantsShuffled_t_PackSmall d);
	};
}


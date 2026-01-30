#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_MusicPlayerWantsVolume_t.h"
namespace Facepunch_Steamworks::SteamNative { struct MusicPlayerWantsVolume_t; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Facepunch_Steamworks::SteamNative
{
	struct MusicPlayerWantsVolume_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float NewVolume;
		static Facepunch_Steamworks::SteamNative::MusicPlayerWantsVolume_t op_Implicit(Facepunch_Steamworks::SteamNative::MusicPlayerWantsVolume_t_PackSmall d);
	};
}


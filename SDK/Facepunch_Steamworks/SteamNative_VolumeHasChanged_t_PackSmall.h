#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_VolumeHasChanged_t.h"
namespace Facepunch_Steamworks::SteamNative { struct VolumeHasChanged_t; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Facepunch_Steamworks::SteamNative
{
	struct VolumeHasChanged_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float NewVolume;
		static Facepunch_Steamworks::SteamNative::VolumeHasChanged_t op_Implicit(Facepunch_Steamworks::SteamNative::VolumeHasChanged_t_PackSmall d);
	};
}


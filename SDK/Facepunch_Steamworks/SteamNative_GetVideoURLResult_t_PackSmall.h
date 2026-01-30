#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GetVideoURLResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GetVideoURLResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GetVideoURLResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint32_t VideoAppID;
		mscorlib::System::String* URL;
		static Facepunch_Steamworks::SteamNative::GetVideoURLResult_t op_Implicit(Facepunch_Steamworks::SteamNative::GetVideoURLResult_t_PackSmall d);
	};
}


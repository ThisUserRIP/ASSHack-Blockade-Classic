#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageFileShareResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageFileShareResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageFileShareResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t File;
		mscorlib::System::String* Filename;
		static Facepunch_Steamworks::SteamNative::RemoteStorageFileShareResult_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageFileShareResult_t_PackSmall d);
	};
}


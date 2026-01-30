#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageDownloadUGCResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageDownloadUGCResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageDownloadUGCResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t File;
		uint32_t AppID;
		int32_t SizeInBytes;
		mscorlib::System::String* PchFileName;
		uint64_t SteamIDOwner;
		static Facepunch_Steamworks::SteamNative::RemoteStorageDownloadUGCResult_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageDownloadUGCResult_t_PackSmall d);
	};
}


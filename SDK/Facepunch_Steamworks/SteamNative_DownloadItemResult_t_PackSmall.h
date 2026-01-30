#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_DownloadItemResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct DownloadItemResult_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct DownloadItemResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t AppID;
		uint64_t PublishedFileId;
		Facepunch_Steamworks::SteamNative::Result Result;
		static Facepunch_Steamworks::SteamNative::DownloadItemResult_t op_Implicit(Facepunch_Steamworks::SteamNative::DownloadItemResult_t_PackSmall d);
	};
}


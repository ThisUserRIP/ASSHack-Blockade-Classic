#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStoragePublishedFileUnsubscribed_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStoragePublishedFileUnsubscribed_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStoragePublishedFileUnsubscribed_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t PublishedFileId;
		uint32_t AppID;
		static Facepunch_Steamworks::SteamNative::RemoteStoragePublishedFileUnsubscribed_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStoragePublishedFileUnsubscribed_t_PackSmall d);
	};
}


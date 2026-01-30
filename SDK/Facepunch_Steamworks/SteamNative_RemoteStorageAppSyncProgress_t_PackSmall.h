#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageAppSyncProgress_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageAppSyncProgress_t; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageAppSyncProgress_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* CurrentFile;
		uint32_t AppID;
		uint32_t BytesTransferredThisChunk;
		double DAppPercentComplete;
		bool Uploading;
		static Facepunch_Steamworks::SteamNative::RemoteStorageAppSyncProgress_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageAppSyncProgress_t_PackSmall d);
	};
}


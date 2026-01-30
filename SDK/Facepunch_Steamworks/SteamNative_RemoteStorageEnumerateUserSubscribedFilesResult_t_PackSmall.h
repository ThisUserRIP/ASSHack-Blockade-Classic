#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageEnumerateUserSubscribedFilesResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageEnumerateUserSubscribedFilesResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageEnumerateUserSubscribedFilesResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		int32_t ResultsReturned;
		int32_t TotalResultCount;
		IL2CPP::Array<uint64_t>* GPublishedFileId;
		IL2CPP::Array<uint32_t>* GRTimeSubscribed;
		static Facepunch_Steamworks::SteamNative::RemoteStorageEnumerateUserSubscribedFilesResult_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageEnumerateUserSubscribedFilesResult_t_PackSmall d);
	};
}


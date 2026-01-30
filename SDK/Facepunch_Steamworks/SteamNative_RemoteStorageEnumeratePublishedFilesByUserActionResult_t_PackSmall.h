#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageEnumeratePublishedFilesByUserActionResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t; };
#include "SteamNative_Result.h"
#include "SteamNative_WorkshopFileAction.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		Facepunch_Steamworks::SteamNative::WorkshopFileAction Action;
		int32_t ResultsReturned;
		int32_t TotalResultCount;
		IL2CPP::Array<uint64_t>* GPublishedFileId;
		IL2CPP::Array<uint32_t>* GRTimeUpdated;
		static Facepunch_Steamworks::SteamNative::RemoteStorageEnumeratePublishedFilesByUserActionResult_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageEnumeratePublishedFilesByUserActionResult_t_PackSmall d);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageGetPublishedFileDetailsResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageGetPublishedFileDetailsResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
#include "SteamNative_RemoteStoragePublishedFileVisibility.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "SteamNative_WorkshopFileType.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageGetPublishedFileDetailsResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t PublishedFileId;
		uint32_t CreatorAppID;
		uint32_t ConsumerAppID;
		mscorlib::System::String* Title;
		mscorlib::System::String* Description;
		uint64_t File;
		uint64_t PreviewFile;
		uint64_t SteamIDOwner;
		uint32_t TimeCreated;
		uint32_t TimeUpdated;
		Facepunch_Steamworks::SteamNative::RemoteStoragePublishedFileVisibility Visibility;
		bool Banned;
		mscorlib::System::String* Tags;
		bool TagsTruncated;
		mscorlib::System::String* PchFileName;
		int32_t FileSize;
		int32_t PreviewFileSize;
		mscorlib::System::String* URL;
		Facepunch_Steamworks::SteamNative::WorkshopFileType FileType;
		bool AcceptedForUse;
		static Facepunch_Steamworks::SteamNative::RemoteStorageGetPublishedFileDetailsResult_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageGetPublishedFileDetailsResult_t_PackSmall d);
	};
}


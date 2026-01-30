#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_Result.h"
#include "SteamNative_WorkshopFileType.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
#include "SteamNative_RemoteStoragePublishedFileVisibility.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamUGCDetails_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t PublishedFileId;
		Facepunch_Steamworks::SteamNative::Result Result;
		Facepunch_Steamworks::SteamNative::WorkshopFileType FileType;
		uint32_t CreatorAppID;
		uint32_t ConsumerAppID;
		mscorlib::System::String* Title;
		mscorlib::System::String* Description;
		uint64_t SteamIDOwner;
		uint32_t TimeCreated;
		uint32_t TimeUpdated;
		uint32_t TimeAddedToUserList;
		Facepunch_Steamworks::SteamNative::RemoteStoragePublishedFileVisibility Visibility;
		bool Banned;
		bool AcceptedForUse;
		bool TagsTruncated;
		mscorlib::System::String* Tags;
		uint64_t File;
		uint64_t PreviewFile;
		mscorlib::System::String* PchFileName;
		int32_t FileSize;
		int32_t PreviewFileSize;
		mscorlib::System::String* URL;
		uint32_t VotesUp;
		uint32_t VotesDown;
		float Score;
		uint32_t NumChildren;
	};
}


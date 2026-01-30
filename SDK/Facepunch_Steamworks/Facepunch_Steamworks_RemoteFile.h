#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct RemoteStorage; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "SteamNative_UGCHandle_t.h"
namespace Facepunch_Steamworks::SteamNative { struct UGCHandle_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct RemoteFile : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::RemoteStorage* remoteStorage;
		bool _isUgc;
		mscorlib::System::String* _fileName;
		int32_t _sizeInBytes;
		int64_t _timestamp;
		Facepunch_Steamworks::SteamNative::UGCHandle_t _handle;
		uint64_t _ownerId;
		bool _isDownloading;
		IL2CPP::Array<uint8_t>* _downloadedData;
		bool _Exists_k__BackingField;
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Facepunch_Steamworks::SteamNative { struct SteamUGC; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
namespace Facepunch_Steamworks::SteamNative { struct SteamRemoteStorage; };
#include "Facepunch_Steamworks_Callbacks_Result.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_ItemInstalled_t.h"
namespace Facepunch_Steamworks::SteamNative { struct ItemInstalled_t; };
#include "SteamNative_DownloadItemResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct DownloadItemResult_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Workshop : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::SteamUGC* ugc;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends* friends;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		Facepunch_Steamworks::SteamNative::SteamRemoteStorage* remoteStorage;
		mscorlib::System::Action_2<mscorlib::System::UInt64, Facepunch_Steamworks::Facepunch::Steamworks::Callbacks::Result>* OnFileDownloaded;
		mscorlib::System::Action_1<mscorlib::System::UInt64>* OnItemInstalled;
		struct StaticFields
		{
			uint64_t InvalidHandle;
			IL2CPP::Array<uint64_t>* _sSubscribedItemBuffer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamUGC* ugc, Facepunch_Steamworks::SteamNative::SteamRemoteStorage* remoteStorage);
		void Dispose();
		void onItemInstalled(Facepunch_Steamworks::SteamNative::ItemInstalled_t obj);
		void onDownloadResult(Facepunch_Steamworks::SteamNative::DownloadItemResult_t obj);
	};
}


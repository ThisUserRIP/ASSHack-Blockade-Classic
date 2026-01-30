#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "SteamNative_AppId_t.h"
namespace Facepunch_Steamworks::SteamNative { struct AppId_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamApps : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		int32_t GetAppBuildId();
		mscorlib::System::String* GetAppInstallDir(Facepunch_Steamworks::SteamNative::AppId_t appID);
		uint64_t GetAppOwner();
		mscorlib::System::String* GetAvailableGameLanguages();
		mscorlib::System::String* GetCurrentBetaName();
		mscorlib::System::String* GetCurrentGameLanguage();
	};
}


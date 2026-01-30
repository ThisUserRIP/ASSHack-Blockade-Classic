#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_HSteamPipe.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamPipe; };
#include "SteamNative_HSteamUser.h"
namespace Facepunch_Steamworks::SteamNative { struct HSteamUser; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamApi : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		void _ctor();
		void Dispose();
		Facepunch_Steamworks::SteamNative::HSteamPipe SteamAPI_GetHSteamPipe();
		Facepunch_Steamworks::SteamNative::HSteamUser SteamAPI_GetHSteamUser();
		bool SteamAPI_Init();
		void SteamAPI_RegisterCallback(intptr_t pCallback, int32_t callback);
		void SteamAPI_RunCallbacks();
		void SteamAPI_Shutdown();
		void SteamAPI_UnregisterCallback(intptr_t pCallback);
		void SteamGameServer_Shutdown();
		intptr_t SteamInternal_CreateInterface(mscorlib::System::String* version);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GCMessageFailed_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Facepunch_Steamworks::SteamNative::GCMessageFailed_t FromPointer(intptr_t p);
		static int32_t StructSize();
		static void Register(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks);
		static void OnResultThis(intptr_t self, intptr_t param);
		static void OnResultWithInfoThis(intptr_t self, intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
		static int32_t OnGetSizeThis(intptr_t self);
		static int32_t OnGetSize();
		static void OnResult(intptr_t param);
		static void OnResultWithInfo(intptr_t param, bool failure, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_CallbackHandle.h"
#include "SteamNative_SteamAPICall_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamAPICall_t; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };

namespace Facepunch_Steamworks::SteamNative
{
	struct CallResult : Facepunch_Steamworks::SteamNative::CallbackHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::SteamAPICall_t Call;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamAPICall_t call);
		void Try();
		void RunCallback();
	};
}


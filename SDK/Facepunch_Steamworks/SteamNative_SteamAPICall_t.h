#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamAPICall_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t Value;
		static Facepunch_Steamworks::SteamNative::SteamAPICall_t op_Implicit(uint64_t value);
		static uint64_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamAPICall_t value);
	};
}


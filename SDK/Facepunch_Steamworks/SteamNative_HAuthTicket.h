#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HAuthTicket
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Value;
		static Facepunch_Steamworks::SteamNative::HAuthTicket op_Implicit(uint32_t value);
		static uint32_t op_Implicit(Facepunch_Steamworks::SteamNative::HAuthTicket value);
	};
}


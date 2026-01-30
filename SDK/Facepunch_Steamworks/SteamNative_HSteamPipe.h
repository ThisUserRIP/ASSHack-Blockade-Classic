#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HSteamPipe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Value;
		static Facepunch_Steamworks::SteamNative::HSteamPipe op_Implicit(int32_t value);
		static int32_t op_Implicit(Facepunch_Steamworks::SteamNative::HSteamPipe value);
	};
}


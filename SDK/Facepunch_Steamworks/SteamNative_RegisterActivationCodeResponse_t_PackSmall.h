#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RegisterActivationCodeResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RegisterActivationCodeResponse_t; };
#include "SteamNative_RegisterActivationCodeResult.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RegisterActivationCodeResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::RegisterActivationCodeResult Result;
		uint32_t PackageRegistered;
		static Facepunch_Steamworks::SteamNative::RegisterActivationCodeResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::RegisterActivationCodeResponse_t_PackSmall d);
	};
}


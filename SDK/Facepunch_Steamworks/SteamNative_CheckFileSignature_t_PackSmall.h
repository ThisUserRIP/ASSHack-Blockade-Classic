#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_CheckFileSignature_t.h"
namespace Facepunch_Steamworks::SteamNative { struct CheckFileSignature_t; };
#include "SteamNative_CheckFileSignature.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct CheckFileSignature_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::CheckFileSignature CheckFileSignature;
		static Facepunch_Steamworks::SteamNative::CheckFileSignature_t op_Implicit(Facepunch_Steamworks::SteamNative::CheckFileSignature_t_PackSmall d);
	};
}


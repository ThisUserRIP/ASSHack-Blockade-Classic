#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SetPersonaNameResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SetPersonaNameResponse_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SetPersonaNameResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Success;
		bool LocalSuccess;
		Facepunch_Steamworks::SteamNative::Result Result;
		static Facepunch_Steamworks::SteamNative::SetPersonaNameResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::SetPersonaNameResponse_t_PackSmall d);
	};
}


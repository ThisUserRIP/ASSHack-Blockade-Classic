#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_StoreAuthURLResponse_t.h"
namespace Facepunch_Steamworks::SteamNative { struct StoreAuthURLResponse_t; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct StoreAuthURLResponse_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* URL;
		static Facepunch_Steamworks::SteamNative::StoreAuthURLResponse_t op_Implicit(Facepunch_Steamworks::SteamNative::StoreAuthURLResponse_t_PackSmall d);
	};
}


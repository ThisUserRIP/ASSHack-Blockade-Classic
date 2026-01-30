#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamUGCRequestUGCDetailsResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamUGCRequestUGCDetailsResult_t; };
#include "SteamNative_SteamUGCDetails_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamUGCDetails_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamUGCRequestUGCDetailsResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::SteamUGCDetails_t Details;
		bool CachedData;
		static Facepunch_Steamworks::SteamNative::SteamUGCRequestUGCDetailsResult_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamUGCRequestUGCDetailsResult_t_PackSmall d);
	};
}


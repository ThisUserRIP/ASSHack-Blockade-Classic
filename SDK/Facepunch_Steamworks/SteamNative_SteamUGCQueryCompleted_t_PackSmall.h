#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_SteamUGCQueryCompleted_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamUGCQueryCompleted_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamUGCQueryCompleted_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t Handle;
		Facepunch_Steamworks::SteamNative::Result Result;
		uint32_t NumResultsReturned;
		uint32_t TotalMatchingResults;
		bool CachedData;
		static Facepunch_Steamworks::SteamNative::SteamUGCQueryCompleted_t op_Implicit(Facepunch_Steamworks::SteamNative::SteamUGCQueryCompleted_t_PackSmall d);
	};
}


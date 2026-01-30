#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GetAppDependenciesResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GetAppDependenciesResult_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_AppId_t.h"
namespace Facepunch_Steamworks::SteamNative { struct AppId_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GetAppDependenciesResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t PublishedFileId;
		IL2CPP::Array<Facepunch_Steamworks::SteamNative::AppId_t>* GAppIDs;
		uint32_t NumAppDependencies;
		uint32_t TotalNumAppDependencies;
		static Facepunch_Steamworks::SteamNative::GetAppDependenciesResult_t op_Implicit(Facepunch_Steamworks::SteamNative::GetAppDependenciesResult_t_PackSmall d);
	};
}


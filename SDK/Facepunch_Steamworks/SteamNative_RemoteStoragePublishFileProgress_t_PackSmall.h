#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStoragePublishFileProgress_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStoragePublishFileProgress_t; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStoragePublishFileProgress_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		double DPercentFile;
		bool Preview;
		static Facepunch_Steamworks::SteamNative::RemoteStoragePublishFileProgress_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStoragePublishFileProgress_t_PackSmall d);
	};
}


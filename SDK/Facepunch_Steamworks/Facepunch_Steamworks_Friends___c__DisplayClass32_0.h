#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Friends.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct SteamFriend; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Friends___c__DisplayClass32_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t steamid;
		void _ctor();
		bool _Get_b__0(Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* x);
	};
}


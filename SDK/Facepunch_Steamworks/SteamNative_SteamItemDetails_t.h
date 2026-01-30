#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamItemDetails_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t ItemId;
		int32_t Definition;
		uint16_t Quantity;
		uint16_t Flags;
	};
}


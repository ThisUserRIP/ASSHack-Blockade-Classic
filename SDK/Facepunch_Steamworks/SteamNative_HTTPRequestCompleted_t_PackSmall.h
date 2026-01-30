#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_HTTPRequestCompleted_t.h"
namespace Facepunch_Steamworks::SteamNative { struct HTTPRequestCompleted_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_HTTPStatusCode.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct HTTPRequestCompleted_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Request;
		uint64_t ContextValue;
		bool RequestSuccessful;
		Facepunch_Steamworks::SteamNative::HTTPStatusCode StatusCode;
		uint32_t BodySize;
		static Facepunch_Steamworks::SteamNative::HTTPRequestCompleted_t op_Implicit(Facepunch_Steamworks::SteamNative::HTTPRequestCompleted_t_PackSmall d);
	};
}


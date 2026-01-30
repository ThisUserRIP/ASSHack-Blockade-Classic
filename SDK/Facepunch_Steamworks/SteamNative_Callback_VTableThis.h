#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "SteamNative_Callback.h"
namespace Facepunch_Steamworks::SteamNative { struct Callback; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTableThis_ResultD; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTableThis_ResultWithInfoD; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTableThis_GetSizeD; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Callback_VTableThis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Callback_VTableThis_ResultD* ResultA;
		Facepunch_Steamworks::SteamNative::Callback_VTableThis_ResultWithInfoD* ResultB;
		Facepunch_Steamworks::SteamNative::Callback_VTableThis_GetSizeD* GetSize;
		void _ctor();
	};
}


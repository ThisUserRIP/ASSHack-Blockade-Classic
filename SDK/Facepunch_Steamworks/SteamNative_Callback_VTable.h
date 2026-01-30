#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "SteamNative_Callback.h"
namespace Facepunch_Steamworks::SteamNative { struct Callback; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTable_ResultD; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTable_ResultWithInfoD; };
namespace Facepunch_Steamworks::SteamNative { struct Callback_VTable_GetSizeD; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::SteamNative
{
	struct Callback_VTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Callback_VTable_ResultD* ResultA;
		Facepunch_Steamworks::SteamNative::Callback_VTable_ResultWithInfoD* ResultB;
		Facepunch_Steamworks::SteamNative::Callback_VTable_GetSizeD* GetSize;
		void _ctor();
	};
}


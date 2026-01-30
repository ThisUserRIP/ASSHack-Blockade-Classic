#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_HTML_HideToolTip_t.h"
namespace Facepunch_Steamworks::SteamNative { struct HTML_HideToolTip_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HTML_HideToolTip_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t UnBrowserHandle;
		static Facepunch_Steamworks::SteamNative::HTML_HideToolTip_t op_Implicit(Facepunch_Steamworks::SteamNative::HTML_HideToolTip_t_PackSmall d);
	};
}


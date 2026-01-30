#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_HTML_HorizontalScroll_t.h"
namespace Facepunch_Steamworks::SteamNative { struct HTML_HorizontalScroll_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HTML_HorizontalScroll_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t UnBrowserHandle;
		uint32_t UnScrollMax;
		uint32_t UnScrollCurrent;
		float FlPageScale;
		bool BVisible;
		uint32_t UnPageSize;
		static Facepunch_Steamworks::SteamNative::HTML_HorizontalScroll_t op_Implicit(Facepunch_Steamworks::SteamNative::HTML_HorizontalScroll_t_PackSmall d);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GamepadTextInputDismissed_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GamepadTextInputDismissed_t; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GamepadTextInputDismissed_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Submitted;
		uint32_t SubmittedText;
		static Facepunch_Steamworks::SteamNative::GamepadTextInputDismissed_t op_Implicit(Facepunch_Steamworks::SteamNative::GamepadTextInputDismissed_t_PackSmall d);
	};
}


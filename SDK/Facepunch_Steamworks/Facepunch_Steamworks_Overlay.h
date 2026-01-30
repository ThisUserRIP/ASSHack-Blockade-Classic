#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_GameOverlayActivated_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameOverlayActivated_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Overlay : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		bool _IsOpen_k__BackingField;
		void set_IsOpen(bool value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void OverlayStateChange(Facepunch_Steamworks::SteamNative::GameOverlayActivated_t activation);
	};
}


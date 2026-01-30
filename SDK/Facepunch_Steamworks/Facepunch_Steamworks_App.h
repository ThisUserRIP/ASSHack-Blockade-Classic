#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct App_DlcInstalledDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_DlcInstalled_t.h"
namespace Facepunch_Steamworks::SteamNative { struct DlcInstalled_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct App : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		Facepunch_Steamworks::Facepunch::Steamworks::App_DlcInstalledDelegate* OnDlcInstalled;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void DlcInstalled(Facepunch_Steamworks::SteamNative::DlcInstalled_t data);
		void Dispose();
	};
}


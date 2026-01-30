#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Friends.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "Facepunch_Steamworks_Friends_AvatarSize.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Image; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Friends_PersonaCallback : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamId;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends_AvatarSize Size;
		mscorlib::System::Action_1<Facepunch_Steamworks::Facepunch::Steamworks::Image>* Callback;
		mscorlib::System::DateTime Time;
		void _ctor();
	};
}


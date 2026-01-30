#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerExtensions_SteamControllerExtension.h"
namespace Rewired_Core::Rewired::ControllerExtensions { struct SteamControllerExtension; };
namespace Rewired_Core::Rewired::Interfaces { struct ISteamControllerInternal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct SteamControllerExtension_pYJdABacztJneEHSVLvZRMPCiAs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* gzCZzBigVjAXoarUkiJKfLcYhUb;
		void _ctor(Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* internalController);
	};
}


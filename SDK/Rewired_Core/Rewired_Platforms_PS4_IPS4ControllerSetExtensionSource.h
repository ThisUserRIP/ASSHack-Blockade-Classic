#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Platforms::PS4 { struct IPS4ControllerExtensionSource; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct IPS4ControllerSetExtensionSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_controllerCount();
		Rewired_Core::Rewired::Platforms::PS4::IPS4ControllerExtensionSource* GetController(int32_t index);
	};
}


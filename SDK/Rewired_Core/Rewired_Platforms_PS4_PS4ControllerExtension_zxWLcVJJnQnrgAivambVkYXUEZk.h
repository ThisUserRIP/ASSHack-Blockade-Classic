#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Platforms_PS4_PS4ControllerExtension.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4ControllerExtension; };
namespace Rewired_Core::Rewired::Platforms::PS4 { struct IPS4ControllerExtensionSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4ControllerExtension_zxWLcVJJnQnrgAivambVkYXUEZk : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::IPS4ControllerExtensionSource* vFZHOBqLeyYBeVMlFUHaPOmXHwG;
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::IPS4ControllerExtensionSource* source);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Platforms_PS4_Internal_PadControllerInformation.h"
namespace Rewired_Core::Rewired::Platforms::PS4::Internal { struct PadControllerInformation; };
#include "Rewired_Platforms_PS4_Internal_PadDeviceClassExtendedInformation.h"
namespace Rewired_Core::Rewired::Platforms::PS4::Internal { struct PadDeviceClassExtendedInformation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Platforms::PS4::Internal
{
	struct ControllerInformation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::Internal::PadControllerInformation padControllerInformation;
		Rewired_Core::Rewired::Platforms::PS4::Internal::PadDeviceClassExtendedInformation padDeviceClassExtendedInformation;
		void _ctor();
	};
}


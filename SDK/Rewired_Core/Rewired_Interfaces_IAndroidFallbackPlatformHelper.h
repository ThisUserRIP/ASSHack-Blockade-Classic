#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };
namespace Rewired_Core::Rewired::Interfaces { struct IAndroidFallbackDS4Helper; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IAndroidFallbackPlatformHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void add_DeviceChangedEvent(mscorlib::System::Action* value);
		void remove_DeviceChangedEvent(mscorlib::System::Action* value);
		Rewired_Core::Rewired::Interfaces::IAndroidFallbackDS4Helper* get_ds4Helper();
		mscorlib::System::String* GetUniqueDeviceIdentifier(mscorlib::System::String* unityJoystickName, int32_t unityArrayIndex);
	};
}


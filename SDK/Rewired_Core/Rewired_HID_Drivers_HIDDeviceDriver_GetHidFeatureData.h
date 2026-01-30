#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Rewired_HID_Drivers_HIDDeviceDriver.h"
namespace Rewired_Core::Rewired::HID::Drivers { struct HIDDeviceDriver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Rewired_Core::Rewired::HID::Drivers
{
	struct HIDDeviceDriver_GetHidFeatureData : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		IL2CPP::Array<uint8_t>* Invoke(uint8_t reportId);
		mscorlib::System::IAsyncResult* BeginInvoke(uint8_t reportId, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		IL2CPP::Array<uint8_t>* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}


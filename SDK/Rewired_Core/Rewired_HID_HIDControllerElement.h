#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDControllerElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t reportId;
		Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo;
		void _ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo);
		void UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_HIDControllerElement.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDControllerElement_HIDInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t usagePage;
		uint16_t usage;
		int32_t dataIndex;
		int32_t bitSize;
		int32_t logicalMin;
		int32_t logicalMax;
		int32_t physicalMin;
		int32_t physicalMax;
		uint32_t units;
		uint32_t unitsExp;
		void _ctor();
	};
}


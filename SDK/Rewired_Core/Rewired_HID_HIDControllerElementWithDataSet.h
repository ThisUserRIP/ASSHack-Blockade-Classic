#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElement.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
#include "Rewired_UpdateLoopType.h"

namespace Rewired_Core::Rewired::HID
{
	struct HIDControllerElementWithDataSet : Rewired_Core::Rewired::HID::HIDControllerElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS* dataSet;
		void _ctor(Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS* dataSet, uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo);
		void Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
	};
}


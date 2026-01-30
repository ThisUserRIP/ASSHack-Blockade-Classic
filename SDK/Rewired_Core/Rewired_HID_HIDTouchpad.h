#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElement.h"
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad_TouchpadInfo; };
#include "Rewired_HID_HIDTouchpad_TouchData.h"
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad_TouchData; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDTouchpad : Rewired_Core::Rewired::HID::HIDControllerElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo* lqfiScNvcmcKZSGKtQdyeFKmJWF;
		System::System::Collections::Generic::Queue_1<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>* nFKbrsOvoMwdidbuuASxbYIuIGw;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>* SReNEQXEXSxInFWKykOfpPCJHZR;
		mscorlib::System::Action_2<Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer, IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>>* ysfDimTnwAFkaZKEjAgodDhJHqh;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>* values;
		void _ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDTouchpad_TouchpadInfo* info, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, mscorlib::System::Action_2<Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer, IL2CPP::Array<Rewired_Core::Rewired::HID::HIDTouchpad_TouchData>>* calcValueDelegate);
		void UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp);
		void ProcessQueue();
		bool IsTouching(int32_t touchId);
	};
}


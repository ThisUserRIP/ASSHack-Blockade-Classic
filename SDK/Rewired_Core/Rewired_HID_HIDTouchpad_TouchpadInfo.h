#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_HIDTouchpad.h"
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad_TouchData; };
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad_TouchData; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDTouchpad_TouchpadInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t maxTouches;
		int32_t minX;
		int32_t maxX;
		int32_t minY;
		int32_t maxY;
		bool invertY;
		bool reverseY;
		void _ctor(int32_t maxTouches, int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, bool invertY, bool reverseY);
		void CalculateTouch(Rewired_Core::Rewired::HID::HIDTouchpad_TouchData& data);
	};
}


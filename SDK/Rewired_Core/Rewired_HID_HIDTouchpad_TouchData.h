#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDTouchpad.h"
namespace Rewired_Core::Rewired::HID { struct HIDTouchpad; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDTouchpad_TouchData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t touchId;
		float timeStamp;
		bool isTouching;
		int32_t positionRawX;
		int32_t positionRawY;
		float positionX;
		float positionY;
		int32_t positionAbsX;
		int32_t positionAbsY;
		void Clear();
	};
}


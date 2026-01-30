#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElement.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_HID_HIDHat_Type.h"
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDHat : Rewired_Core::Rewired::HID::HIDControllerElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t rawValue;
		double timestamp;
		int32_t byteLength;
		int32_t startIndex;
		Rewired_Core::Rewired::HID::HIDHat_Type type;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* ysfDimTnwAFkaZKEjAgodDhJHqh;
		void _ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, Rewired_Core::Rewired::HID::HIDHat_Type type);
		void _ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* calcValueDelegate);
		void UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp);
	};
}


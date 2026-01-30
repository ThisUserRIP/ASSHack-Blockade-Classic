#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElement.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDAccelerometer : Rewired_Core::Rewired::HID::HIDControllerElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<float>* rawValue;
		double timestamp;
		int32_t valueLength;
		IL2CPP::Array<uint8_t>* ZIjeblKFaZFcbqKYLDPvEJtkPXJA;
		int32_t EPDTGCCXybHiKjAxFPxuDEhwSLp;
		int32_t ODjfYoGvRPipkAnSJRkrwmQHFIsc;
		mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, IL2CPP::Array<mscorlib::System::Single>>* ysfDimTnwAFkaZKEjAgodDhJHqh;
		void _ctor(uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, int32_t valueLength, mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, IL2CPP::Array<mscorlib::System::Single>>* calcValueDelegate);
		void UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp);
	};
}


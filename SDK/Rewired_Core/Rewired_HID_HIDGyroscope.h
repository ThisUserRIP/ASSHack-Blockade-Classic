#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElementWithDataSet.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct ExpandableArray_DataContainer_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Config_UpdateLoopSetting.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElement_HIDInfo; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDGyroscope : Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		double timestamp;
		IL2CPP::Array<float>* lastRawValue;
		int32_t valueLength;
		IL2CPP::Array<uint8_t>* ZIjeblKFaZFcbqKYLDPvEJtkPXJA;
		IL2CPP::Array<float>* vEqCPgtJzJJfEbWxOUeseWiyar;
		int32_t EPDTGCCXybHiKjAxFPxuDEhwSLp;
		int32_t ODjfYoGvRPipkAnSJRkrwmQHFIsc;
		mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, IL2CPP::Array<mscorlib::System::Single>>* ysfDimTnwAFkaZKEjAgodDhJHqh;
		mscorlib::System::Func_1<mscorlib::System::Single>* lOpLzBwfabzQJePJPeWKpYXpEQk;
		IL2CPP::Array<float>* get_rawValue();
		Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* get_events();
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, uint8_t reportId, Rewired_Core::Rewired::HID::HIDControllerElement_HIDInfo* hidInfo, int32_t valueLength, int32_t startingEventCapacity, mscorlib::System::Action_2<IL2CPP::Array<mscorlib::System::Byte>, IL2CPP::Array<mscorlib::System::Single>>* calcValueDelegate, mscorlib::System::Func_1<mscorlib::System::Single>* getSensorDeltaTimeDelegate);
		void UpdateValue(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, double timestamp);
	};
}


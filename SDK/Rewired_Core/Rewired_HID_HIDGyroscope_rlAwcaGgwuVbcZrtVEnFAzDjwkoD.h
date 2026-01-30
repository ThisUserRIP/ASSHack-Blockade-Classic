#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO.h"
#include "Rewired_HID_HIDGyroscope.h"
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct ExpandableArray_DataContainer_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDGyroscope_rlAwcaGgwuVbcZrtVEnFAzDjwkoD : Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<float>* uwkwFZRmErCKSstdWrxyBaklKjl;
		IL2CPP::Array<float>* XtGnGwLqiSHGwZcnjoMhEMRUrNL;
		Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* xgQiLzrIIVIDfhOJMCVJJjckKbeB;
		Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* BYEaUcvuDUBYmfsgSbiGdcDxzRX;
		void _ctor(Rewired_Core::Rewired::UpdateLoopType updateLoop, int32_t valueLength, int32_t eventCapacity);
		void rzxcwQaQDJsOGhoApWnDOXVkvyqu();
		void aLkSqMivRlvWcYjKnLEUBUUAgaj(IL2CPP::Array<float>* A_1, float A_2);
		void Reset();
	};
}


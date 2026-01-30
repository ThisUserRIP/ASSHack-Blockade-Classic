#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_HID_HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS.h"
#include "Rewired_HID_HIDGyroscope.h"
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::HID { struct HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct ExpandableArray_DataContainer_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Config_UpdateLoopSetting.h"
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDGyroscope_CwfFZukwqIIGlxhayenMtGTmmfq : Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t DqGSYcQMGARojJYdhNohTYUTkNW;
		int32_t ZcfyISSeyZwJonYADthcVEIzEDLj;
		IL2CPP::Array<float>* get_rawValue();
		Rewired_Core::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<Rewired_Core::Rewired::HID::HIDGyroscope_zNrgkVxkasrdAeESnGcdznYLSaf>* get_events();
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, int32_t valueLength, int32_t eventCapacity);
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void zSSqrCrbXuiMXeUNZWHWoKLiDxY(IL2CPP::Array<float>* A_1, float A_2);
		Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO* SUQYmgWuFoHvDCkoKPRehiXjPhi(Rewired_Core::Rewired::UpdateLoopType A_1);
	};
}


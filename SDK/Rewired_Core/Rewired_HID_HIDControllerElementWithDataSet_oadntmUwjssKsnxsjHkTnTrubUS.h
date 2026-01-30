#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_HIDControllerElementWithDataSet.h"
namespace Rewired_Core::Rewired::HID { struct HIDControllerElementWithDataSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::HID { struct HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"
#include "Rewired_Config_UpdateLoopSetting.h"
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDControllerElementWithDataSet_oadntmUwjssKsnxsjHkTnTrubUS : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t lqalSSPQaTfnqLNuGGpXzHwxpOP;
		IL2CPP::Array<int32_t>* CxaCLVFxRgouHtlEjfkKvgyXtus;
		IL2CPP::Array<Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO*>* LyvLYQezsHMaLrvmQCtSbOEAKhP;
		Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO* GYYYxEcGsLxbIqZVOBzNLNXZlmE;
		int32_t mqRHCpUSUtIOdhJeBJaMMIkypEy;
		int32_t sAuGFEcfRgfWcrHYueOyREmyooh;
		bool vtEkrkiAJjtqwXZCBkcBARNZaxUi;
		int32_t get_dataCount();
		IL2CPP::Array<int32_t>* get_updateLoopIndex();
		void set_updateLoop(Rewired_Core::Rewired::UpdateLoopType value);
		void _ctor();
		void dgYslizRyFoZkzsepiTlmmEdNAT(Rewired_Core::Rewired::Config::UpdateLoopSetting A_1, mscorlib::System::Func_2<Rewired_Core::Rewired::UpdateLoopType, Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO>* A_2);
		void YlcXhDxfUeHuXAWbRjyHZdqIPwN(Rewired_Core::Rewired::UpdateLoopType A_1, Rewired_Core::Rewired::HID::HIDControllerElementWithDataSet_KRjyHgpBnNNVfajtWQWHqYJpxSO* A_2);
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void zJbzOufrsBtxEPHEpbdbhOzmLZO();
	};
}


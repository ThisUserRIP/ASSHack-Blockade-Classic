#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_PidVid.h"
namespace Rewired_Core::Rewired { struct PidVid; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "auwvIvcBDbhOhmuldPTxydeShmq.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core
{
	struct qrIgtFyfVqiafzdViaksiFSzgeuQ
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_SystemName();
		mscorlib::System::String* get_FriendlyName();
		int32_t get_VendorId();
		int32_t get_ProductId();
		Rewired_Core::Rewired::PidVid get_PidVid();
		mscorlib::System::Guid get_InstanceGuid();
		Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq get_DeviceType();
		bool get_IsBluetoothDevice();
		Rewired_Core::Rewired::Controller_Extension* get_ControllerExtension();
		bool get_SupportsVibration();
		int32_t get_VibrationMotorCount();
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		void Acquire();
		void Unacquire();
		bool IsAttached();
		bool Matches(Rewired_Core::qrIgtFyfVqiafzdViaksiFSzgeuQ* A_1);
		void SetVibration(int32_t A_1, float A_2, bool A_3);
		void StopVibration();
	};
}


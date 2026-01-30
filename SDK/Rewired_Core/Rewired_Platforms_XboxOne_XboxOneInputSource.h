#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_Custom_CustomInputSource.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Platforms_XboxOne_XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE.h"
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "Rewired_Platforms_XboxOne_XboxOneInputSource_BadConnectionReason.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "Rewired_Platforms_XboxOne_XboxOneGamepadMotorType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UTsiDltkMfrsEEHHJEydOZPBsEE.h"
namespace Rewired_Core { struct UTsiDltkMfrsEEHHJEydOZPBsEE; };

namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	struct XboxOneInputSource : Rewired_Core::Rewired::Platforms::Custom::CustomInputSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool vtEkrkiAJjtqwXZCBkcBARNZaxUi;
		bool SselJsNbbvGMsFFNGWlnCnPBkyCS;
		System::System::Collections::Generic::Queue_1<Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource_AyDrgqazGGWabXjztZtUnJdXIFNE>* hPkCLQGvlzTkKHoUFEJSEyPHheiV;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			int32_t deNeIXdhIsrzyLcnxGLhFvdqqFHi;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_isReady();
		void _ctor();
		void Update();
		void nhVdVXxDAAxcBSOeONRAlrCflaY(uint32_t A_1, bool A_2);
		void HiBcPOhGBnhQlpPrCFgrOcsrLVrw(uint32_t A_1, bool A_2);
		void cJevsZOREDppxuGeipchhpmiKTW();
		bool ZAMunJaakjErMdCqXWTSBFhFaoL(uint32_t A_1, bool A_2, Rewired_Core::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason& A_3);
		void TRTaWytGdJirITWIyDTVerEwRmes();
		int32_t GetXboxOneUserIdFromUnityJoystick(int32_t unityJoystickId);
		void PulseVibrateMotor(uint64_t xboxOneJoystickId, Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float startLevel, float endLevel, float duration);
		bool SetXboxOneVibration(uint64_t xboxOneJoystickId, Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE vibration);
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}


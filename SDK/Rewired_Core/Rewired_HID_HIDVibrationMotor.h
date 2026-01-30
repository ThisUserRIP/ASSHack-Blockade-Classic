#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::HID
{
	struct HIDVibrationMotor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ZrMEXjAhouktNgQrMrUlOjSnZbVK;
		int32_t ImmsdTZxUdoIpuiRnJWFEymUVfv;
		int32_t SSteYAQrYnFmTkiUbqScqIrkCnOJ;
		mscorlib::System::Action* cMdoZRLnnuacxKhLZFKYDkszzQER;
		void add_ValueChangedEvent(mscorlib::System::Action* value);
		void remove_ValueChangedEvent(mscorlib::System::Action* value);
		float get_Speed();
		void set_Speed(float value);
		int32_t get_SpeedRaw();
		void set_SpeedRaw(int32_t value);
		void _ctor(int32_t minSpeedRaw, int32_t maxSpeedRaw);
		float pvbQdqEIbDvXYwhUtLylKbyVehs(int32_t A_1);
		int32_t ChRsuHKiAKmOEQoEMSIPzGJSonC(float A_1);
	};
}


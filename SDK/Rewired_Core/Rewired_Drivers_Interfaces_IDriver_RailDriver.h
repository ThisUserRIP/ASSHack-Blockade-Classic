#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Rewired_Core::Rewired::Drivers::Interfaces
{
	struct IDriver_RailDriver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_SpeakerEnabled();
		void set_SpeakerEnabled(bool value);
		void SetLEDDisplay(int32_t digitIndex, uint8_t digitBitValues);
		void SetLEDDisplay(uint8_t digit1BitValues, uint8_t digit2BitValues, uint8_t digit3BitValues);
	};
}


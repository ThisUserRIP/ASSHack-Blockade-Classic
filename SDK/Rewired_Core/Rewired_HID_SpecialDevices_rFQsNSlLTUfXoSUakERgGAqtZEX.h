#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_HID_SpecialDevices.h"
namespace Rewired_Core::Rewired::HID { struct SpecialDevices; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t qPAcKFjfhghvYBhRLNnNSyhaKZY;
		uint16_t UNeXKoPGlibLeynZXVomYjIWaCwI;
		mscorlib::System::String* zRNwuSLhuNRImxgvNVTZbUWVSlu;
		bool hnmftFRakOnWFvExCKqJoEpEAWzG;
		int32_t GuxbtgpSJBIiXJMcaSaEAwoxXOE;
		int32_t FjONTbNLinEtGHCtcYbtFVyBcsbH;
		int32_t TOQcrZrXLnJZgPaUUgwCjkdrhUA;
		float NuBUszpTuoCjhbnrQRPXiLPzfdDi;
		void _ctor(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName, bool hasRelativeAxes, int32_t axisMin, int32_t axisMax, int32_t axisZero, float relToAbsAxisConversionTimeout);
		bool yfAyEFNcQTGdddRJesOsjTJJmUV(uint16_t A_1, uint16_t A_2);
		bool yfAyEFNcQTGdddRJesOsjTJJmUV(uint16_t A_1, uint16_t A_2, mscorlib::System::String* A_3);
		bool yfAyEFNcQTGdddRJesOsjTJJmUV(mscorlib::System::String* A_1);
	};
}


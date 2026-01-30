#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::HID { struct SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::HID
{
	struct SpecialDevices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float fYMJEvQBuFAULeIkosvjUdfkTNdF;
			IL2CPP::Array<Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX*>* UAzGTULaAEZbuDzcmLWzjnJYNRI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool RequiresRelativeToAbsoluteAxisConversion(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName);
		static float GetRelativeToAbsoluteAxisEventTimeout(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName);
		static bool GetRelativeAxisRanges(uint16_t vendorId, uint16_t productId, int32_t& min, int32_t& max, int32_t& zero);
		static bool GetRelativeAxisRanges(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName, int32_t& min, int32_t& max, int32_t& zero);
		static bool IsSupportedSpecialDevice(uint16_t vendorId, uint16_t productId, mscorlib::System::String* productName);
		static bool cLhhyWBUrKMAjTNaxbkFebxWclzE(uint16_t A_0, uint16_t A_1, mscorlib::System::String* A_2);
		static Rewired_Core::Rewired::HID::SpecialDevices_rFQsNSlLTUfXoSUakERgGAqtZEX* siJPyAKHyxxaRKmIhQaBJdeamNh(uint16_t A_0, uint16_t A_1, mscorlib::System::String* A_2);
		static void _cctor();
	};
}


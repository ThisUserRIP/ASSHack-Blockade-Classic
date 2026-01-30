#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_CultureInfo.h"
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Globalization
{
	struct CultureInfo_Data
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ansi;
		int32_t ebcdic;
		int32_t mac;
		int32_t oem;
		bool right_to_left;
		uint8_t list_sep;
	};
}


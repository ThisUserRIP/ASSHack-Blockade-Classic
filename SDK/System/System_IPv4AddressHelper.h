#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };

namespace System::System
{
	struct IPv4AddressHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* ParseCanonicalName(mscorlib::System::String* str, int32_t start, int32_t end, bool& isLoopback);
		static int32_t ParseHostNumber(mscorlib::System::String* str, int32_t start, int32_t end);
		static bool IsValid(wchar_t* name, int32_t start, int32_t& end, bool allowIPv6, bool notImplicitFile, bool unknownScheme);
		static bool IsValidCanonical(wchar_t* name, int32_t start, int32_t& end, bool allowIPv6, bool notImplicitFile);
		static int64_t ParseNonCanonical(wchar_t* name, int32_t start, int32_t& end, bool notImplicitFile);
		static bool Parse(mscorlib::System::String* name, uint8_t* numbers, int32_t start, int32_t end);
		static bool ParseCanonical(mscorlib::System::String* name, uint8_t* numbers, int32_t start, int32_t end);
	};
}


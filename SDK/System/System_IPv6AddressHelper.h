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
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };

namespace System::System
{
	struct IPv6AddressHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* ParseCanonicalName(mscorlib::System::String* str, int32_t start, bool& isLoopback, mscorlib::System::String& scopeId);
		static mscorlib::System::String* CreateCanonicalName(uint16_t* numbers);
		static mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32> FindCompressionRange(uint16_t* numbers);
		static bool ShouldHaveIpv4Embedded(uint16_t* numbers);
		static bool InternalIsValid(wchar_t* name, int32_t start, int32_t& end, bool validateStrictAddress);
		static bool IsValid(wchar_t* name, int32_t start, int32_t& end);
		static bool IsValidStrict(wchar_t* name, int32_t start, int32_t& end);
		static bool Parse(mscorlib::System::String* address, uint16_t* numbers, int32_t start, mscorlib::System::String& scopeId);
	};
}


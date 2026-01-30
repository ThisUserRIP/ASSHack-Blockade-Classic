#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Guid_GuidStyles.h"
namespace mscorlib::System { struct Guid_GuidResult; };
namespace mscorlib::System { struct Guid_GuidResult; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct IFormatProvider; };

namespace mscorlib::System
{
	struct Guid
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _a;
		int16_t _b;
		int16_t _c;
		uint8_t _d;
		uint8_t _e;
		uint8_t _f;
		uint8_t _g;
		uint8_t _h;
		uint8_t _i;
		uint8_t _j;
		uint8_t _k;
		void _ctor(IL2CPP::Array<uint8_t>* b);
		void _ctor(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
		void _ctor(mscorlib::System::String* g);
		static mscorlib::System::Guid Parse(mscorlib::System::String* input);
		static bool TryParse(mscorlib::System::String* input, mscorlib::System::Guid& result);
		static bool TryParseGuid(mscorlib::System::String* g, mscorlib::System::Guid_GuidStyles flags, mscorlib::System::Guid_GuidResult& result);
		static bool TryParseGuidWithHexPrefix(mscorlib::System::String* guidString, mscorlib::System::Guid_GuidResult& result);
		static bool TryParseGuidWithNoStyle(mscorlib::System::String* guidString, mscorlib::System::Guid_GuidResult& result);
		static bool TryParseGuidWithDashes(mscorlib::System::String* guidString, mscorlib::System::Guid_GuidResult& result);
		static bool StringToShort(mscorlib::System::String* str, int32_t requiredLength, int32_t flags, int16_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToShort(mscorlib::System::String* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int16_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToInt(mscorlib::System::String* str, int32_t requiredLength, int32_t flags, int32_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToInt(mscorlib::System::String* str, int32_t& parsePos, int32_t requiredLength, int32_t flags, int32_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToInt(mscorlib::System::String* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int32_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToLong(mscorlib::System::String* str, int32_t& parsePos, int32_t flags, int64_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static bool StringToLong(mscorlib::System::String* str, int32_t* parsePos, int32_t flags, int64_t& result, mscorlib::System::Guid_GuidResult& parseResult);
		static mscorlib::System::String* EatAllWhitespace(mscorlib::System::String* str);
		static bool IsHexPrefix(mscorlib::System::String* str, int32_t i);
		IL2CPP::Array<uint8_t>* ToByteArray();
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* o);
		bool Equals(mscorlib::System::Guid g);
		int32_t GetResult(uint32_t me, uint32_t them);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(mscorlib::System::Guid value);
		static bool op_Equality(mscorlib::System::Guid a, mscorlib::System::Guid b);
		static bool op_Inequality(mscorlib::System::Guid a, mscorlib::System::Guid b);
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		static wchar_t HexToChar(int32_t a);
		static int32_t HexsToChars(wchar_t* guidChars, int32_t offset, int32_t a, int32_t b);
		static int32_t HexsToChars(wchar_t* guidChars, int32_t offset, int32_t a, int32_t b, bool hex);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Guid NewGuid();
		static void _cctor();
	};
	bool operator==(mscorlib::System::Guid& a, mscorlib::System::Guid& b);
	bool operator!=(mscorlib::System::Guid& a, mscorlib::System::Guid& b);
}


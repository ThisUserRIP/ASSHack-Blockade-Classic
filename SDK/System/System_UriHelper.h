#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UnescapeMode.h"
namespace System::System { struct UriParser; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System::System
{
	struct UriHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* HexUpperChars;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<wchar_t>* EscapeString(mscorlib::System::String* input, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPos, bool isUriString, wchar_t force1, wchar_t force2, wchar_t rsvd);
		static IL2CPP::Array<wchar_t>* EnsureDestinationSize(wchar_t* pStr, IL2CPP::Array<wchar_t>* dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int32_t& destPos, int32_t prevInputPos);
		static IL2CPP::Array<wchar_t>* UnescapeString(mscorlib::System::String* input, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery);
		static IL2CPP::Array<wchar_t>* UnescapeString(wchar_t* pStr, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery);
		static void MatchUTF8Sequence(wchar_t* pDest, IL2CPP::Array<wchar_t>* dest, int32_t& destOffset, IL2CPP::Array<wchar_t>* unescapedChars, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteCount, bool isQuery, bool iriParsing);
		static void EscapeAsciiChar(wchar_t ch, IL2CPP::Array<wchar_t>* to, int32_t& pos);
		static wchar_t EscapedAscii(wchar_t digit, wchar_t next);
		static bool IsNotSafeForUnescape(wchar_t ch);
		static bool IsReservedUnreservedOrHash(wchar_t c);
		static bool IsUnreserved(wchar_t c);
		static bool Is3986Unreserved(wchar_t c);
		static void _cctor();
	};
}


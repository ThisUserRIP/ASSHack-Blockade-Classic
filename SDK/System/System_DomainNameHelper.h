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
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Char.h"

namespace System::System
{
	struct DomainNameHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* ParseCanonicalName(mscorlib::System::String* str, int32_t start, int32_t end, bool& loopback);
		static bool IsValid(wchar_t* name, uint16_t pos, int32_t& returnedEnd, bool& notCanonical, bool notImplicitFile);
		static bool IsValidByIri(wchar_t* name, uint16_t pos, int32_t& returnedEnd, bool& notCanonical, bool notImplicitFile);
		static mscorlib::System::String* IdnEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, bool& atLeastOneValidIdn);
		static mscorlib::System::String* IdnEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, mscorlib::System::String& bidiStrippedHost);
		static bool IsIdnAce(mscorlib::System::String* input, int32_t index);
		static bool IsIdnAce(wchar_t* input, int32_t index);
		static mscorlib::System::String* UnicodeEquivalent(mscorlib::System::String* idnHost, wchar_t* hostname, int32_t start, int32_t end);
		static mscorlib::System::String* UnicodeEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, bool& atLeastOneValidIdn);
		static bool IsASCIILetterOrDigit(wchar_t character, bool& notCanonical);
		static bool IsValidDomainLabelCharacter(wchar_t character, bool& notCanonical);
	};
}


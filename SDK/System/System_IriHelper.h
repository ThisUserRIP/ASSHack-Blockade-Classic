#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_UriComponents.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System
{
	struct IriHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool CheckIriUnicodeRange(wchar_t unicode, bool isQuery);
		static bool CheckIriUnicodeRange(wchar_t highSurr, wchar_t lowSurr, bool& surrogatePair, bool isQuery);
		static bool CheckIsReserved(wchar_t ch, System::UriComponents component);
		static mscorlib::System::String* EscapeUnescapeIri(wchar_t* pInput, int32_t start, int32_t end, System::UriComponents component);
	};
}


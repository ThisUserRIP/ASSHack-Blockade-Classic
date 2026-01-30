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

namespace System::System
{
	struct UncNameHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* ParseCanonicalName(mscorlib::System::String* str, int32_t start, int32_t end, bool& loopback);
		static bool IsValid(wchar_t* name, uint16_t start, int32_t& returnedEnd, bool notImplicitFile);
	};
}


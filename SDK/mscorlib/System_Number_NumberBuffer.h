#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Number.h"
namespace mscorlib::System { struct Number; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Number_NumberBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t* baseAddress;
		wchar_t* digits;
		int32_t precision;
		int32_t scale;
		bool sign;
		void _ctor(uint8_t* stackBuffer);
		uint8_t* PackForNative();
		static void _cctor();
	};
}


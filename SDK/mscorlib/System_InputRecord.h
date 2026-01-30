#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct InputRecord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int16_t EventType;
		bool KeyDown;
		int16_t RepeatCount;
		int16_t VirtualKeyCode;
		int16_t VirtualScanCode;
		wchar_t Character;
		int32_t ControlKeyState;
		int32_t pad1;
		bool pad2;
	};
}


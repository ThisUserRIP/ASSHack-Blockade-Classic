#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Coord.h"
namespace mscorlib::System { struct Coord; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_SmallRect.h"
namespace mscorlib::System { struct SmallRect; };

namespace mscorlib::System
{
	struct ConsoleScreenBufferInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Coord Size;
		mscorlib::System::Coord CursorPosition;
		int16_t Attribute;
		mscorlib::System::SmallRect Window;
		mscorlib::System::Coord MaxWindowSize;
	};
}


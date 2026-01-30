#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_DTSubStringType.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System
{
	struct DTSubString
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* s;
		int32_t index;
		int32_t length;
		mscorlib::System::DTSubStringType type;
		int32_t value;
		wchar_t get_Item(int32_t relativeIndex);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_ConsoleKey.h"
#include "System_ConsoleModifiers.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct ConsoleKeyInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t _keyChar;
		mscorlib::System::ConsoleKey _key;
		mscorlib::System::ConsoleModifiers _mods;
		void _ctor(wchar_t keyChar, mscorlib::System::ConsoleKey key, bool shift, bool alt, bool control);
		wchar_t get_KeyChar();
		mscorlib::System::ConsoleKey get_Key();
		bool Equals(mscorlib::System::Object* value);
		bool Equals(mscorlib::System::ConsoleKeyInfo obj);
		int32_t GetHashCode();
	};
}


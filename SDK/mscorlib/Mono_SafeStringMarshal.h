#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono
{
	struct SafeStringMarshal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* str;
		intptr_t marshaled_string;
		static intptr_t StringToUtf8(mscorlib::System::String* str);
		static void GFree(intptr_t ptr);
		void _ctor(mscorlib::System::String* str);
		intptr_t get_Value();
		void Dispose();
	};
}


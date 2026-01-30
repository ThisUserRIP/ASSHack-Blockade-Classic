#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct Capture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _text;
		int32_t _index;
		int32_t _length;
		void _ctor(mscorlib::System::String* text, int32_t i, int32_t l);
		int32_t get_Index();
		int32_t get_Length();
		mscorlib::System::String* get_Value();
		mscorlib::System::String* ToString();
		mscorlib::System::String* GetOriginalString();
		mscorlib::System::String* GetLeftSubstring();
		mscorlib::System::String* GetRightSubstring();
		void _ctor();
	};
}


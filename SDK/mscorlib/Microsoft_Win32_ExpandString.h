#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Microsoft::Win32
{
	struct ExpandString : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* value;
		void _ctor(mscorlib::System::String* s);
		mscorlib::System::String* ToString();
		mscorlib::System::String* Expand();
	};
}


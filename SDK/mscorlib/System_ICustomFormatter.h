#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct IFormatProvider; };

namespace mscorlib::System
{
	struct ICustomFormatter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Format(mscorlib::System::String* format, mscorlib::System::Object* arg, mscorlib::System::IFormatProvider* formatProvider);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib
{
	struct SR : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* Format(mscorlib::System::String* resourceFormat, mscorlib::System::Object* p1);
		static mscorlib::System::String* Format(mscorlib::System::String* resourceFormat, mscorlib::System::Object* p1, mscorlib::System::Object* p2);
	};
}


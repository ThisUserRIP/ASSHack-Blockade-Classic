#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_SecurityElement.h"
namespace mscorlib::System::Security { struct SecurityElement; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security
{
	struct SecurityElement_SecurityAttribute : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		mscorlib::System::String* _value;
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* value);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Value();
	};
}


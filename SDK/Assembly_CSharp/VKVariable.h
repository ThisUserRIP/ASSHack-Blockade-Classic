#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct VKVariable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _key_k__BackingField;
		mscorlib::System::String* _value_k__BackingField;
		static Assembly_CSharp::VKVariable* Deserialize(mscorlib::System::Object* variable);
		mscorlib::System::String* get_key();
		void set_key(mscorlib::System::String* value);
		mscorlib::System::String* get_value();
		void set_value(mscorlib::System::String* value);
		void _ctor();
	};
}


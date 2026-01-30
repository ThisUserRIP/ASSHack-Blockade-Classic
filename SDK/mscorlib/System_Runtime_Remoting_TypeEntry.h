#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting
{
	struct TypeEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* assembly_name;
		mscorlib::System::String* type_name;
		void _ctor();
		mscorlib::System::String* get_AssemblyName();
		void set_AssemblyName(mscorlib::System::String* value);
		mscorlib::System::String* get_TypeName();
		void set_TypeName(mscorlib::System::String* value);
	};
}


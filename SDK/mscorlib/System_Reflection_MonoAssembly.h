#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeAssembly.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct Module; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct MonoAssembly : mscorlib::System::Reflection::RuntimeAssembly
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* GetType(mscorlib::System::String* name, bool throwOnError, bool ignoreCase);
		mscorlib::System::Reflection::Module* GetModule(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::Reflection::Module*>* GetModules(bool getResourceModules);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct InternalsVisibleToAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _assemblyName;
		bool _allInternalsVisible;
		void _ctor(mscorlib::System::String* assemblyName);
		mscorlib::System::String* get_AssemblyName();
		bool get_AllInternalsVisible();
		void set_AllInternalsVisible(bool value);
	};
}


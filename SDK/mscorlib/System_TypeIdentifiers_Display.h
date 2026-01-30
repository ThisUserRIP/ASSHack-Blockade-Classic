#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TypeNames_ATypeName.h"
#include "System_TypeIdentifiers.h"
namespace mscorlib::System { struct TypeIdentifiers; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct TypeIdentifiers_Display : mscorlib::System::TypeNames_ATypeName
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* displayName;
		mscorlib::System::String* internal_name;
		void _ctor(mscorlib::System::String* displayName);
		mscorlib::System::String* get_DisplayName();
		mscorlib::System::String* get_InternalName();
		mscorlib::System::String* GetInternalName();
	};
}


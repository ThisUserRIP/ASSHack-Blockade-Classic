#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct TypeInformation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* fullTypeName;
		mscorlib::System::String* assemblyString;
		bool hasTypeForwardedFrom;
		mscorlib::System::String* get_FullTypeName();
		mscorlib::System::String* get_AssemblyString();
		bool get_HasTypeForwardedFrom();
		void _ctor(mscorlib::System::String* fullTypeName, mscorlib::System::String* assemblyString, bool hasTypeForwardedFrom);
	};
}


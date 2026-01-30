#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool includeInSchema;
		mscorlib::System::String* ns;
		mscorlib::System::String* typeName;
		bool get_IncludeInSchema();
		mscorlib::System::String* get_Namespace();
		mscorlib::System::String* get_TypeName();
	};
}


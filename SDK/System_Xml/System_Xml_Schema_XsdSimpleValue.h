#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdSimpleValue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* xmlType;
		mscorlib::System::Object* typedValue;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* st, mscorlib::System::Object* value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType();
		mscorlib::System::Object* get_TypedValue();
	};
}


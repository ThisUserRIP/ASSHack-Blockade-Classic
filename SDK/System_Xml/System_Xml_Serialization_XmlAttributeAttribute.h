#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlAttributeAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* attributeName;
		mscorlib::System::String* dataType;
		System_Xml::System::Xml::Schema::XmlSchemaForm form;
		mscorlib::System::String* ns;
		void _ctor(mscorlib::System::String* attributeName);
		mscorlib::System::String* get_AttributeName();
		mscorlib::System::String* get_DataType();
		void set_DataType(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaForm get_Form();
		mscorlib::System::String* get_Namespace();
	};
}


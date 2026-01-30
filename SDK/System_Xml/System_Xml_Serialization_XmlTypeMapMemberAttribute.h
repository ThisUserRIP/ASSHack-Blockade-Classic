#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlTypeMapMember.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaForm.h"
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapMemberAttribute : System_Xml::System::Xml::Serialization::XmlTypeMapMember
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _attributeName;
		mscorlib::System::String* _namespace;
		System_Xml::System::Xml::Schema::XmlSchemaForm _form;
		System_Xml::System::Xml::Serialization::XmlTypeMapping* _mappedType;
		void _ctor();
		mscorlib::System::String* get_AttributeName();
		void set_AttributeName(mscorlib::System::String* value);
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		void set_Form(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* get_MappedType();
		void set_MappedType(System_Xml::System::Xml::Serialization::XmlTypeMapping* value);
	};
}


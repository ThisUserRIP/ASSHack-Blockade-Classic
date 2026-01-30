#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSubstitutionGroup : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* membersList;
		System_Xml::System::Xml::XmlQualifiedName* examplar;
		mscorlib::System::Collections::ArrayList* get_Members();
		System_Xml::System::Xml::XmlQualifiedName* get_Examplar();
		void set_Examplar(System_Xml::System::Xml::XmlQualifiedName* value);
		void _ctor();
	};
}


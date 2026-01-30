#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_FacetsChecker.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct QNameFacetsChecker : System_Xml::System::Xml::Schema::FacetsChecker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* CheckValueFacets(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		mscorlib::System::Exception* CheckValueFacets(System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool MatchEnumeration(mscorlib::System::Object* value, mscorlib::System::Collections::ArrayList* enumeration, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool MatchEnumeration(System_Xml::System::Xml::XmlQualifiedName* value, mscorlib::System::Collections::ArrayList* enumeration);
		void _ctor();
	};
}


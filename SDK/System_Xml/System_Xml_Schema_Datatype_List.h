#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_anySimpleType.h"
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_XmlTokenizedType.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "System_Xml_Schema_RestrictionFlags.h"
namespace mscorlib::System { struct Exception; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_List : System_Xml::System::Xml::Schema::Datatype_anySimpleType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::DatatypeImplementation* itemType;
		int32_t minListSize;
		System_Xml::System::Xml::Schema::XmlValueConverter* CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		void _ctor(System_Xml::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize);
		int32_t Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2);
		mscorlib::System::Type* get_ValueType();
		System_Xml::System::Xml::XmlTokenizedType get_TokenizedType();
		mscorlib::System::Type* get_ListValueType();
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
		System_Xml::System::Xml::Schema::DatatypeImplementation* get_ItemType();
		mscorlib::System::Exception* TryParseValue(mscorlib::System::Object* value, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, mscorlib::System::Object& typedValue);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
	};
}


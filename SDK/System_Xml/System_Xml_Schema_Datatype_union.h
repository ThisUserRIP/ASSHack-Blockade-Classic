#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_anySimpleType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_Schema_XmlTypeCode.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
#include "System_Xml_Schema_RestrictionFlags.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_union : System_Xml::System::Xml::Schema::Datatype_anySimpleType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* types;
		struct StaticFields
		{
			mscorlib::System::Type* atomicValueType;
			mscorlib::System::Type* listValueType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System_Xml::System::Xml::Schema::XmlValueConverter* CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		void _ctor(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* types);
		int32_t Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2);
		mscorlib::System::Type* get_ValueType();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		mscorlib::System::Type* get_ListValueType();
		System_Xml::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* get_BaseMemberTypes();
		bool HasAtomicMembers();
		bool IsUnionBaseOf(System_Xml::System::Xml::Schema::DatatypeImplementation* derivedType);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::Object* value, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		static void _cctor();
	};
}


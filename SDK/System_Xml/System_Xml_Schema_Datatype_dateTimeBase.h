#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_anySimpleType.h"
#include "System_Xml_Schema_XsdDateTimeFlags.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
#include "System_Xml_Schema_RestrictionFlags.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_dateTimeBase : System_Xml::System::Xml::Schema::Datatype_anySimpleType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XsdDateTimeFlags dateTimeFlags;
		struct StaticFields
		{
			mscorlib::System::Type* atomicValueType;
			mscorlib::System::Type* listValueType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System_Xml::System::Xml::Schema::XmlValueConverter* CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		void _ctor(System_Xml::System::Xml::Schema::XsdDateTimeFlags dateTimeFlags);
		mscorlib::System::Type* get_ValueType();
		mscorlib::System::Type* get_ListValueType();
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
		System_Xml::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
		int32_t Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		static void _cctor();
	};
}


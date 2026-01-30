#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XPath_XPathItem.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_TypeCode.h"
#include "System_Xml_Schema_XmlAtomicValue_Union.h"
namespace System_Xml::System::Xml::Schema { struct XmlAtomicValue_Union; };
namespace System_Xml::System::Xml::Schema { struct XmlAtomicValue_NamespacePrefixForQName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlAtomicValue : System_Xml::System::Xml::XPath::XPathItem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaType* xmlType;
		mscorlib::System::Object* objVal;
		mscorlib::System::TypeCode clrType;
		System_Xml::System::Xml::Schema::XmlAtomicValue_Union unionVal;
		System_Xml::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* nsPrefix;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, bool value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, mscorlib::System::DateTime value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, double value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, mscorlib::System::String* value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, mscorlib::System::String* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, mscorlib::System::Object* value);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* System_ICloneable_Clone();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_XmlType();
		mscorlib::System::Type* get_ValueType();
		mscorlib::System::Object* get_TypedValue();
		bool get_ValueAsBoolean();
		mscorlib::System::DateTime get_ValueAsDateTime();
		double get_ValueAsDouble();
		int32_t get_ValueAsInt();
		int64_t get_ValueAsLong();
		mscorlib::System::Object* ValueAs(mscorlib::System::Type* type, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::String* get_Value();
		mscorlib::System::String* ToString();
		mscorlib::System::String* GetPrefixFromQName(mscorlib::System::String* value);
	};
}


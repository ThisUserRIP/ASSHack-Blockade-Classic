#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlNumeric10Converter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::XmlValueConverter* Create(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::String* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value);
		int32_t ToInt32(int64_t value);
		int32_t ToInt32(mscorlib::System::String* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(int32_t value);
		int64_t ToInt64(mscorlib::System::String* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(mscorlib::System::Decimal value);
		mscorlib::System::String* ToString(int32_t value);
		mscorlib::System::String* ToString(int64_t value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Decimal value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int32_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int64_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeTypeWildcardDestination(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeTypeWildcardSource(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
	};
}


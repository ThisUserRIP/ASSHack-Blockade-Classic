#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_DateTimeOffset.h"
namespace mscorlib::System { struct DateTimeOffset; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlDateTimeConverter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::XmlValueConverter* Create(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::DateTimeOffset value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::Object* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::DateTime value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::String* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(mscorlib::System::DateTime value);
		mscorlib::System::String* ToString(mscorlib::System::DateTimeOffset value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::DateTime value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
	};
}


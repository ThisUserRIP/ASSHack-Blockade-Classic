#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlNumeric2Converter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::XmlValueConverter* Create(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		double ToDouble(mscorlib::System::String* value);
		double ToDouble(mscorlib::System::Object* value);
		float ToSingle(double value);
		float ToSingle(mscorlib::System::String* value);
		float ToSingle(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(double value);
		mscorlib::System::String* ToString(float value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(double value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
	};
}


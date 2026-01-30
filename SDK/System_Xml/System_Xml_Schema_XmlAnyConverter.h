#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_DateTimeOffset.h"
namespace mscorlib::System { struct DateTimeOffset; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System_Xml::System::Xml::XPath { struct XPathNavigator; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlAnyConverter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlValueConverter* Item;
			System_Xml::System::Xml::Schema::XmlValueConverter* AnyAtomic;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		bool ToBoolean(mscorlib::System::Object* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::Object* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::Object* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value);
		double ToDouble(mscorlib::System::Object* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		float ToSingle(mscorlib::System::Object* value);
		mscorlib::System::Object* ChangeType(bool value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::DateTime value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::Decimal value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(double value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int32_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int64_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeTypeWildcardDestination(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeTypeWildcardSource(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		System_Xml::System::Xml::XPath::XPathNavigator* ToNavigator(System_Xml::System::Xml::XPath::XPathNavigator* nav);
		static void _cctor();
	};
}


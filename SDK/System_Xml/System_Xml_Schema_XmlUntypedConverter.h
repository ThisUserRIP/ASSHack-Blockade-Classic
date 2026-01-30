#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlListConverter.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
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
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlUntypedConverter : System_Xml::System::Xml::Schema::XmlListConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool allowListToList;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlValueConverter* Untyped;
			System_Xml::System::Xml::Schema::XmlValueConverter* UntypedList;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System_Xml::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);
		bool ToBoolean(mscorlib::System::String* value);
		bool ToBoolean(mscorlib::System::Object* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::Object* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::String* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::Object* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::String* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value);
		double ToDouble(mscorlib::System::String* value);
		double ToDouble(mscorlib::System::Object* value);
		int32_t ToInt32(mscorlib::System::String* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(mscorlib::System::String* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		float ToSingle(mscorlib::System::String* value);
		float ToSingle(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(bool value);
		mscorlib::System::String* ToString(mscorlib::System::DateTime value);
		mscorlib::System::String* ToString(mscorlib::System::DateTimeOffset value);
		mscorlib::System::String* ToString(mscorlib::System::Decimal value);
		mscorlib::System::String* ToString(double value);
		mscorlib::System::String* ToString(int32_t value);
		mscorlib::System::String* ToString(int64_t value);
		mscorlib::System::String* ToString(float value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
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
		mscorlib::System::Object* ChangeListType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		bool SupportsType(mscorlib::System::Type* clrType);
		static void _cctor();
	};
}


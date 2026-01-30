#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_DateTimeOffset.h"
namespace mscorlib::System { struct DateTimeOffset; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlValueConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ToBoolean(int64_t value);
		bool ToBoolean(int32_t value);
		bool ToBoolean(double value);
		bool ToBoolean(mscorlib::System::DateTime value);
		bool ToBoolean(mscorlib::System::String* value);
		bool ToBoolean(mscorlib::System::Object* value);
		int32_t ToInt32(bool value);
		int32_t ToInt32(int64_t value);
		int32_t ToInt32(double value);
		int32_t ToInt32(mscorlib::System::DateTime value);
		int32_t ToInt32(mscorlib::System::String* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(bool value);
		int64_t ToInt64(int32_t value);
		int64_t ToInt64(double value);
		int64_t ToInt64(mscorlib::System::DateTime value);
		int64_t ToInt64(mscorlib::System::String* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::String* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value);
		double ToDouble(bool value);
		double ToDouble(int32_t value);
		double ToDouble(int64_t value);
		double ToDouble(mscorlib::System::DateTime value);
		double ToDouble(mscorlib::System::String* value);
		double ToDouble(mscorlib::System::Object* value);
		float ToSingle(double value);
		float ToSingle(mscorlib::System::String* value);
		float ToSingle(mscorlib::System::Object* value);
		mscorlib::System::DateTime ToDateTime(bool value);
		mscorlib::System::DateTime ToDateTime(int32_t value);
		mscorlib::System::DateTime ToDateTime(int64_t value);
		mscorlib::System::DateTime ToDateTime(double value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::DateTimeOffset value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::Object* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::DateTime value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::String* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(bool value);
		mscorlib::System::String* ToString(int32_t value);
		mscorlib::System::String* ToString(int64_t value);
		mscorlib::System::String* ToString(mscorlib::System::Decimal value);
		mscorlib::System::String* ToString(float value);
		mscorlib::System::String* ToString(double value);
		mscorlib::System::String* ToString(mscorlib::System::DateTime value);
		mscorlib::System::String* ToString(mscorlib::System::DateTimeOffset value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(bool value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int32_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int64_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::Decimal value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(double value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::DateTime value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		void _ctor();
	};
}


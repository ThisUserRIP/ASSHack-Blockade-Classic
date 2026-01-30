#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlValueConverter.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
#include "System_Xml_Schema_XmlTypeCode.h"
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
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_DateTimeOffset.h"
namespace mscorlib::System { struct DateTimeOffset; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace mscorlib::System { struct Exception; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlBaseConverter : System_Xml::System::Xml::Schema::XmlValueConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaType* schemaType;
		System_Xml::System::Xml::Schema::XmlTypeCode typeCode;
		mscorlib::System::Type* clrTypeDefault;
		struct StaticFields
		{
			mscorlib::System::Type* ICollectionType;
			mscorlib::System::Type* IEnumerableType;
			mscorlib::System::Type* IListType;
			mscorlib::System::Type* ObjectArrayType;
			mscorlib::System::Type* StringArrayType;
			mscorlib::System::Type* XmlAtomicValueArrayType;
			mscorlib::System::Type* DecimalType;
			mscorlib::System::Type* Int32Type;
			mscorlib::System::Type* Int64Type;
			mscorlib::System::Type* StringType;
			mscorlib::System::Type* XmlAtomicValueType;
			mscorlib::System::Type* ObjectType;
			mscorlib::System::Type* ByteType;
			mscorlib::System::Type* Int16Type;
			mscorlib::System::Type* SByteType;
			mscorlib::System::Type* UInt16Type;
			mscorlib::System::Type* UInt32Type;
			mscorlib::System::Type* UInt64Type;
			mscorlib::System::Type* XPathItemType;
			mscorlib::System::Type* DoubleType;
			mscorlib::System::Type* SingleType;
			mscorlib::System::Type* DateTimeType;
			mscorlib::System::Type* DateTimeOffsetType;
			mscorlib::System::Type* BooleanType;
			mscorlib::System::Type* ByteArrayType;
			mscorlib::System::Type* XmlQualifiedNameType;
			mscorlib::System::Type* UriType;
			mscorlib::System::Type* TimeSpanType;
			mscorlib::System::Type* XPathNavigatorType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		void _ctor(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		void _ctor(System_Xml::System::Xml::Schema::XmlBaseConverter* converterAtomic);
		void _ctor(System_Xml::System::Xml::Schema::XmlBaseConverter* converterAtomic, mscorlib::System::Type* clrTypeDefault);
		bool ToBoolean(mscorlib::System::DateTime value);
		bool ToBoolean(double value);
		bool ToBoolean(int32_t value);
		bool ToBoolean(int64_t value);
		bool ToBoolean(mscorlib::System::String* value);
		bool ToBoolean(mscorlib::System::Object* value);
		mscorlib::System::DateTime ToDateTime(bool value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::DateTimeOffset value);
		mscorlib::System::DateTime ToDateTime(double value);
		mscorlib::System::DateTime ToDateTime(int32_t value);
		mscorlib::System::DateTime ToDateTime(int64_t value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::Object* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::DateTime value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::String* value);
		mscorlib::System::DateTimeOffset ToDateTimeOffset(mscorlib::System::Object* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::String* value);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value);
		double ToDouble(bool value);
		double ToDouble(mscorlib::System::DateTime value);
		double ToDouble(int32_t value);
		double ToDouble(int64_t value);
		double ToDouble(mscorlib::System::String* value);
		double ToDouble(mscorlib::System::Object* value);
		int32_t ToInt32(bool value);
		int32_t ToInt32(mscorlib::System::DateTime value);
		int32_t ToInt32(double value);
		int32_t ToInt32(int64_t value);
		int32_t ToInt32(mscorlib::System::String* value);
		int32_t ToInt32(mscorlib::System::Object* value);
		int64_t ToInt64(bool value);
		int64_t ToInt64(mscorlib::System::DateTime value);
		int64_t ToInt64(double value);
		int64_t ToInt64(int32_t value);
		int64_t ToInt64(mscorlib::System::String* value);
		int64_t ToInt64(mscorlib::System::Object* value);
		float ToSingle(double value);
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
		mscorlib::System::String* ToString(mscorlib::System::Object* value);
		mscorlib::System::Object* ChangeType(bool value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::DateTime value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::Decimal value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(double value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int32_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(int64_t value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ChangeType(mscorlib::System::String* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		mscorlib::System::String* get_XmlTypeName();
		mscorlib::System::Type* get_DefaultClrType();
		static bool IsDerivedFrom(mscorlib::System::Type* derivedType, mscorlib::System::Type* baseType);
		mscorlib::System::Exception* CreateInvalidClrMappingException(mscorlib::System::Type* sourceType, mscorlib::System::Type* destinationType);
		static mscorlib::System::String* QNameToString(System_Xml::System::Xml::XmlQualifiedName* name);
		mscorlib::System::Object* ChangeListType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		static IL2CPP::Array<uint8_t>* StringToBase64Binary(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToDate(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToDateTime(mscorlib::System::String* value);
		static mscorlib::System::TimeSpan StringToDayTimeDuration(mscorlib::System::String* value);
		static mscorlib::System::TimeSpan StringToDuration(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToGDay(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToGMonth(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToGMonthDay(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToGYear(mscorlib::System::String* value);
		static mscorlib::System::DateTime StringToGYearMonth(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToDateOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToDateTimeOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToGDayOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToGMonthOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToGMonthDayOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToGYearOffset(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToGYearMonthOffset(mscorlib::System::String* value);
		static IL2CPP::Array<uint8_t>* StringToHexBinary(mscorlib::System::String* value);
		static System_Xml::System::Xml::XmlQualifiedName* StringToQName(mscorlib::System::String* value, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		static mscorlib::System::DateTime StringToTime(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset StringToTimeOffset(mscorlib::System::String* value);
		static mscorlib::System::TimeSpan StringToYearMonthDuration(mscorlib::System::String* value);
		static mscorlib::System::String* AnyUriToString(System::System::Uri* value);
		static mscorlib::System::String* Base64BinaryToString(IL2CPP::Array<uint8_t>* value);
		static mscorlib::System::String* DateToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* DateTimeToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* DayTimeDurationToString(mscorlib::System::TimeSpan value);
		static mscorlib::System::String* DurationToString(mscorlib::System::TimeSpan value);
		static mscorlib::System::String* GDayToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* GMonthToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* GMonthDayToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* GYearToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* GYearMonthToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* DateOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* DateTimeOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* GDayOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* GMonthOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* GMonthDayOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* GYearOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* GYearMonthOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* QNameToString(System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		static mscorlib::System::String* TimeToString(mscorlib::System::DateTime value);
		static mscorlib::System::String* TimeOffsetToString(mscorlib::System::DateTimeOffset value);
		static mscorlib::System::String* YearMonthDurationToString(mscorlib::System::TimeSpan value);
		static mscorlib::System::DateTime DateTimeOffsetToDateTime(mscorlib::System::DateTimeOffset value);
		static int32_t DecimalToInt32(mscorlib::System::Decimal value);
		static int64_t DecimalToInt64(mscorlib::System::Decimal value);
		static uint64_t DecimalToUInt64(mscorlib::System::Decimal value);
		static uint8_t Int32ToByte(int32_t value);
		static int16_t Int32ToInt16(int32_t value);
		static int8_t Int32ToSByte(int32_t value);
		static uint16_t Int32ToUInt16(int32_t value);
		static int32_t Int64ToInt32(int64_t value);
		static uint32_t Int64ToUInt32(int64_t value);
		static mscorlib::System::DateTime UntypedAtomicToDateTime(mscorlib::System::String* value);
		static mscorlib::System::DateTimeOffset UntypedAtomicToDateTimeOffset(mscorlib::System::String* value);
		static void _cctor();
	};
}


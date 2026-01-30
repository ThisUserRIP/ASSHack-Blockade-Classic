#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Exception; };
#include "System_Xml_ExceptionType.h"
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Xml_XmlDateTimeSerializationMode.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct ArgumentException; };

namespace System_Xml::System::Xml
{
	struct XmlConvert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::XmlCharType xmlCharType;
			IL2CPP::Array<wchar_t>* crt;
			int32_t c_EncodedCharLength;
			System::System::Text::RegularExpressions::Regex* c_EncodeCharPattern;
			System::System::Text::RegularExpressions::Regex* c_DecodeCharPattern;
			IL2CPP::Array<mscorlib::System::String*>* s_allDateTimeFormats;
			IL2CPP::Array<wchar_t>* WhitespaceChars;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* EncodeName(mscorlib::System::String* name);
		static mscorlib::System::String* EncodeLocalName(mscorlib::System::String* name);
		static mscorlib::System::String* DecodeName(mscorlib::System::String* name);
		static mscorlib::System::String* EncodeName(mscorlib::System::String* name, bool first, bool local);
		static int32_t FromHex(wchar_t digit);
		static IL2CPP::Array<uint8_t>* FromBinHexString(mscorlib::System::String* s);
		static IL2CPP::Array<uint8_t>* FromBinHexString(mscorlib::System::String* s, bool allowOddCount);
		static mscorlib::System::String* ToBinHexString(IL2CPP::Array<uint8_t>* inArray);
		static mscorlib::System::String* VerifyName(mscorlib::System::String* name);
		static mscorlib::System::Exception* TryVerifyName(mscorlib::System::String* name);
		static mscorlib::System::String* VerifyQName(mscorlib::System::String* name, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::String* VerifyNCName(mscorlib::System::String* name);
		static mscorlib::System::String* VerifyNCName(mscorlib::System::String* name, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::Exception* TryVerifyNCName(mscorlib::System::String* name);
		static mscorlib::System::String* VerifyTOKEN(mscorlib::System::String* token);
		static mscorlib::System::Exception* TryVerifyTOKEN(mscorlib::System::String* token);
		static mscorlib::System::Exception* TryVerifyNMTOKEN(mscorlib::System::String* name);
		static mscorlib::System::Exception* TryVerifyNormalizedString(mscorlib::System::String* str);
		static mscorlib::System::String* ToString(bool value);
		static mscorlib::System::String* ToString(mscorlib::System::Decimal value);
		static mscorlib::System::String* ToString(int8_t value);
		static mscorlib::System::String* ToString(int16_t value);
		static mscorlib::System::String* ToString(int32_t value);
		static mscorlib::System::String* ToString(int64_t value);
		static mscorlib::System::String* ToString(uint8_t value);
		static mscorlib::System::String* ToString(uint16_t value);
		static mscorlib::System::String* ToString(uint32_t value);
		static mscorlib::System::String* ToString(uint64_t value);
		static mscorlib::System::String* ToString(float value);
		static mscorlib::System::String* ToString(double value);
		static mscorlib::System::String* ToString(mscorlib::System::DateTime value, System_Xml::System::Xml::XmlDateTimeSerializationMode dateTimeOption);
		static mscorlib::System::String* ToString(mscorlib::System::Guid value);
		static bool ToBoolean(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToBoolean(mscorlib::System::String* s, bool& result);
		static wchar_t ToChar(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToChar(mscorlib::System::String* s, wchar_t& result);
		static mscorlib::System::Decimal ToDecimal(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToDecimal(mscorlib::System::String* s, mscorlib::System::Decimal& result);
		static mscorlib::System::Decimal ToInteger(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToInteger(mscorlib::System::String* s, mscorlib::System::Decimal& result);
		static int8_t ToSByte(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToSByte(mscorlib::System::String* s, int8_t& result);
		static int16_t ToInt16(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToInt16(mscorlib::System::String* s, int16_t& result);
		static int32_t ToInt32(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToInt32(mscorlib::System::String* s, int32_t& result);
		static int64_t ToInt64(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToInt64(mscorlib::System::String* s, int64_t& result);
		static uint8_t ToByte(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToByte(mscorlib::System::String* s, uint8_t& result);
		static uint16_t ToUInt16(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToUInt16(mscorlib::System::String* s, uint16_t& result);
		static uint32_t ToUInt32(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToUInt32(mscorlib::System::String* s, uint32_t& result);
		static uint64_t ToUInt64(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToUInt64(mscorlib::System::String* s, uint64_t& result);
		static float ToSingle(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToSingle(mscorlib::System::String* s, float& result);
		static double ToDouble(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToDouble(mscorlib::System::String* s, double& result);
		static double ToXPathDouble(mscorlib::System::Object* o);
		static mscorlib::System::Exception* TryToTimeSpan(mscorlib::System::String* s, mscorlib::System::TimeSpan& result);
		static IL2CPP::Array<mscorlib::System::String*>* get_AllDateTimeFormats();
		static void CreateAllDateTimeFormats();
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* s);
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats);
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* s, System_Xml::System::Xml::XmlDateTimeSerializationMode dateTimeOption);
		static mscorlib::System::Guid ToGuid(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToGuid(mscorlib::System::String* s, mscorlib::System::Guid& result);
		static mscorlib::System::DateTime SwitchToLocalTime(mscorlib::System::DateTime value);
		static mscorlib::System::DateTime SwitchToUtcTime(mscorlib::System::DateTime value);
		static System::System::Uri* ToUri(mscorlib::System::String* s);
		static mscorlib::System::Exception* TryToUri(mscorlib::System::String* s, System::System::Uri& result);
		static bool StrEqual(IL2CPP::Array<wchar_t>* chars, int32_t strPos1, int32_t strLen1, mscorlib::System::String* str2);
		static mscorlib::System::String* TrimString(mscorlib::System::String* value);
		static mscorlib::System::String* TrimStringStart(mscorlib::System::String* value);
		static mscorlib::System::String* TrimStringEnd(mscorlib::System::String* value);
		static IL2CPP::Array<mscorlib::System::String*>* SplitString(mscorlib::System::String* value);
		static bool IsNegativeZero(double value);
		static int64_t DoubleToInt64Bits(double value);
		static mscorlib::System::Exception* CreateException(mscorlib::System::String* res, mscorlib::System::String* arg, System_Xml::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);
		static mscorlib::System::Exception* CreateException(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::Exception* CreateException(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);
		static mscorlib::System::Exception* CreateInvalidSurrogatePairException(wchar_t low, wchar_t hi);
		static mscorlib::System::Exception* CreateInvalidSurrogatePairException(wchar_t low, wchar_t hi, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::Exception* CreateInvalidSurrogatePairException(wchar_t low, wchar_t hi, System_Xml::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);
		static mscorlib::System::Exception* CreateInvalidHighSurrogateCharException(wchar_t hi);
		static mscorlib::System::Exception* CreateInvalidHighSurrogateCharException(wchar_t hi, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::Exception* CreateInvalidHighSurrogateCharException(wchar_t hi, System_Xml::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);
		static mscorlib::System::Exception* CreateInvalidCharException(wchar_t invChar, wchar_t nextChar);
		static mscorlib::System::Exception* CreateInvalidCharException(wchar_t invChar, wchar_t nextChar, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::Exception* CreateInvalidNameCharException(mscorlib::System::String* name, int32_t index, System_Xml::System::Xml::ExceptionType exceptionType);
		static mscorlib::System::ArgumentException* CreateInvalidNameArgumentException(mscorlib::System::String* name, mscorlib::System::String* argumentName);
		static void _cctor();
	};
}


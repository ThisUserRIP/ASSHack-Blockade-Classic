#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct RuntimeType; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Object; };
#include "System_TypeCode.h"
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System { struct IConvertible; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Base64FormattingOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Convert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::RuntimeType*>* ConvertTypes;
			mscorlib::System::RuntimeType* EnumType;
			IL2CPP::Array<wchar_t>* base64Table;
			mscorlib::System::Object* DBNull;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::TypeCode GetTypeCode(mscorlib::System::Object* value);
		static mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::TypeCode typeCode, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Object* DefaultToType(mscorlib::System::IConvertible* value, mscorlib::System::Type* targetType, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* conversionType);
		static mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* conversionType, mscorlib::System::IFormatProvider* provider);
		static bool ToBoolean(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static bool ToBoolean(int8_t value);
		static bool ToBoolean(uint8_t value);
		static bool ToBoolean(int16_t value);
		static bool ToBoolean(uint16_t value);
		static bool ToBoolean(int32_t value);
		static bool ToBoolean(uint32_t value);
		static bool ToBoolean(int64_t value);
		static bool ToBoolean(uint64_t value);
		static bool ToBoolean(mscorlib::System::String* value);
		static bool ToBoolean(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static bool ToBoolean(float value);
		static bool ToBoolean(double value);
		static bool ToBoolean(mscorlib::System::Decimal value);
		static wchar_t ToChar(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static wchar_t ToChar(int8_t value);
		static wchar_t ToChar(uint8_t value);
		static wchar_t ToChar(int16_t value);
		static wchar_t ToChar(uint16_t value);
		static wchar_t ToChar(int32_t value);
		static wchar_t ToChar(uint32_t value);
		static wchar_t ToChar(int64_t value);
		static wchar_t ToChar(uint64_t value);
		static wchar_t ToChar(mscorlib::System::String* value);
		static wchar_t ToChar(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static int8_t ToSByte(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static int8_t ToSByte(bool value);
		static int8_t ToSByte(wchar_t value);
		static int8_t ToSByte(uint8_t value);
		static int8_t ToSByte(int16_t value);
		static int8_t ToSByte(uint16_t value);
		static int8_t ToSByte(int32_t value);
		static int8_t ToSByte(uint32_t value);
		static int8_t ToSByte(int64_t value);
		static int8_t ToSByte(uint64_t value);
		static int8_t ToSByte(float value);
		static int8_t ToSByte(double value);
		static int8_t ToSByte(mscorlib::System::Decimal value);
		static int8_t ToSByte(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static uint8_t ToByte(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static uint8_t ToByte(bool value);
		static uint8_t ToByte(wchar_t value);
		static uint8_t ToByte(int8_t value);
		static uint8_t ToByte(int16_t value);
		static uint8_t ToByte(uint16_t value);
		static uint8_t ToByte(int32_t value);
		static uint8_t ToByte(uint32_t value);
		static uint8_t ToByte(int64_t value);
		static uint8_t ToByte(uint64_t value);
		static uint8_t ToByte(float value);
		static uint8_t ToByte(double value);
		static uint8_t ToByte(mscorlib::System::Decimal value);
		static uint8_t ToByte(mscorlib::System::String* value);
		static uint8_t ToByte(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static int16_t ToInt16(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static int16_t ToInt16(bool value);
		static int16_t ToInt16(wchar_t value);
		static int16_t ToInt16(int8_t value);
		static int16_t ToInt16(uint8_t value);
		static int16_t ToInt16(uint16_t value);
		static int16_t ToInt16(int32_t value);
		static int16_t ToInt16(uint32_t value);
		static int16_t ToInt16(int64_t value);
		static int16_t ToInt16(uint64_t value);
		static int16_t ToInt16(float value);
		static int16_t ToInt16(double value);
		static int16_t ToInt16(mscorlib::System::Decimal value);
		static int16_t ToInt16(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static uint16_t ToUInt16(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static uint16_t ToUInt16(bool value);
		static uint16_t ToUInt16(wchar_t value);
		static uint16_t ToUInt16(int8_t value);
		static uint16_t ToUInt16(uint8_t value);
		static uint16_t ToUInt16(int16_t value);
		static uint16_t ToUInt16(int32_t value);
		static uint16_t ToUInt16(uint32_t value);
		static uint16_t ToUInt16(int64_t value);
		static uint16_t ToUInt16(uint64_t value);
		static uint16_t ToUInt16(float value);
		static uint16_t ToUInt16(double value);
		static uint16_t ToUInt16(mscorlib::System::Decimal value);
		static uint16_t ToUInt16(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static int32_t ToInt32(mscorlib::System::Object* value);
		static int32_t ToInt32(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static int32_t ToInt32(bool value);
		static int32_t ToInt32(wchar_t value);
		static int32_t ToInt32(int8_t value);
		static int32_t ToInt32(uint8_t value);
		static int32_t ToInt32(int16_t value);
		static int32_t ToInt32(uint16_t value);
		static int32_t ToInt32(uint32_t value);
		static int32_t ToInt32(int64_t value);
		static int32_t ToInt32(uint64_t value);
		static int32_t ToInt32(float value);
		static int32_t ToInt32(double value);
		static int32_t ToInt32(mscorlib::System::Decimal value);
		static int32_t ToInt32(mscorlib::System::String* value);
		static int32_t ToInt32(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static uint32_t ToUInt32(mscorlib::System::Object* value);
		static uint32_t ToUInt32(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static uint32_t ToUInt32(bool value);
		static uint32_t ToUInt32(wchar_t value);
		static uint32_t ToUInt32(int8_t value);
		static uint32_t ToUInt32(uint8_t value);
		static uint32_t ToUInt32(int16_t value);
		static uint32_t ToUInt32(uint16_t value);
		static uint32_t ToUInt32(int32_t value);
		static uint32_t ToUInt32(int64_t value);
		static uint32_t ToUInt32(uint64_t value);
		static uint32_t ToUInt32(float value);
		static uint32_t ToUInt32(double value);
		static uint32_t ToUInt32(mscorlib::System::Decimal value);
		static uint32_t ToUInt32(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static int64_t ToInt64(mscorlib::System::Object* value);
		static int64_t ToInt64(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static int64_t ToInt64(bool value);
		static int64_t ToInt64(wchar_t value);
		static int64_t ToInt64(int8_t value);
		static int64_t ToInt64(uint8_t value);
		static int64_t ToInt64(int16_t value);
		static int64_t ToInt64(uint16_t value);
		static int64_t ToInt64(int32_t value);
		static int64_t ToInt64(uint32_t value);
		static int64_t ToInt64(uint64_t value);
		static int64_t ToInt64(float value);
		static int64_t ToInt64(double value);
		static int64_t ToInt64(mscorlib::System::Decimal value);
		static int64_t ToInt64(mscorlib::System::String* value);
		static int64_t ToInt64(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static uint64_t ToUInt64(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static uint64_t ToUInt64(bool value);
		static uint64_t ToUInt64(wchar_t value);
		static uint64_t ToUInt64(int8_t value);
		static uint64_t ToUInt64(uint8_t value);
		static uint64_t ToUInt64(int16_t value);
		static uint64_t ToUInt64(uint16_t value);
		static uint64_t ToUInt64(int32_t value);
		static uint64_t ToUInt64(uint32_t value);
		static uint64_t ToUInt64(int64_t value);
		static uint64_t ToUInt64(float value);
		static uint64_t ToUInt64(double value);
		static uint64_t ToUInt64(mscorlib::System::Decimal value);
		static uint64_t ToUInt64(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static float ToSingle(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static float ToSingle(int8_t value);
		static float ToSingle(uint8_t value);
		static float ToSingle(int16_t value);
		static float ToSingle(uint16_t value);
		static float ToSingle(int32_t value);
		static float ToSingle(uint32_t value);
		static float ToSingle(int64_t value);
		static float ToSingle(uint64_t value);
		static float ToSingle(double value);
		static float ToSingle(mscorlib::System::Decimal value);
		static float ToSingle(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static float ToSingle(bool value);
		static double ToDouble(mscorlib::System::Object* value);
		static double ToDouble(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static double ToDouble(int8_t value);
		static double ToDouble(uint8_t value);
		static double ToDouble(int16_t value);
		static double ToDouble(uint16_t value);
		static double ToDouble(int32_t value);
		static double ToDouble(uint32_t value);
		static double ToDouble(int64_t value);
		static double ToDouble(uint64_t value);
		static double ToDouble(float value);
		static double ToDouble(mscorlib::System::Decimal value);
		static double ToDouble(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static double ToDouble(bool value);
		static mscorlib::System::Decimal ToDecimal(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Decimal ToDecimal(int8_t value);
		static mscorlib::System::Decimal ToDecimal(uint8_t value);
		static mscorlib::System::Decimal ToDecimal(int16_t value);
		static mscorlib::System::Decimal ToDecimal(uint16_t value);
		static mscorlib::System::Decimal ToDecimal(int32_t value);
		static mscorlib::System::Decimal ToDecimal(uint32_t value);
		static mscorlib::System::Decimal ToDecimal(int64_t value);
		static mscorlib::System::Decimal ToDecimal(uint64_t value);
		static mscorlib::System::Decimal ToDecimal(float value);
		static mscorlib::System::Decimal ToDecimal(double value);
		static mscorlib::System::Decimal ToDecimal(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Decimal ToDecimal(bool value);
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value);
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(mscorlib::System::Object* value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(wchar_t value);
		static mscorlib::System::String* ToString(wchar_t value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(int32_t value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(int64_t value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(uint64_t value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(double value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(mscorlib::System::Decimal value, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(mscorlib::System::DateTime value, mscorlib::System::IFormatProvider* provider);
		static uint8_t ToByte(mscorlib::System::String* value, int32_t fromBase);
		static int8_t ToSByte(mscorlib::System::String* value, int32_t fromBase);
		static int16_t ToInt16(mscorlib::System::String* value, int32_t fromBase);
		static uint16_t ToUInt16(mscorlib::System::String* value, int32_t fromBase);
		static int32_t ToInt32(mscorlib::System::String* value, int32_t fromBase);
		static uint32_t ToUInt32(mscorlib::System::String* value, int32_t fromBase);
		static int64_t ToInt64(mscorlib::System::String* value, int32_t fromBase);
		static uint64_t ToUInt64(mscorlib::System::String* value, int32_t fromBase);
		static mscorlib::System::String* ToString(uint8_t value, int32_t toBase);
		static mscorlib::System::String* ToString(int32_t value, int32_t toBase);
		static mscorlib::System::String* ToString(int64_t value, int32_t toBase);
		static mscorlib::System::String* ToBase64String(IL2CPP::Array<uint8_t>* inArray);
		static mscorlib::System::String* ToBase64String(IL2CPP::Array<uint8_t>* inArray, int32_t offset, int32_t length);
		static mscorlib::System::String* ToBase64String(IL2CPP::Array<uint8_t>* inArray, int32_t offset, int32_t length, mscorlib::System::Base64FormattingOptions options);
		static int32_t ToBase64CharArray(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t length, IL2CPP::Array<wchar_t>* outArray, int32_t offsetOut);
		static int32_t ToBase64CharArray(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t length, IL2CPP::Array<wchar_t>* outArray, int32_t offsetOut, mscorlib::System::Base64FormattingOptions options);
		static int32_t ConvertToBase64Array(wchar_t* outChars, uint8_t* inData, int32_t offset, int32_t length, bool insertLineBreaks);
		static int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);
		static IL2CPP::Array<uint8_t>* FromBase64String(mscorlib::System::String* s);
		static IL2CPP::Array<uint8_t>* FromBase64CharArray(IL2CPP::Array<wchar_t>* inArray, int32_t offset, int32_t length);
		static IL2CPP::Array<uint8_t>* FromBase64CharPtr(wchar_t* inputPtr, int32_t inputLength);
		static int32_t FromBase64_Decode(wchar_t* startInputPtr, int32_t inputLength, uint8_t* startDestPtr, int32_t destLength);
		static int32_t FromBase64_ComputeResultLength(wchar_t* inputPtr, int32_t inputLength);
		static void _cctor();
	};
}


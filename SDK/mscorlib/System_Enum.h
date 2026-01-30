#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ValueType.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Enum_ValuesAndNames; };
namespace mscorlib::System { struct RuntimeType; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct Enum_EnumResult; };
namespace mscorlib::System { struct Enum_EnumResult; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_TypeCode.h"
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Enum : mscorlib::System::ValueType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* enumSeperatorCharArray;
			mscorlib::System::String* enumSeperator;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Enum_ValuesAndNames* GetCachedValuesAndNames(mscorlib::System::RuntimeType* enumType, bool getNames);
		static mscorlib::System::String* InternalFormattedHexString(mscorlib::System::Object* value);
		static mscorlib::System::String* InternalFormat(mscorlib::System::RuntimeType* eT, mscorlib::System::Object* value);
		static mscorlib::System::String* InternalFlagsFormat(mscorlib::System::RuntimeType* eT, mscorlib::System::Object* value);
		static uint64_t ToUInt64(mscorlib::System::Object* value);
		static int32_t InternalCompareTo(mscorlib::System::Object* o1, mscorlib::System::Object* o2);
		static mscorlib::System::RuntimeType* InternalGetUnderlyingType(mscorlib::System::RuntimeType* enumType);
		static bool GetEnumValuesAndNames(mscorlib::System::RuntimeType* enumType, IL2CPP::Array<uint64_t>& values, IL2CPP::Array<mscorlib::System::String*>& names);
		static mscorlib::System::Object* InternalBoxEnum(mscorlib::System::RuntimeType* enumType, int64_t value);
		template <typename TEnum> static bool TryParse(mscorlib::System::String* value, bool ignoreCase, TEnum& result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Boolean", GetGenericTypeName<TEnum>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TEnum::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)value;
			params[1] = (intptr_t)&ignoreCase;
			params[2] = (intptr_t)&result;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static mscorlib::System::Object* Parse(mscorlib::System::Type* enumType, mscorlib::System::String* value);
		static mscorlib::System::Object* Parse(mscorlib::System::Type* enumType, mscorlib::System::String* value, bool ignoreCase);
		static bool TryParseEnum(mscorlib::System::Type* enumType, mscorlib::System::String* value, bool ignoreCase, mscorlib::System::Enum_EnumResult& parseResult);
		static mscorlib::System::Type* GetUnderlyingType(mscorlib::System::Type* enumType);
		static mscorlib::System::Array* GetValues(mscorlib::System::Type* enumType);
		static IL2CPP::Array<uint64_t>* InternalGetValues(mscorlib::System::RuntimeType* enumType);
		static mscorlib::System::String* GetName(mscorlib::System::Type* enumType, mscorlib::System::Object* value);
		static IL2CPP::Array<mscorlib::System::String*>* GetNames(mscorlib::System::Type* enumType);
		static IL2CPP::Array<mscorlib::System::String*>* InternalGetNames(mscorlib::System::RuntimeType* enumType);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, mscorlib::System::Object* value);
		static bool IsDefined(mscorlib::System::Type* enumType, mscorlib::System::Object* value);
		static mscorlib::System::String* Format(mscorlib::System::Type* enumType, mscorlib::System::Object* value, mscorlib::System::String* format);
		mscorlib::System::Object* get_value();
		mscorlib::System::Object* GetValue();
		bool InternalHasFlag(mscorlib::System::Enum* flags);
		int32_t get_hashcode();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
		int32_t CompareTo(mscorlib::System::Object* target);
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		bool HasFlag(mscorlib::System::Enum* flag);
		mscorlib::System::TypeCode GetTypeCode();
		bool System_IConvertible_ToBoolean(mscorlib::System::IFormatProvider* provider);
		wchar_t System_IConvertible_ToChar(mscorlib::System::IFormatProvider* provider);
		int8_t System_IConvertible_ToSByte(mscorlib::System::IFormatProvider* provider);
		uint8_t System_IConvertible_ToByte(mscorlib::System::IFormatProvider* provider);
		int16_t System_IConvertible_ToInt16(mscorlib::System::IFormatProvider* provider);
		uint16_t System_IConvertible_ToUInt16(mscorlib::System::IFormatProvider* provider);
		int32_t System_IConvertible_ToInt32(mscorlib::System::IFormatProvider* provider);
		uint32_t System_IConvertible_ToUInt32(mscorlib::System::IFormatProvider* provider);
		int64_t System_IConvertible_ToInt64(mscorlib::System::IFormatProvider* provider);
		uint64_t System_IConvertible_ToUInt64(mscorlib::System::IFormatProvider* provider);
		float System_IConvertible_ToSingle(mscorlib::System::IFormatProvider* provider);
		double System_IConvertible_ToDouble(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Decimal System_IConvertible_ToDecimal(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::DateTime System_IConvertible_ToDateTime(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* System_IConvertible_ToType(mscorlib::System::Type* type, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, int8_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, int16_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, int32_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, uint8_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, uint16_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, uint32_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, int64_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, uint64_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, wchar_t value);
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* enumType, bool value);
		void _ctor();
		static void _cctor();
	};
}


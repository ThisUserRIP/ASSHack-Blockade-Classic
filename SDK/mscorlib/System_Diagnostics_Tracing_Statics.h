#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_TraceLoggingDataType.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Diagnostics_Tracing_EventFieldFormat.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingTypeInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Diagnostics::Tracing { template <typename DataType> struct TraceLoggingTypeInfo_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct Statics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType IntPtrType;
			mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType UIntPtrType;
			mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType HexIntPtrType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* MetadataForString(mscorlib::System::String* name, int32_t prefixSize, int32_t suffixSize, int32_t additionalSize);
		static void EncodeTags(int32_t tags, int32_t& pos, IL2CPP::Array<uint8_t>* metadata);
		static uint8_t Combine(int32_t settingValue, uint8_t defaultValue);
		static int32_t Combine(int32_t settingValue1, int32_t settingValue2);
		static void CheckName(mscorlib::System::String* name);
		static bool ShouldOverrideFieldName(mscorlib::System::String* fieldName);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType MakeDataType(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType baseType, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType Format8(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType Format16(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType Format32(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType Format64(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType FormatPtr(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* parameters);
		static bool IsValueType(mscorlib::System::Type* type);
		static bool IsEnum(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* GetProperties(mscorlib::System::Type* type);
		static mscorlib::System::Reflection::MethodInfo* GetGetMethod(mscorlib::System::Reflection::PropertyInfo* propInfo);
		static mscorlib::System::Reflection::MethodInfo* GetDeclaredStaticMethod(mscorlib::System::Type* declaringType, mscorlib::System::String* name);
		static bool HasCustomAttribute(mscorlib::System::Reflection::PropertyInfo* propInfo, mscorlib::System::Type* attributeType);
		template <typename AttributeType> static AttributeType* GetCustomAttribute(mscorlib::System::Reflection::PropertyInfo* propInfo)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.PropertyInfo" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = AttributeType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)propInfo;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<AttributeType>(returnValue);;
		}
		template <typename AttributeType> static AttributeType* GetCustomAttribute(mscorlib::System::Type* type)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Type" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = AttributeType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)type;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<AttributeType>(returnValue);;
		}
		static IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments(mscorlib::System::Type* type);
		static mscorlib::System::Type* FindEnumerableElementType(mscorlib::System::Type* type);
		static bool IsGenericMatch(mscorlib::System::Type* type, mscorlib::System::Object* openType);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* delegateType, mscorlib::System::Reflection::MethodInfo* methodInfo);
		static mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo* GetTypeInfoInstance(mscorlib::System::Type* dataType, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck);
		template <typename DataType> static mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* CreateDefaultTypeInfo(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDefaultTypeInfo", std::vector<std::string> { "System.Collections.Generic.List`1<System.Type>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = DataType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)recursionCheck;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*)returnValue;
		}
		static void _cctor();
	};
}


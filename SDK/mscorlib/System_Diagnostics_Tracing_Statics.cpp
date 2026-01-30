#include "System_Diagnostics_Tracing_Statics.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::Statics::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "Statics");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::Statics::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Diagnostics::Tracing::Statics::MetadataForString(mscorlib::System::String* name, int32_t prefixSize, int32_t suffixSize, int32_t additionalSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MetadataForString", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&prefixSize;
	params[2] = (intptr_t)&suffixSize;
	params[3] = (intptr_t)&additionalSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::Statics::EncodeTags(int32_t tags, int32_t& pos, IL2CPP::Array<uint8_t>* metadata)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeTags", std::vector<std::string> { "System.Int32", "System.Int32&", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&tags;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)metadata;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint8_t mscorlib::System::Diagnostics::Tracing::Statics::Combine(int32_t settingValue, uint8_t defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Combine", std::vector<std::string> { "System.Int32", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&settingValue;
	params[1] = (intptr_t)&defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Diagnostics::Tracing::Statics::Combine(int32_t settingValue1, int32_t settingValue2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Combine", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&settingValue1;
	params[1] = (intptr_t)&settingValue2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::Statics::CheckName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::Statics::ShouldOverrideFieldName(mscorlib::System::String* fieldName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldOverrideFieldName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fieldName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::MakeDataType(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType baseType, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeDataType", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingDataType", "System.Diagnostics.Tracing.EventFieldFormat" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&baseType;
	params[1] = (intptr_t)&format;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::Format8(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format8", std::vector<std::string> { "System.Diagnostics.Tracing.EventFieldFormat", "System.Diagnostics.Tracing.TraceLoggingDataType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&native;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::Format16(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format16", std::vector<std::string> { "System.Diagnostics.Tracing.EventFieldFormat", "System.Diagnostics.Tracing.TraceLoggingDataType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&native;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::Format32(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format32", std::vector<std::string> { "System.Diagnostics.Tracing.EventFieldFormat", "System.Diagnostics.Tracing.TraceLoggingDataType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&native;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::Format64(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format64", std::vector<std::string> { "System.Diagnostics.Tracing.EventFieldFormat", "System.Diagnostics.Tracing.TraceLoggingDataType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&native;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType mscorlib::System::Diagnostics::Tracing::Statics::FormatPtr(mscorlib::System::Diagnostics::Tracing::EventFieldFormat format, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType native)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatPtr", std::vector<std::string> { "System.Diagnostics.Tracing.EventFieldFormat", "System.Diagnostics.Tracing.TraceLoggingDataType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&native;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType>(*(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Diagnostics::Tracing::Statics::CreateInstance(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Type", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::Statics::IsValueType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValueType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::System::Diagnostics::Tracing::Statics::IsEnum(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnum", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* mscorlib::System::Diagnostics::Tracing::Statics::GetProperties(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperties", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Diagnostics::Tracing::Statics::GetGetMethod(mscorlib::System::Reflection::PropertyInfo* propInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGetMethod", std::vector<std::string> { "System.Reflection.PropertyInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)propInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Diagnostics::Tracing::Statics::GetDeclaredStaticMethod(mscorlib::System::Type* declaringType, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDeclaredStaticMethod", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)declaringType;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::Statics::HasCustomAttribute(mscorlib::System::Reflection::PropertyInfo* propInfo, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasCustomAttribute", std::vector<std::string> { "System.Reflection.PropertyInfo", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)propInfo;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
IL2CPP::Array<mscorlib::System::Type*>* mscorlib::System::Diagnostics::Tracing::Statics::GetGenericArguments(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGenericArguments", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::Statics::FindEnumerableElementType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindEnumerableElementType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::Statics::IsGenericMatch(mscorlib::System::Type* type, mscorlib::System::Object* openType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGenericMatch", std::vector<std::string> { "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)openType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::Delegate* mscorlib::System::Diagnostics::Tracing::Statics::CreateDelegate(mscorlib::System::Type* delegateType, mscorlib::System::Reflection::MethodInfo* methodInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)delegateType;
	params[1] = (intptr_t)methodInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo* mscorlib::System::Diagnostics::Tracing::Statics::GetTypeInfoInstance(mscorlib::System::Type* dataType, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInfoInstance", std::vector<std::string> { "System.Type", "System.Collections.Generic.List`1<System.Type>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dataType;
	params[1] = (intptr_t)recursionCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::Statics::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

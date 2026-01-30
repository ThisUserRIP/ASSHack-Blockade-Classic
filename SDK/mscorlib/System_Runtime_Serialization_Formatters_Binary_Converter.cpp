#include "System_Runtime_Serialization_Formatters_Binary_Converter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "Converter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToCode(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToCode", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(*(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::IsWriteAsByteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWriteAsByteArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
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
int32_t mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::TypeLength(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeLength", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
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
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToArrayType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToArrayType", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::InitTypeA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitTypeA");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::InitArrayTypeA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitArrayTypeA");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToType", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Array* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::CreatePrimitiveArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePrimitiveArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&code;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Array*)returnValue;
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::IsPrimitiveArray(mscorlib::System::Type* type, mscorlib::System::Object& typeInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrimitiveArray", std::vector<std::string> { "System.Type", "System.Object&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&typeInformation;
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::InitValueA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitValueA");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToComType(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToComType", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::InitTypeCodeA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitTypeCodeA");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TypeCode mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToTypeCode(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToTypeCode", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&code;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TypeCode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TypeCode));
		return ret;
	}
	return static_cast<mscorlib::System::TypeCode>(*(mscorlib::System::TypeCode*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::InitCodeA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCodeA");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::ToPrimitiveTypeEnum(mscorlib::System::TypeCode typeCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToPrimitiveTypeEnum", std::vector<std::string> { "System.TypeCode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&typeCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(*(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::FromString(mscorlib::System::String* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromString", std::vector<std::string> { "System.String", "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&code;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::Converter::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Runtime_Serialization_Formatters_Binary_BinaryConverter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::String* typeName, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Object& typeInformation, int32_t& assemId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBinaryTypeInfo", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.String", "System.Runtime.Serialization.Formatters.Binary.ObjectWriter", "System.Object&", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)objectInfo;
	params[2] = (intptr_t)typeName;
	params[3] = (intptr_t)objectWriter;
	params[4] = (intptr_t)&typeInformation;
	params[5] = (intptr_t)&assemId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(*(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo(mscorlib::System::Type* type, mscorlib::System::Object& typeInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParserBinaryTypeInfo", std::vector<std::string> { "System.Type", "System.Object&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&typeInformation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(*(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Object* typeInformation, int32_t assemId, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteTypeInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum", "System.Object", "System.Int32", "System.Runtime.Serialization.Formatters.Binary.__BinaryWriter" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&binaryTypeEnum;
	params[1] = (intptr_t)typeInformation;
	params[2] = (intptr_t)&assemId;
	params[3] = (intptr_t)sout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, int32_t& assemId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadTypeInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum", "System.Runtime.Serialization.Formatters.Binary.__BinaryParser", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&binaryTypeEnum;
	params[1] = (intptr_t)input;
	params[2] = (intptr_t)&assemId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Object* typeInformation, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& primitiveTypeEnum, mscorlib::System::String& typeString, mscorlib::System::Type& type, bool& isVariant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeFromInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum", "System.Object", "System.Runtime.Serialization.Formatters.Binary.ObjectReader", "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo", "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE&", "System.String&", "System.Type&", "System.Boolean&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&binaryTypeEnum;
	params[1] = (intptr_t)typeInformation;
	params[2] = (intptr_t)objectReader;
	params[3] = (intptr_t)assemblyInfo;
	params[4] = (intptr_t)&primitiveTypeEnum;
	params[5] = (intptr_t)&typeString;
	params[6] = (intptr_t)&type;
	params[7] = (intptr_t)&isVariant;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Runtime_Serialization_Formatters_Binary_BinaryArray.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::_ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&binaryHeaderEnum;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Set(int32_t objectId, int32_t rank, IL2CPP::Array<int32_t>* lengthA, IL2CPP::Array<int32_t>* lowerBoundA, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Object* typeInformation, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int32_t assemId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32[]", "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum", "System.Object", "System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&objectId;
	params[1] = (intptr_t)&rank;
	params[2] = (intptr_t)lengthA;
	params[3] = (intptr_t)lowerBoundA;
	params[4] = (intptr_t)&binaryTypeEnum;
	params[5] = (intptr_t)typeInformation;
	params[6] = (intptr_t)&binaryArrayTypeEnum;
	params[7] = (intptr_t)&assemId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.__BinaryWriter" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray::Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.__BinaryParser" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

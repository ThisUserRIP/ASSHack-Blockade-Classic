#include "System_Runtime_Serialization_Formatters_Binary_BinaryAssembly.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Set(int32_t assemId, mscorlib::System::String* assemblyString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&assemId;
	params[1] = (intptr_t)assemblyString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Dump()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dump");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

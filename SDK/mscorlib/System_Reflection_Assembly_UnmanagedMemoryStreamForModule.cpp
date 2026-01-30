#include "System_Reflection_Assembly_UnmanagedMemoryStreamForModule.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Assembly_UnmanagedMemoryStreamForModule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Reflection::Assembly::GetIl2CppClass(), "UnmanagedMemoryStreamForModule");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Assembly_UnmanagedMemoryStreamForModule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::Assembly_UnmanagedMemoryStreamForModule::_ctor(uint8_t* pointer, int64_t length, mscorlib::System::Reflection::Module* module)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte*", "System.Int64", "System.Reflection.Module" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pointer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)module;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::Assembly_UnmanagedMemoryStreamForModule::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

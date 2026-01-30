#include "System_Runtime_InteropServices_SafeBuffer.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::InteropServices::SafeBuffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.InteropServices", "SafeBuffer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::InteropServices::SafeBuffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::InteropServices::SafeBuffer::AcquirePointer(uint8_t& pointer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AcquirePointer", std::vector<std::string> { "System.Byte*&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pointer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::InteropServices::SafeBuffer::ReleasePointer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleasePointer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

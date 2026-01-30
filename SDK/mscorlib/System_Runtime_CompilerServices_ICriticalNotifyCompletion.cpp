#include "System_Runtime_CompilerServices_ICriticalNotifyCompletion.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted(mscorlib::System::Action* continuation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsafeOnCompleted", std::vector<std::string> { "System.Action" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)continuation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Threading_Tasks_UnobservedTaskExceptionEventArgs.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor(mscorlib::System::AggregateException* exception)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.AggregateException" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)exception;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

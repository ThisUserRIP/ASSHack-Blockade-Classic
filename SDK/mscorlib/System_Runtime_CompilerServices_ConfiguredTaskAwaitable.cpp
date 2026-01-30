#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::_ctor(mscorlib::System::Threading::Tasks::Task* task, bool continueOnCapturedContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)&continueOnCapturedContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetAwaiter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAwaiter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(*(mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter*)il2cpp_object_unbox(returnValue));
}

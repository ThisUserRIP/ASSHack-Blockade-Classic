#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore_ContinuationWrapper.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetIl2CppClass(), "ContinuationWrapper");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper::_ctor(mscorlib::System::Action* continuation, mscorlib::System::Action* invokeAction, mscorlib::System::Threading::Tasks::Task* innerTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Action", "System.Action", "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)continuation;
	params[1] = (intptr_t)invokeAction;
	params[2] = (intptr_t)innerTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

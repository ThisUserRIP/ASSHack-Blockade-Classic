#include "System_Threading_CancellationCallbackInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::CancellationCallbackInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "CancellationCallbackInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::CancellationCallbackInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::CancellationCallbackInfo::_ctor(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* stateForCallback, mscorlib::System::Threading::SynchronizationContext* targetSyncContext, mscorlib::System::Threading::ExecutionContext* targetExecutionContext, mscorlib::System::Threading::CancellationTokenSource* cancellationTokenSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Action`1<System.Object>", "System.Object", "System.Threading.SynchronizationContext", "System.Threading.ExecutionContext", "System.Threading.CancellationTokenSource" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)stateForCallback;
	params[2] = (intptr_t)targetSyncContext;
	params[3] = (intptr_t)targetExecutionContext;
	params[4] = (intptr_t)cancellationTokenSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::CancellationCallbackInfo::ExecuteCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCallback");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::CancellationCallbackInfo::ExecutionContextCallback(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecutionContextCallback", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

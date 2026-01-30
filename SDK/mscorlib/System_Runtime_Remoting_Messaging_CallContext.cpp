#include "System_Runtime_Remoting_Messaging_CallContext.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::CallContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "CallContext");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::CallContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::CallContext::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCurrentCallContext", std::vector<std::string> { "System.Runtime.Remoting.Messaging.LogicalCallContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* mscorlib::System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLogicalCallContext", std::vector<std::string> { "System.Runtime.Remoting.Messaging.LogicalCallContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callCtx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext*)returnValue;
}

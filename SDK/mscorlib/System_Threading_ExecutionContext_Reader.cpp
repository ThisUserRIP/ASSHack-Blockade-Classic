#include "System_Threading_ExecutionContext_Reader.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ExecutionContext_Reader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::ExecutionContext::GetIl2CppClass(), "Reader");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ExecutionContext_Reader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::ExecutionContext_Reader::_ctor(mscorlib::System::Threading::ExecutionContext* ec)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.ExecutionContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ec;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext_Reader::DangerousGetRawExecutionContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DangerousGetRawExecutionContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
bool mscorlib::System::Threading::ExecutionContext_Reader::get_IsNull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsNull");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Threading::ExecutionContext_Reader::IsDefaultFTContext(bool ignoreSyncCtx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefaultFTContext", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ignoreSyncCtx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Threading::ExecutionContext_Reader::get_IsFlowSuppressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsFlowSuppressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Threading::SynchronizationContext* mscorlib::System::Threading::ExecutionContext_Reader::get_SynchronizationContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SynchronizationContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SynchronizationContext*)returnValue;
}
mscorlib::System::Threading::SynchronizationContext* mscorlib::System::Threading::ExecutionContext_Reader::get_SynchronizationContextNoFlow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SynchronizationContextNoFlow");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SynchronizationContext*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader mscorlib::System::Threading::ExecutionContext_Reader::get_LogicalCallContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LogicalCallContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader>(*(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Threading::ExecutionContext_Reader::GetLocalValue(mscorlib::System::Threading::IAsyncLocal* local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalValue", std::vector<std::string> { "System.Threading.IAsyncLocal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)local;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Threading::ExecutionContext_Reader::HasSameLocalValues(mscorlib::System::Threading::ExecutionContext* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasSameLocalValues", std::vector<std::string> { "System.Threading.ExecutionContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

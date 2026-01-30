#include "System_Threading_ExecutionContext.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ExecutionContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "ExecutionContext");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ExecutionContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Threading::ExecutionContext::get_isNewCapture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isNewCapture");
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
void mscorlib::System::Threading::ExecutionContext::set_isNewCapture(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isNewCapture", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ExecutionContext::get_isFlowSuppressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isFlowSuppressed");
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
void mscorlib::System::Threading::ExecutionContext::set_isFlowSuppressed(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isFlowSuppressed", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::get_PreAllocatedDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PreAllocatedDefault");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
bool mscorlib::System::Threading::ExecutionContext::get_IsPreAllocatedDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsPreAllocatedDefault");
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
void mscorlib::System::Threading::ExecutionContext::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::_ctor(bool isPreAllocatedDefault)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isPreAllocatedDefault;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Threading::ExecutionContext::GetLocalValue(mscorlib::System::Threading::IAsyncLocal* local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalValue", std::vector<std::string> { "System.Threading.IAsyncLocal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)local;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::SetLocalValue(mscorlib::System::Threading::IAsyncLocal* local, mscorlib::System::Object* newValue, bool needChangeNotifications)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalValue", std::vector<std::string> { "System.Threading.IAsyncLocal", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)local;
	params[1] = (intptr_t)newValue;
	params[2] = (intptr_t)&needChangeNotifications;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::OnAsyncLocalContextChanged(mscorlib::System::Threading::ExecutionContext* previous, mscorlib::System::Threading::ExecutionContext* current)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAsyncLocalContextChanged", std::vector<std::string> { "System.Threading.ExecutionContext", "System.Threading.ExecutionContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)previous;
	params[1] = (intptr_t)current;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* mscorlib::System::Threading::ExecutionContext::get_LogicalCallContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LogicalCallContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::set_LogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LogicalCallContext", std::vector<std::string> { "System.Runtime.Remoting.Messaging.LogicalCallContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* mscorlib::System::Threading::ExecutionContext::get_IllogicalCallContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IllogicalCallContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::set_IllogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IllogicalCallContext", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IllogicalCallContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::SynchronizationContext* mscorlib::System::Threading::ExecutionContext::get_SynchronizationContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SynchronizationContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SynchronizationContext*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::set_SynchronizationContext(mscorlib::System::Threading::SynchronizationContext* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SynchronizationContext", std::vector<std::string> { "System.Threading.SynchronizationContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::SynchronizationContext* mscorlib::System::Threading::ExecutionContext::get_SynchronizationContextNoFlow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SynchronizationContextNoFlow");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SynchronizationContext*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::set_SynchronizationContextNoFlow(mscorlib::System::Threading::SynchronizationContext* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SynchronizationContextNoFlow", std::vector<std::string> { "System.Threading.SynchronizationContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::Run(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Threading.ExecutionContext", "System.Threading.ContextCallback", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)executionContext;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::Run(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state, bool preserveSyncCtx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Threading.ExecutionContext", "System.Threading.ContextCallback", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)executionContext;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&preserveSyncCtx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::RunInternal(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state, bool preserveSyncCtx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunInternal", std::vector<std::string> { "System.Threading.ExecutionContext", "System.Threading.ContextCallback", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)executionContext;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&preserveSyncCtx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::EstablishCopyOnWriteScope(mscorlib::System::Threading::ExecutionContextSwitcher& ecsw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EstablishCopyOnWriteScope", std::vector<std::string> { "System.Threading.ExecutionContextSwitcher&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ecsw;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::EstablishCopyOnWriteScope(mscorlib::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, mscorlib::System::Threading::ExecutionContextSwitcher& ecsw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EstablishCopyOnWriteScope", std::vector<std::string> { "System.Threading.Thread", "System.Boolean", "System.Threading.ExecutionContextSwitcher&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)currentThread;
	params[1] = (intptr_t)&knownNullWindowsIdentity;
	params[2] = (intptr_t)&ecsw;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ExecutionContextSwitcher mscorlib::System::Threading::ExecutionContext::SetExecutionContext(mscorlib::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetExecutionContext", std::vector<std::string> { "System.Threading.ExecutionContext", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)executionContext;
	params[1] = (intptr_t)&preserveSyncCtx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Threading::ExecutionContextSwitcher ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Threading::ExecutionContextSwitcher));
		return ret;
	}
	return static_cast<mscorlib::System::Threading::ExecutionContextSwitcher>(*(mscorlib::System::Threading::ExecutionContextSwitcher*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::CreateCopy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCopy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::CreateMutableCopy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMutableCopy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
bool mscorlib::System::Threading::ExecutionContext::IsFlowSuppressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsFlowSuppressed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::Capture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Capture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::FastCapture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FastCapture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
mscorlib::System::Threading::ExecutionContext* mscorlib::System::Threading::ExecutionContext::Capture(mscorlib::System::Threading::StackCrawlMark& stackMark, mscorlib::System::Threading::ExecutionContext_CaptureOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Capture", std::vector<std::string> { "System.Threading.StackCrawlMark&", "System.Threading.ExecutionContext/CaptureOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&stackMark;
	params[1] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ExecutionContext*)returnValue;
}
void mscorlib::System::Threading::ExecutionContext::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ExecutionContext::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ExecutionContext::IsDefaultFTContext(bool ignoreSyncCtx)
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
void mscorlib::System::Threading::ExecutionContext::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

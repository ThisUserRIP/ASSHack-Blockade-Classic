#include "System_Runtime_Remoting_Contexts_Context.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Contexts::Context::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "Context");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Contexts::Context::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::RegisterContext(mscorlib::System::Runtime::Remoting::Contexts::Context* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterContext", std::vector<std::string> { "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::ReleaseContext(mscorlib::System::Runtime::Remoting::Contexts::Context* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseContext", std::vector<std::string> { "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Contexts::Context* mscorlib::System::Runtime::Remoting::Contexts::Context::get_DefaultContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::Context*)returnValue;
}
int32_t mscorlib::System::Runtime::Remoting::Contexts::Context::get_ContextID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ContextID");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>* mscorlib::System::Runtime::Remoting::Contexts::Context::get_ContextProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ContextProperties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>*)returnValue;
}
bool mscorlib::System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsDefaultContext");
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
bool mscorlib::System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NeedsContextSink");
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
bool mscorlib::System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterDynamicProperty", std::vector<std::string> { "System.Runtime.Remoting.Contexts.IDynamicProperty", "System.ContextBoundObject", "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prop;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty(mscorlib::System::String* name, mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterDynamicProperty", std::vector<std::string> { "System.String", "System.ContextBoundObject", "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* mscorlib::System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection(mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicPropertyCollection", std::vector<std::string> { "System.ContextBoundObject", "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyGlobalDynamicSinks", std::vector<std::string> { "System.Boolean", "System.Runtime.Remoting.Messaging.IMessage", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)req_msg;
	params[2] = (intptr_t)&client_site;
	params[3] = (intptr_t)&async;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasGlobalDynamicSinks");
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
void mscorlib::System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyDynamicSinks", std::vector<std::string> { "System.Boolean", "System.Runtime.Remoting.Messaging.IMessage", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)req_msg;
	params[2] = (intptr_t)&client_site;
	params[3] = (intptr_t)&async;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasDynamicSinks");
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
bool mscorlib::System::Runtime::Remoting::Contexts::Context::get_HasExitSinks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasExitSinks");
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
mscorlib::System::Runtime::Remoting::Contexts::IContextProperty* mscorlib::System::Runtime::Remoting::Contexts::Context::GetProperty(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperty", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::SetProperty(mscorlib::System::Runtime::Remoting::Contexts::IContextProperty* prop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetProperty", std::vector<std::string> { "System.Runtime.Remoting.Contexts.IContextProperty" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::Freeze()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Freeze");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::Contexts::Context::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetServerContextSinkChain");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClientContextSinkChain");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain(mscorlib::System::MarshalByRefObject* obj, bool forceInternalExecute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateServerObjectSinkChain", std::vector<std::string> { "System.MarshalByRefObject", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&forceInternalExecute;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Contexts::Context::CreateEnvoySink(mscorlib::System::MarshalByRefObject* serverObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEnvoySink", std::vector<std::string> { "System.MarshalByRefObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serverObject;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::Contexts::Context* mscorlib::System::Runtime::Remoting::Contexts::Context::SwitchToContext(mscorlib::System::Runtime::Remoting::Contexts::Context* newContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchToContext", std::vector<std::string> { "System.Runtime.Remoting.Contexts.Context" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)newContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::Context*)returnValue;
}
mscorlib::System::Runtime::Remoting::Contexts::Context* mscorlib::System::Runtime::Remoting::Contexts::Context::CreateNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateNewContext", std::vector<std::string> { "System.Runtime.Remoting.Activation.IConstructionCallMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::Context*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::DoCallBack(mscorlib::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoCallBack", std::vector<std::string> { "System.Runtime.Remoting.Contexts.CrossContextDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)deleg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::LocalDataStore* mscorlib::System::Runtime::Remoting::Contexts::Context::get_MyLocalStore()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MyLocalStore");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::LocalDataStore*)returnValue;
}
mscorlib::System::LocalDataStoreSlot* mscorlib::System::Runtime::Remoting::Contexts::Context::AllocateDataSlot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocateDataSlot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::LocalDataStoreSlot*)returnValue;
}
mscorlib::System::LocalDataStoreSlot* mscorlib::System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocateNamedDataSlot", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::LocalDataStoreSlot*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FreeNamedDataSlot", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::LocalDataStoreSlot* mscorlib::System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNamedDataSlot", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::LocalDataStoreSlot*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Contexts::Context::GetData(mscorlib::System::LocalDataStoreSlot* slot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData", std::vector<std::string> { "System.LocalDataStoreSlot" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)slot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::SetData(mscorlib::System::LocalDataStoreSlot* slot, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "System.LocalDataStoreSlot", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)slot;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::Context::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

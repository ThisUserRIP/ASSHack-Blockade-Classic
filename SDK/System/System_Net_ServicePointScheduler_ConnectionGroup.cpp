#include "System_Net_ServicePointScheduler_ConnectionGroup.h"

IL2CPP::Il2CppClass* System::System::Net::ServicePointScheduler_ConnectionGroup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::ServicePointScheduler::GetIl2CppClass(), "ConnectionGroup");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ServicePointScheduler_ConnectionGroup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::ServicePointScheduler* System::System::Net::ServicePointScheduler_ConnectionGroup::get_Scheduler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Scheduler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::ServicePointScheduler*)returnValue;
}
void System::System::Net::ServicePointScheduler_ConnectionGroup::_ctor(System::Net::ServicePointScheduler* scheduler, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.ServicePointScheduler", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scheduler;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::ServicePointScheduler_ConnectionGroup::IsEmpty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEmpty");
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
void System::System::Net::ServicePointScheduler_ConnectionGroup::RemoveConnection(System::Net::WebConnection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveConnection", std::vector<std::string> { "System.Net.WebConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler_ConnectionGroup::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler_ConnectionGroup::EnqueueOperation(System::Net::WebOperation* operation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnqueueOperation", std::vector<std::string> { "System.Net.WebOperation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)operation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::WebOperation* System::System::Net::ServicePointScheduler_ConnectionGroup::GetNextOperation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNextOperation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::WebOperation*)returnValue;
}
System::System::Net::WebConnection* System::System::Net::ServicePointScheduler_ConnectionGroup::FindIdleConnection(System::Net::WebOperation* operation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindIdleConnection", std::vector<std::string> { "System.Net.WebOperation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)operation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::WebConnection*)returnValue;
}
mscorlib::System::ValueTuple_2<System::System::Net::WebConnection, mscorlib::System::Boolean> System::System::Net::ServicePointScheduler_ConnectionGroup::CreateOrReuseConnection(System::Net::WebOperation* operation, bool force)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateOrReuseConnection", std::vector<std::string> { "System.Net.WebOperation", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)operation;
	params[1] = (intptr_t)&force;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_2<System::Net::WebConnection, mscorlib::System::Boolean> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_2<System::Net::WebConnection, mscorlib::System::Boolean>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_2<System::Net::WebConnection, mscorlib::System::Boolean>>(*(mscorlib::System::ValueTuple_2<System::Net::WebConnection, mscorlib::System::Boolean>*)il2cpp_object_unbox(returnValue));
}

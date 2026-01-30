#include "System_Net_ServicePointScheduler.h"

IL2CPP::Il2CppClass* System::System::Net::ServicePointScheduler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "ServicePointScheduler");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ServicePointScheduler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::ServicePoint* System::System::Net::ServicePointScheduler::get_ServicePoint()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ServicePoint");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::ServicePoint*)returnValue;
}
int32_t System::System::Net::ServicePointScheduler::get_MaxIdleTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxIdleTime");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System::System::Net::ServicePointScheduler::get_ConnectionLimit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConnectionLimit");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::ServicePointScheduler::_ctor(System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.ServicePoint", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)servicePoint;
	params[1] = (intptr_t)&connectionLimit;
	params[2] = (intptr_t)&maxIdleTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::Run()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::StartScheduler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartScheduler");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::RunSchedulerIteration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunSchedulerIteration");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::ServicePointScheduler::OperationCompleted(System::Net::ServicePointScheduler_ConnectionGroup* group, System::Net::WebOperation* operation, mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Boolean, System::Net::WebOperation>>* task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OperationCompleted", std::vector<std::string> { "System.Net.ServicePointScheduler/ConnectionGroup", "System.Net.WebOperation", "System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)operation;
	params[2] = (intptr_t)task;
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
void System::System::Net::ServicePointScheduler::CloseIdleConnection(System::Net::ServicePointScheduler_ConnectionGroup* group, System::Net::WebConnection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseIdleConnection", std::vector<std::string> { "System.Net.ServicePointScheduler/ConnectionGroup", "System.Net.WebConnection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::ServicePointScheduler::SchedulerIteration(System::Net::ServicePointScheduler_ConnectionGroup* group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SchedulerIteration", std::vector<std::string> { "System.Net.ServicePointScheduler/ConnectionGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)group;
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
void System::System::Net::ServicePointScheduler::RemoveOperation(System::Net::WebOperation* operation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveOperation", std::vector<std::string> { "System.Net.WebOperation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)operation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::RemoveIdleConnection(System::Net::WebConnection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveIdleConnection", std::vector<std::string> { "System.Net.WebConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::SendRequest(System::Net::WebOperation* operation, mscorlib::System::String* groupName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendRequest", std::vector<std::string> { "System.Net.WebOperation", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)operation;
	params[1] = (intptr_t)groupName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::ServicePointScheduler_ConnectionGroup* System::System::Net::ServicePointScheduler::GetConnectionGroup(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConnectionGroup", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::ServicePointScheduler_ConnectionGroup*)returnValue;
}
void System::System::Net::ServicePointScheduler::OnConnectionCreated(System::Net::WebConnection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnConnectionCreated", std::vector<std::string> { "System.Net.WebConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler::OnConnectionClosed(System::Net::WebConnection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnConnectionClosed", std::vector<std::string> { "System.Net.WebConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

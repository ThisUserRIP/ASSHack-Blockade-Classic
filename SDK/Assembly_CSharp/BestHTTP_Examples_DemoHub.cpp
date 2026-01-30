#include "BestHTTP_Examples_DemoHub.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::DemoHub::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "DemoHub");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::DemoHub::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::ReportProgress(mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReportProgress", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnLongRunningJob_Progress(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originialMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ProgressMessage* progress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLongRunningJob_Progress", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ProgressMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originialMessage;
	params[2] = (intptr_t)progress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnLongRunningJob_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLongRunningJob_Done", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::MultipleCalls()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultipleCalls");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::DynamicTask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DynamicTask");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnDynamicTask_Failed(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDynamicTask_Failed", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.FailureMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnDynamicTask_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDynamicTask_Done", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::AddToGroups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToGroups");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::GetValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::TaskWithException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TaskWithException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::GenericTaskWithException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenericTaskWithException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::SynchronousException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SynchronousException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::PassingDynamicComplex(mscorlib::System::Object* person)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PassingDynamicComplex", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)person;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::SimpleArray(IL2CPP::Array<int32_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SimpleArray", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::ComplexType(mscorlib::System::Object* person)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComplexType", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)person;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::ComplexArray(IL2CPP::Array<mscorlib::System::Object*>* complexArray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComplexArray", std::vector<std::string> { "System.Object[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)complexArray;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::Overload()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Overload");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnVoidOverload_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnVoidOverload_Done", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::Overload(int32_t number)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Overload", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&number;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::OnIntOverload_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnIntOverload_Done", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::ReadStateValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadStateValue");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::PlainTask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlainTask");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::GenericTaskWithContinueWith()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenericTaskWithContinueWith");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::FromArbitraryCode(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromArbitraryCode", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::GroupAdded(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GroupAdded", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::Signal(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Signal", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::Invoke(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::Draw()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_GetValue_b__28_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GetValue>b__28_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_TaskWithException_b__29_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<TaskWithException>b__29_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.FailureMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_GenericTaskWithException_b__30_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GenericTaskWithException>b__30_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.FailureMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_SynchronousException_b__31_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<SynchronousException>b__31_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.FailureMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_PassingDynamicComplex_b__32_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<PassingDynamicComplex>b__32_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_SimpleArray_b__33_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<SimpleArray>b__33_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_ComplexType_b__34_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ComplexType>b__34_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_ComplexArray_b__35_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ComplexArray>b__35_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_ReadStateValue_b__40_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ReadStateValue>b__40_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_PlainTask_b__41_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<PlainTask>b__41_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHub::_GenericTaskWithContinueWith_b__42_0(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GenericTaskWithContinueWith>b__42_0", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

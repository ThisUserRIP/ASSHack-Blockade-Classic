#include "BestHTTP_ServerSentEvents_EventSourceResponse.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.ServerSentEvents", "EventSourceResponse");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::get_IsClosed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsClosed");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::set_IsClosed(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsClosed", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::_ctor(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.IO.Stream", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)stream;
	params[2] = (intptr_t)&isStreamed;
	params[3] = (intptr_t)&isFromCache;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::Receive(int32_t forceReadRawContentLength, bool readPayloadData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&forceReadRawContentLength;
	params[1] = (intptr_t)&readPayloadData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::StartReceive()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartReceive");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::ReceiveThreadFunc(mscorlib::System::Object* param)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveThreadFunc", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)param;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::ReadChunked(mscorlib::System::IO::Stream* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadChunked", std::vector<std::string> { "System.IO.Stream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::ReadRaw(mscorlib::System::IO::Stream* stream, int64_t contentLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadRaw", std::vector<std::string> { "System.IO.Stream", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&contentLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::FeedData(IL2CPP::Array<uint8_t>* buffer, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FeedData", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::ParseLine(IL2CPP::Array<uint8_t>* buffer, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseLine", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse::BestHTTP_IProtocol_HandleEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.IProtocol.HandleEvents");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

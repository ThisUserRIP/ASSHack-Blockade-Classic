#include "BestHTTP_SOCKSProxy.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SOCKSProxy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP", "SOCKSProxy");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SOCKSProxy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SOCKSProxy::_ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "BestHTTP.Authentication.Credentials" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)address;
	params[1] = (intptr_t)credentials;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SOCKSProxy::GetRequestPath(System::System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRequestPath", std::vector<std::string> { "System.Uri" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SOCKSProxy::Connect(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::HTTPRequest* request)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.IO.Stream", "BestHTTP.HTTPRequest" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)request;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SOCKSProxy::WriteString(IL2CPP::Array<uint8_t>* buffer, int32_t& count, mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteString", std::vector<std::string> { "System.Byte[]", "System.Int32&", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SOCKSProxy::WriteBytes(IL2CPP::Array<uint8_t>* buffer, int32_t& count, IL2CPP::Array<uint8_t>* bytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBytes", std::vector<std::string> { "System.Byte[]", "System.Int32&", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)bytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SOCKSProxy::BufferToHexStr(IL2CPP::Array<uint8_t>* buffer, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BufferToHexStr", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

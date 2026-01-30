#include "System_Net_Dns.h"

IL2CPP::Il2CppClass* System::System::Net::Dns::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "Dns");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Dns::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::IAsyncResult* System::System::Net::Dns::BeginGetHostAddresses(mscorlib::System::String* hostNameOrAddress, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginGetHostAddresses", std::vector<std::string> { "System.String", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hostNameOrAddress;
	params[1] = (intptr_t)requestCallback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
IL2CPP::Array<System::Net::IPAddress*>* System::System::Net::Dns::EndGetHostAddresses(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndGetHostAddresses", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Net::IPAddress*>*)returnValue;
}
bool System::System::Net::Dns::GetHostByName_internal(mscorlib::System::String* host, mscorlib::System::String& h_name, IL2CPP::Array<mscorlib::System::String*>& h_aliases, IL2CPP::Array<mscorlib::System::String*>& h_addr_list, int32_t hint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostByName_internal", std::vector<std::string> { "System.String", "System.String&", "System.String[]&", "System.String[]&", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)host;
	params[1] = (intptr_t)&h_name;
	params[2] = (intptr_t)&h_aliases;
	params[3] = (intptr_t)&h_addr_list;
	params[4] = (intptr_t)&hint;
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
bool System::System::Net::Dns::GetHostByAddr_internal(mscorlib::System::String* addr, mscorlib::System::String& h_name, IL2CPP::Array<mscorlib::System::String*>& h_aliases, IL2CPP::Array<mscorlib::System::String*>& h_addr_list, int32_t hint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostByAddr_internal", std::vector<std::string> { "System.String", "System.String&", "System.String[]&", "System.String[]&", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)addr;
	params[1] = (intptr_t)&h_name;
	params[2] = (intptr_t)&h_aliases;
	params[3] = (intptr_t)&h_addr_list;
	params[4] = (intptr_t)&hint;
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
bool System::System::Net::Dns::GetHostName_internal(mscorlib::System::String& h_name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostName_internal", std::vector<std::string> { "System.String&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&h_name;
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
void System::System::Net::Dns::Error_11001(mscorlib::System::String* hostName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Error_11001", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hostName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::IPHostEntry* System::System::Net::Dns::hostent_to_IPHostEntry(mscorlib::System::String* originalHostName, mscorlib::System::String* h_name, IL2CPP::Array<mscorlib::System::String*>* h_aliases, IL2CPP::Array<mscorlib::System::String*>* h_addrlist)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hostent_to_IPHostEntry", std::vector<std::string> { "System.String", "System.String", "System.String[]", "System.String[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)originalHostName;
	params[1] = (intptr_t)h_name;
	params[2] = (intptr_t)h_aliases;
	params[3] = (intptr_t)h_addrlist;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPHostEntry*)returnValue;
}
System::System::Net::IPHostEntry* System::System::Net::Dns::GetHostByAddressFromString(mscorlib::System::String* address, bool parse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostByAddressFromString", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)address;
	params[1] = (intptr_t)&parse;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPHostEntry*)returnValue;
}
System::System::Net::IPHostEntry* System::System::Net::Dns::GetHostEntry(mscorlib::System::String* hostNameOrAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostEntry", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hostNameOrAddress;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPHostEntry*)returnValue;
}
System::System::Net::IPHostEntry* System::System::Net::Dns::GetHostEntry(System::Net::IPAddress* address)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostEntry", std::vector<std::string> { "System.Net.IPAddress" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)address;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPHostEntry*)returnValue;
}
IL2CPP::Array<System::Net::IPAddress*>* System::System::Net::Dns::GetHostAddresses(mscorlib::System::String* hostNameOrAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostAddresses", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hostNameOrAddress;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Net::IPAddress*>*)returnValue;
}
System::System::Net::IPHostEntry* System::System::Net::Dns::GetHostByName(mscorlib::System::String* hostName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostByName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hostName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IPHostEntry*)returnValue;
}
mscorlib::System::String* System::System::Net::Dns::GetHostName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

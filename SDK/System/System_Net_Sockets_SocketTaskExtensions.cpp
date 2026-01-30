#include "System_Net_Sockets_SocketTaskExtensions.h"

IL2CPP::Il2CppClass* System::System::Net::Sockets::SocketTaskExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Sockets", "SocketTaskExtensions");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Sockets::SocketTaskExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Threading::Tasks::Task* System::System::Net::Sockets::SocketTaskExtensions::ConnectAsync(System::Net::Sockets::Socket* socket, System::Net::EndPoint* remoteEP)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectAsync", std::vector<std::string> { "System.Net.Sockets.Socket", "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)remoteEP;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task*)returnValue;
}

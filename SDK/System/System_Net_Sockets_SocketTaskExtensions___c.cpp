#include "System_Net_Sockets_SocketTaskExtensions___c.h"

IL2CPP::Il2CppClass* System::System::Net::Sockets::SocketTaskExtensions___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::Sockets::SocketTaskExtensions::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Sockets::SocketTaskExtensions___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Sockets::SocketTaskExtensions___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketTaskExtensions___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* System::System::Net::Sockets::SocketTaskExtensions___c::_ConnectAsync_b__2_0(System::Net::EndPoint* targetEndPoint, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ConnectAsync>b__2_0", std::vector<std::string> { "System.Net.EndPoint", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetEndPoint;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void System::System::Net::Sockets::SocketTaskExtensions___c::_ConnectAsync_b__2_1(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ConnectAsync>b__2_1", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Net_NetRes.h"

IL2CPP::Il2CppClass* System::System::Net::NetRes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "NetRes");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::NetRes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::Net::NetRes::GetWebStatusString(mscorlib::System::String* Res, System::Net::WebExceptionStatus Status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWebStatusString", std::vector<std::string> { "System.String", "System.Net.WebExceptionStatus" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Res;
	params[1] = (intptr_t)&Status;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Net::NetRes::GetWebStatusString(System::Net::WebExceptionStatus Status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWebStatusString", std::vector<std::string> { "System.Net.WebExceptionStatus" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&Status;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

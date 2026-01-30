#include "System_Net_FtpStatus.h"

IL2CPP::Il2CppClass* System::System::Net::FtpStatus::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "FtpStatus");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::FtpStatus::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::FtpStatus::_ctor(System::Net::FtpStatusCode statusCode, mscorlib::System::String* statusDescription)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.FtpStatusCode", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&statusCode;
	params[1] = (intptr_t)statusDescription;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::FtpStatusCode System::System::Net::FtpStatus::get_StatusCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_StatusCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::FtpStatusCode ret;
		std::memset(&ret, 0, sizeof(System::Net::FtpStatusCode));
		return ret;
	}
	return static_cast<System::Net::FtpStatusCode>(*(System::Net::FtpStatusCode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::System::Net::FtpStatus::get_StatusDescription()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_StatusDescription");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

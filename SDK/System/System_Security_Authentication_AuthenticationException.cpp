#include "System_Security_Authentication_AuthenticationException.h"

IL2CPP::Il2CppClass* System::System::Security::Authentication::AuthenticationException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Authentication", "AuthenticationException");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Authentication::AuthenticationException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Security::Authentication::AuthenticationException::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Security::Authentication::AuthenticationException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Security::Authentication::AuthenticationException::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationInfo;
	params[1] = (intptr_t)&streamingContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

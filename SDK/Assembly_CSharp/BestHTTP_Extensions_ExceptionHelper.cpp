#include "BestHTTP_Extensions_ExceptionHelper.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Extensions::ExceptionHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Extensions", "ExceptionHelper");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Extensions::ExceptionHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Exception* Assembly_CSharp::BestHTTP::Extensions::ExceptionHelper::ServerClosedTCPStream()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ServerClosedTCPStream");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}

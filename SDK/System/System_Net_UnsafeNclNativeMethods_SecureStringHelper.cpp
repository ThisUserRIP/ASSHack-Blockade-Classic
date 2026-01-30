#include "System_Net_UnsafeNclNativeMethods_SecureStringHelper.h"

IL2CPP::Il2CppClass* System::System::Net::UnsafeNclNativeMethods_SecureStringHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::UnsafeNclNativeMethods::GetIl2CppClass(), "SecureStringHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::UnsafeNclNativeMethods_SecureStringHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateString(mscorlib::System::Security::SecureString* secureString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateString", std::vector<std::string> { "System.Security.SecureString" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)secureString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Security::SecureString* System::System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateSecureString(mscorlib::System::String* plainString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSecureString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)plainString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::SecureString*)returnValue;
}

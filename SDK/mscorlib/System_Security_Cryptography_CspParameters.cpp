#include "System_Security_Cryptography_CspParameters.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::CspParameters::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "CspParameters");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::CspParameters::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Security::Cryptography::CspProviderFlags mscorlib::System::Security::Cryptography::CspParameters::get_Flags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Flags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::CspProviderFlags ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::CspProviderFlags));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::CspProviderFlags>(*(mscorlib::System::Security::Cryptography::CspProviderFlags*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Security::Cryptography::CspParameters::set_Flags(mscorlib::System::Security::Cryptography::CspProviderFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Flags", std::vector<std::string> { "System.Security.Cryptography.CspProviderFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::AccessControl::CryptoKeySecurity* mscorlib::System::Security::Cryptography::CspParameters::get_CryptoKeySecurity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CryptoKeySecurity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::AccessControl::CryptoKeySecurity*)returnValue;
}
void mscorlib::System::Security::Cryptography::CspParameters::set_CryptoKeySecurity(mscorlib::System::Security::AccessControl::CryptoKeySecurity* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CryptoKeySecurity", std::vector<std::string> { "System.Security.AccessControl.CryptoKeySecurity" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::SecureString* mscorlib::System::Security::Cryptography::CspParameters::get_KeyPassword()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_KeyPassword");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::SecureString*)returnValue;
}
void mscorlib::System::Security::Cryptography::CspParameters::set_KeyPassword(mscorlib::System::Security::SecureString* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_KeyPassword", std::vector<std::string> { "System.Security.SecureString" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t mscorlib::System::Security::Cryptography::CspParameters::get_ParentWindowHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentWindowHandle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Security::Cryptography::CspParameters::set_ParentWindowHandle(intptr_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ParentWindowHandle", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t dwTypeIn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dwTypeIn;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t dwTypeIn, mscorlib::System::String* strProviderNameIn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dwTypeIn;
	params[1] = (intptr_t)strProviderNameIn;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t dwTypeIn, mscorlib::System::String* strProviderNameIn, mscorlib::System::String* strContainerNameIn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dwTypeIn;
	params[1] = (intptr_t)strProviderNameIn;
	params[2] = (intptr_t)strContainerNameIn;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity* cryptoKeySecurity, mscorlib::System::Security::SecureString* keyPassword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Security.AccessControl.CryptoKeySecurity", "System.Security.SecureString" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&providerType;
	params[1] = (intptr_t)providerName;
	params[2] = (intptr_t)keyContainerName;
	params[3] = (intptr_t)cryptoKeySecurity;
	params[4] = (intptr_t)keyPassword;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity* cryptoKeySecurity, intptr_t parentWindowHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Security.AccessControl.CryptoKeySecurity", "System.IntPtr" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&providerType;
	params[1] = (intptr_t)providerName;
	params[2] = (intptr_t)keyContainerName;
	params[3] = (intptr_t)cryptoKeySecurity;
	params[4] = (intptr_t)&parentWindowHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::Cryptography::CspProviderFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Security.Cryptography.CspProviderFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&providerType;
	params[1] = (intptr_t)providerName;
	params[2] = (intptr_t)keyContainerName;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CspParameters::_ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.CspParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

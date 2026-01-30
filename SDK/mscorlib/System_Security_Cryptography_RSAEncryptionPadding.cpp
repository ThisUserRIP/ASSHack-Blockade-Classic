#include "System_Security_Cryptography_RSAEncryptionPadding.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "RSAEncryptionPadding");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_Pkcs1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Pkcs1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OaepSHA1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA256()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OaepSHA256");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA384()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OaepSHA384");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA512()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OaepSHA512");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
void mscorlib::System::Security::Cryptography::RSAEncryptionPadding::_ctor(mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode mode, mscorlib::System::Security::Cryptography::HashAlgorithmName oaepHashAlgorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.RSAEncryptionPaddingMode", "System.Security.Cryptography.HashAlgorithmName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mode;
	params[1] = (intptr_t)&oaepHashAlgorithm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::RSAEncryptionPadding* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::CreateOaep(mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateOaep", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithmName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hashAlgorithm;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSAEncryptionPadding*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_Mode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Mode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode>(*(mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::RSAEncryptionPadding::get_OaepHashAlgorithm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OaepHashAlgorithm");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Security::Cryptography::RSAEncryptionPadding::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Security::Cryptography::RSAEncryptionPadding::CombineHashCodes(int32_t h1, int32_t h2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CombineHashCodes", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&h1;
	params[1] = (intptr_t)&h2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Security::Cryptography::RSAEncryptionPadding::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::RSAEncryptionPadding::Equals(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Security.Cryptography.RSAEncryptionPadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::RSAEncryptionPadding::op_Equality(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "System.Security.Cryptography.RSAEncryptionPadding", "System.Security.Cryptography.RSAEncryptionPadding" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)left;
	params[1] = (intptr_t)right;
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
bool mscorlib::System::Security::Cryptography::operator==(mscorlib::System::Security::Cryptography::RSAEncryptionPadding& left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding& right)
{
	return mscorlib::System::Security::Cryptography::RSAEncryptionPadding::op_Equality(&left, &right);
}
bool mscorlib::System::Security::Cryptography::RSAEncryptionPadding::op_Inequality(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "System.Security.Cryptography.RSAEncryptionPadding", "System.Security.Cryptography.RSAEncryptionPadding" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)left;
	params[1] = (intptr_t)right;
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
bool mscorlib::System::Security::Cryptography::operator!=(mscorlib::System::Security::Cryptography::RSAEncryptionPadding& left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding& right)
{
	return mscorlib::System::Security::Cryptography::RSAEncryptionPadding::op_Inequality(&left, &right);
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::RSAEncryptionPadding::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Security::Cryptography::RSAEncryptionPadding::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::RSAEncryptionPadding::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

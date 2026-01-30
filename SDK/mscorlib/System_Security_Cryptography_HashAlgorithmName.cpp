#include "System_Security_Cryptography_HashAlgorithmName.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::HashAlgorithmName::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "HashAlgorithmName");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::HashAlgorithmName::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::HashAlgorithmName::get_MD5()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MD5");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::HashAlgorithmName::get_SHA1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SHA1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::HashAlgorithmName::get_SHA256()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SHA256");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::HashAlgorithmName::get_SHA384()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SHA384");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::HashAlgorithmName::get_SHA512()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SHA512");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Security::Cryptography::HashAlgorithmName::_ctor(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::HashAlgorithmName::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::HashAlgorithmName::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::Security::Cryptography::HashAlgorithmName::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::HashAlgorithmName::Equals(mscorlib::System::Security::Cryptography::HashAlgorithmName other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithmName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t mscorlib::System::Security::Cryptography::HashAlgorithmName::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Security::Cryptography::HashAlgorithmName::op_Equality(mscorlib::System::Security::Cryptography::HashAlgorithmName left, mscorlib::System::Security::Cryptography::HashAlgorithmName right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.HashAlgorithmName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&left;
	params[1] = (intptr_t)&right;
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
bool mscorlib::System::Security::Cryptography::operator==(mscorlib::System::Security::Cryptography::HashAlgorithmName& left, mscorlib::System::Security::Cryptography::HashAlgorithmName& right)
{
	return mscorlib::System::Security::Cryptography::HashAlgorithmName::op_Equality(left, right);
}
bool mscorlib::System::Security::Cryptography::HashAlgorithmName::op_Inequality(mscorlib::System::Security::Cryptography::HashAlgorithmName left, mscorlib::System::Security::Cryptography::HashAlgorithmName right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.HashAlgorithmName" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&left;
	params[1] = (intptr_t)&right;
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
bool mscorlib::System::Security::Cryptography::operator!=(mscorlib::System::Security::Cryptography::HashAlgorithmName& left, mscorlib::System::Security::Cryptography::HashAlgorithmName& right)
{
	return mscorlib::System::Security::Cryptography::HashAlgorithmName::op_Inequality(left, right);
}

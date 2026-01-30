#include "System_Security_Cryptography_CryptoStream_HopToThreadPoolAwaitable.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Security::Cryptography::CryptoStream::GetIl2CppClass(), "HopToThreadPoolAwaitable");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::GetAwaiter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAwaiter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable>(*(mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::get_IsCompleted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsCompleted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::OnCompleted(mscorlib::System::Action* continuation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCompleted", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)continuation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable::GetResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResult");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

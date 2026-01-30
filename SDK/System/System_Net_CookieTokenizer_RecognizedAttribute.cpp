#include "System_Net_CookieTokenizer_RecognizedAttribute.h"

IL2CPP::Il2CppClass* System::System::Net::CookieTokenizer_RecognizedAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::CookieTokenizer::GetIl2CppClass(), "RecognizedAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::CookieTokenizer_RecognizedAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::CookieTokenizer_RecognizedAttribute::_ctor(mscorlib::System::String* name, System::Net::CookieToken token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Net.CookieToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::CookieToken System::System::Net::CookieTokenizer_RecognizedAttribute::get_Token()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Token");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::CookieToken ret;
		std::memset(&ret, 0, sizeof(System::Net::CookieToken));
		return ret;
	}
	return static_cast<System::Net::CookieToken>(*(System::Net::CookieToken*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::CookieTokenizer_RecognizedAttribute::IsEqualTo(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEqualTo", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
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

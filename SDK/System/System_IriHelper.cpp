#include "System_IriHelper.h"

IL2CPP::Il2CppClass* System::System::IriHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System", "IriHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::IriHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool System::System::IriHelper::CheckIriUnicodeRange(wchar_t unicode, bool isQuery)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIriUnicodeRange", std::vector<std::string> { "System.Char", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unicode;
	params[1] = (intptr_t)&isQuery;
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
bool System::System::IriHelper::CheckIriUnicodeRange(wchar_t highSurr, wchar_t lowSurr, bool& surrogatePair, bool isQuery)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIriUnicodeRange", std::vector<std::string> { "System.Char", "System.Char", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&highSurr;
	params[1] = (intptr_t)&lowSurr;
	params[2] = (intptr_t)&surrogatePair;
	params[3] = (intptr_t)&isQuery;
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
bool System::System::IriHelper::CheckIsReserved(wchar_t ch, System::UriComponents component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIsReserved", std::vector<std::string> { "System.Char", "System.UriComponents" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)&component;
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
mscorlib::System::String* System::System::IriHelper::EscapeUnescapeIri(wchar_t* pInput, int32_t start, int32_t end, System::UriComponents component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EscapeUnescapeIri", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32", "System.UriComponents" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pInput;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&component;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

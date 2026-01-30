#include "System_DomainNameHelper.h"

IL2CPP::Il2CppClass* System::System::DomainNameHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System", "DomainNameHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::DomainNameHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::DomainNameHelper::ParseCanonicalName(mscorlib::System::String* str, int32_t start, int32_t end, bool& loopback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseCanonicalName", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Boolean&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&loopback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool System::System::DomainNameHelper::IsValid(wchar_t* name, uint16_t pos, int32_t& returnedEnd, bool& notCanonical, bool notImplicitFile)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Char*", "System.UInt16", "System.Int32&", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)&returnedEnd;
	params[3] = (intptr_t)&notCanonical;
	params[4] = (intptr_t)&notImplicitFile;
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
bool System::System::DomainNameHelper::IsValidByIri(wchar_t* name, uint16_t pos, int32_t& returnedEnd, bool& notCanonical, bool notImplicitFile)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidByIri", std::vector<std::string> { "System.Char*", "System.UInt16", "System.Int32&", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)&returnedEnd;
	params[3] = (intptr_t)&notCanonical;
	params[4] = (intptr_t)&notImplicitFile;
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
mscorlib::System::String* System::System::DomainNameHelper::IdnEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, bool& atLeastOneValidIdn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IdnEquivalent", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32", "System.Boolean&", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)hostname;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&allAscii;
	params[4] = (intptr_t)&atLeastOneValidIdn;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::DomainNameHelper::IdnEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, mscorlib::System::String& bidiStrippedHost)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IdnEquivalent", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32", "System.Boolean&", "System.String&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)hostname;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&allAscii;
	params[4] = (intptr_t)&bidiStrippedHost;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool System::System::DomainNameHelper::IsIdnAce(mscorlib::System::String* input, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsIdnAce", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&index;
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
bool System::System::DomainNameHelper::IsIdnAce(wchar_t* input, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsIdnAce", std::vector<std::string> { "System.Char*", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&index;
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
mscorlib::System::String* System::System::DomainNameHelper::UnicodeEquivalent(mscorlib::System::String* idnHost, wchar_t* hostname, int32_t start, int32_t end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnicodeEquivalent", std::vector<std::string> { "System.String", "System.Char*", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)idnHost;
	params[1] = (intptr_t)hostname;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&end;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::DomainNameHelper::UnicodeEquivalent(wchar_t* hostname, int32_t start, int32_t end, bool& allAscii, bool& atLeastOneValidIdn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnicodeEquivalent", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32", "System.Boolean&", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)hostname;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&allAscii;
	params[4] = (intptr_t)&atLeastOneValidIdn;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool System::System::DomainNameHelper::IsASCIILetterOrDigit(wchar_t character, bool& notCanonical)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsASCIILetterOrDigit", std::vector<std::string> { "System.Char", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&character;
	params[1] = (intptr_t)&notCanonical;
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
bool System::System::DomainNameHelper::IsValidDomainLabelCharacter(wchar_t character, bool& notCanonical)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidDomainLabelCharacter", std::vector<std::string> { "System.Char", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&character;
	params[1] = (intptr_t)&notCanonical;
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

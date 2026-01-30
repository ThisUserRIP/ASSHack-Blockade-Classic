#include "System_UriHelper.h"

IL2CPP::Il2CppClass* System::System::UriHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System", "UriHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::UriHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<wchar_t>* System::System::UriHelper::EscapeString(mscorlib::System::String* input, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPos, bool isUriString, wchar_t force1, wchar_t force2, wchar_t rsvd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EscapeString", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Char[]", "System.Int32&", "System.Boolean", "System.Char", "System.Char", "System.Char" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)dest;
	params[4] = (intptr_t)&destPos;
	params[5] = (intptr_t)&isUriString;
	params[6] = (intptr_t)&force1;
	params[7] = (intptr_t)&force2;
	params[8] = (intptr_t)&rsvd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
IL2CPP::Array<wchar_t>* System::System::UriHelper::EnsureDestinationSize(wchar_t* pStr, IL2CPP::Array<wchar_t>* dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int32_t& destPos, int32_t prevInputPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureDestinationSize", std::vector<std::string> { "System.Char*", "System.Char[]", "System.Int32", "System.Int16", "System.Int16", "System.Int32&", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)pStr;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&currentInputPos;
	params[3] = (intptr_t)&charsToAdd;
	params[4] = (intptr_t)&minReallocateChars;
	params[5] = (intptr_t)&destPos;
	params[6] = (intptr_t)&prevInputPos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
IL2CPP::Array<wchar_t>* System::System::UriHelper::UnescapeString(mscorlib::System::String* input, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnescapeString", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Char[]", "System.Int32&", "System.Char", "System.Char", "System.Char", "System.UnescapeMode", "System.UriParser", "System.Boolean" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)dest;
	params[4] = (intptr_t)&destPosition;
	params[5] = (intptr_t)&rsvd1;
	params[6] = (intptr_t)&rsvd2;
	params[7] = (intptr_t)&rsvd3;
	params[8] = (intptr_t)&unescapeMode;
	params[9] = (intptr_t)syntax;
	params[10] = (intptr_t)&isQuery;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
IL2CPP::Array<wchar_t>* System::System::UriHelper::UnescapeString(wchar_t* pStr, int32_t start, int32_t end, IL2CPP::Array<wchar_t>* dest, int32_t& destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnescapeString", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32", "System.Char[]", "System.Int32&", "System.Char", "System.Char", "System.Char", "System.UnescapeMode", "System.UriParser", "System.Boolean" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)pStr;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)dest;
	params[4] = (intptr_t)&destPosition;
	params[5] = (intptr_t)&rsvd1;
	params[6] = (intptr_t)&rsvd2;
	params[7] = (intptr_t)&rsvd3;
	params[8] = (intptr_t)&unescapeMode;
	params[9] = (intptr_t)syntax;
	params[10] = (intptr_t)&isQuery;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
void System::System::UriHelper::MatchUTF8Sequence(wchar_t* pDest, IL2CPP::Array<wchar_t>* dest, int32_t& destOffset, IL2CPP::Array<wchar_t>* unescapedChars, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteCount, bool isQuery, bool iriParsing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchUTF8Sequence", std::vector<std::string> { "System.Char*", "System.Char[]", "System.Int32&", "System.Char[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)pDest;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&destOffset;
	params[3] = (intptr_t)unescapedChars;
	params[4] = (intptr_t)&charCount;
	params[5] = (intptr_t)bytes;
	params[6] = (intptr_t)&byteCount;
	params[7] = (intptr_t)&isQuery;
	params[8] = (intptr_t)&iriParsing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::UriHelper::EscapeAsciiChar(wchar_t ch, IL2CPP::Array<wchar_t>* to, int32_t& pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EscapeAsciiChar", std::vector<std::string> { "System.Char", "System.Char[]", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
wchar_t System::System::UriHelper::EscapedAscii(wchar_t digit, wchar_t next)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EscapedAscii", std::vector<std::string> { "System.Char", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&digit;
	params[1] = (intptr_t)&next;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
bool System::System::UriHelper::IsNotSafeForUnescape(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNotSafeForUnescape", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
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
bool System::System::UriHelper::IsReservedUnreservedOrHash(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsReservedUnreservedOrHash", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
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
bool System::System::UriHelper::IsUnreserved(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUnreserved", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
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
bool System::System::UriHelper::Is3986Unreserved(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Is3986Unreserved", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
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
void System::System::UriHelper::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

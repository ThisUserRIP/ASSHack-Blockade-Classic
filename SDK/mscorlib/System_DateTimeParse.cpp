#include "System_DateTimeParse.h"

IL2CPP::Il2CppClass* mscorlib::System::DateTimeParse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "DateTimeParse");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DateTimeParse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::DateTime mscorlib::System::DateTimeParse::ParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseExact", std::vector<std::string> { "System.String", "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DateTimeParse::TryParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseExact", std::vector<std::string> { "System.String", "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&style;
	params[4] = (intptr_t)&result;
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
mscorlib::System::DateTime mscorlib::System::DateTimeParse::ParseExactMultiple(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseExactMultiple", std::vector<std::string> { "System.String", "System.String[]", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)formats;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DateTimeParse::TryParseExactMultiple(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseExactMultiple", std::vector<std::string> { "System.String", "System.String[]", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)formats;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&style;
	params[4] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchWord(mscorlib::System::__DTString& str, mscorlib::System::String* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchWord", std::vector<std::string> { "System.__DTString&", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)target;
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
bool mscorlib::System::DateTimeParse::GetTimeZoneName(mscorlib::System::__DTString& str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeZoneName", std::vector<std::string> { "System.__DTString&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&str;
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
bool mscorlib::System::DateTimeParse::IsDigit(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDigit", std::vector<std::string> { "System.Char" });
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
bool mscorlib::System::DateTimeParse::ParseFraction(mscorlib::System::__DTString& str, double& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFraction", std::vector<std::string> { "System.__DTString&", "System.Double&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::ParseTimeZone(mscorlib::System::__DTString& str, mscorlib::System::TimeSpan& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTimeZone", std::vector<std::string> { "System.__DTString&", "System.TimeSpan&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::HandleTimeZone(mscorlib::System::__DTString& str, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleTimeZone", std::vector<std::string> { "System.__DTString&", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::Lex(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::__DTString& str, mscorlib::System::DateTimeToken& dtok, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::Globalization::DateTimeStyles styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lex", std::vector<std::string> { "System.DateTimeParse/DS", "System.__DTString&", "System.DateTimeToken&", "System.DateTimeRawInfo&", "System.DateTimeResult&", "System.Globalization.DateTimeFormatInfo&", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&dps;
	params[1] = (intptr_t)&str;
	params[2] = (intptr_t)&dtok;
	params[3] = (intptr_t)&raw;
	params[4] = (intptr_t)&result;
	params[5] = (intptr_t)&dtfi;
	params[6] = (intptr_t)&styles;
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
bool mscorlib::System::DateTimeParse::VerifyValidPunctuation(mscorlib::System::__DTString& str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyValidPunctuation", std::vector<std::string> { "System.__DTString&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&str;
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
bool mscorlib::System::DateTimeParse::GetYearMonthDayOrder(mscorlib::System::String* datePattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetYearMonthDayOrder", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)datePattern;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&order;
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
bool mscorlib::System::DateTimeParse::GetYearMonthOrder(mscorlib::System::String* pattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetYearMonthOrder", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pattern;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&order;
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
bool mscorlib::System::DateTimeParse::GetMonthDayOrder(mscorlib::System::String* pattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMonthDayOrder", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pattern;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&order;
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
bool mscorlib::System::DateTimeParse::TryAdjustYear(mscorlib::System::DateTimeResult& result, int32_t year, int32_t& adjustedYear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAdjustYear", std::vector<std::string> { "System.DateTimeResult&", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&year;
	params[2] = (intptr_t)&adjustedYear;
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
bool mscorlib::System::DateTimeParse::SetDateYMD(mscorlib::System::DateTimeResult& result, int32_t year, int32_t month, int32_t day)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDateYMD", std::vector<std::string> { "System.DateTimeResult&", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&year;
	params[2] = (intptr_t)&month;
	params[3] = (intptr_t)&day;
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
bool mscorlib::System::DateTimeParse::SetDateMDY(mscorlib::System::DateTimeResult& result, int32_t month, int32_t day, int32_t year)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDateMDY", std::vector<std::string> { "System.DateTimeResult&", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&day;
	params[3] = (intptr_t)&year;
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
bool mscorlib::System::DateTimeParse::SetDateDMY(mscorlib::System::DateTimeResult& result, int32_t day, int32_t month, int32_t year)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDateDMY", std::vector<std::string> { "System.DateTimeResult&", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&day;
	params[2] = (intptr_t)&month;
	params[3] = (intptr_t)&year;
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
bool mscorlib::System::DateTimeParse::SetDateYDM(mscorlib::System::DateTimeResult& result, int32_t year, int32_t day, int32_t month)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDateYDM", std::vector<std::string> { "System.DateTimeResult&", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&year;
	params[2] = (intptr_t)&day;
	params[3] = (intptr_t)&month;
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
void mscorlib::System::DateTimeParse::GetDefaultYear(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultYear", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::DateTimeParse::GetDayOfNN(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfNN", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	params[2] = (intptr_t)&raw;
	params[3] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfNNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfNNN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfMN(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfMN", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	params[2] = (intptr_t)&raw;
	params[3] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetHebrewDayOfNM(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHebrewDayOfNM", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfNM(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfNM", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	params[2] = (intptr_t)&raw;
	params[3] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfMNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfMNN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfYNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfYNN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfNNY(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfNNY", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfYMN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfYMN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfYN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfYN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::GetDayOfYM(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDayOfYM", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
void mscorlib::System::DateTimeParse::AdjustTimeMark(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdjustTimeMark", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dtfi;
	params[1] = (intptr_t)&raw;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::DateTimeParse::AdjustHour(int32_t& hour, mscorlib::System::DateTimeParse_TM timeMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdjustHour", std::vector<std::string> { "System.Int32&", "System.DateTimeParse/TM" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hour;
	params[1] = (intptr_t)&timeMark;
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
bool mscorlib::System::DateTimeParse::GetTimeOfN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeOfN", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo", "System.DateTimeResult&", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dtfi;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&raw;
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
bool mscorlib::System::DateTimeParse::GetTimeOfNN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeOfNN", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo", "System.DateTimeResult&", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dtfi;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&raw;
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
bool mscorlib::System::DateTimeParse::GetTimeOfNNN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeOfNNN", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo", "System.DateTimeResult&", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dtfi;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&raw;
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
bool mscorlib::System::DateTimeParse::GetDateOfDSN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateOfDSN", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
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
bool mscorlib::System::DateTimeParse::GetDateOfNDS(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateOfNDS", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
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
bool mscorlib::System::DateTimeParse::GetDateOfNNDS(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateOfNNDS", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::ProcessDateTimeSuffix(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::DateTimeToken& dtok)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessDateTimeSuffix", std::vector<std::string> { "System.DateTimeResult&", "System.DateTimeRawInfo&", "System.DateTimeToken&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&raw;
	params[2] = (intptr_t)&dtok;
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
bool mscorlib::System::DateTimeParse::ProcessHebrewTerminalState(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessHebrewTerminalState", std::vector<std::string> { "System.DateTimeParse/DS", "System.DateTimeResult&", "System.Globalization.DateTimeStyles&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dps;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&raw;
	params[4] = (intptr_t)dtfi;
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
bool mscorlib::System::DateTimeParse::ProcessTerminaltState(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminaltState", std::vector<std::string> { "System.DateTimeParse/DS", "System.DateTimeResult&", "System.Globalization.DateTimeStyles&", "System.DateTimeRawInfo&", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dps;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&raw;
	params[4] = (intptr_t)dtfi;
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
mscorlib::System::DateTime mscorlib::System::DateTimeParse::Parse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&styles;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::DateTime mscorlib::System::DateTimeParse::Parse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::TimeSpan& offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles", "System.TimeSpan&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DateTimeParse::TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTime& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles", "System.DateTime&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo", "System.Globalization.DateTimeStyles", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::DetermineTimeZoneAdjustments(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles styles, bool bTimeOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DetermineTimeZoneAdjustments", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	params[2] = (intptr_t)&bTimeOnly;
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
bool mscorlib::System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DateTimeOffsetTimeZonePostProcessing", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
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
bool mscorlib::System::DateTimeParse::AdjustTimeZoneToUniversal(mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdjustTimeZoneToUniversal", std::vector<std::string> { "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::AdjustTimeZoneToLocal(mscorlib::System::DateTimeResult& result, bool bTimeOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdjustTimeZoneToLocal", std::vector<std::string> { "System.DateTimeResult&", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&bTimeOnly;
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
bool mscorlib::System::DateTimeParse::ParseISO8601(mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseISO8601", std::vector<std::string> { "System.DateTimeRawInfo&", "System.__DTString&", "System.Globalization.DateTimeStyles", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&str;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchHebrewDigits(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& number)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchHebrewDigits", std::vector<std::string> { "System.__DTString&", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&digitLen;
	params[2] = (intptr_t)&number;
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
bool mscorlib::System::DateTimeParse::ParseDigits(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDigits", std::vector<std::string> { "System.__DTString&", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&digitLen;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::ParseDigits(mscorlib::System::__DTString& str, int32_t minDigitLen, int32_t maxDigitLen, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDigits", std::vector<std::string> { "System.__DTString&", "System.Int32", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&minDigitLen;
	params[2] = (intptr_t)&maxDigitLen;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::ParseFractionExact(mscorlib::System::__DTString& str, int32_t maxDigitLen, double& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFractionExact", std::vector<std::string> { "System.__DTString&", "System.Int32", "System.Double&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&maxDigitLen;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::ParseSign(mscorlib::System::__DTString& str, bool& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSign", std::vector<std::string> { "System.__DTString&", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::ParseTimeZoneOffset(mscorlib::System::__DTString& str, int32_t len, mscorlib::System::TimeSpan& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTimeZoneOffset", std::vector<std::string> { "System.__DTString&", "System.Int32", "System.TimeSpan&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&len;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchAbbreviatedMonthName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchAbbreviatedMonthName", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchMonthName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchMonthName", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchAbbreviatedDayName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchAbbreviatedDayName", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchDayName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchDayName", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchEraName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchEraName", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchTimeMark(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeParse_TM& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchTimeMark", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.DateTimeParse/TM&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::MatchAbbreviatedTimeMark(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeParse_TM& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchAbbreviatedTimeMark", std::vector<std::string> { "System.__DTString&", "System.Globalization.DateTimeFormatInfo", "System.DateTimeParse/TM&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)dtfi;
	params[2] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::CheckNewValue(int32_t& currentValue, int32_t newValue, wchar_t patternChar, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckNewValue", std::vector<std::string> { "System.Int32&", "System.Int32", "System.Char", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&currentValue;
	params[1] = (intptr_t)&newValue;
	params[2] = (intptr_t)&patternChar;
	params[3] = (intptr_t)&result;
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
mscorlib::System::DateTime mscorlib::System::DateTimeParse::GetDateTimeNow(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateTimeNow", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.DateTimeStyles&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&styles;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::DateTimeParse::CheckDefaultDateTime(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::Calendar& cal, mscorlib::System::Globalization::DateTimeStyles styles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDefaultDateTime", std::vector<std::string> { "System.DateTimeResult&", "System.Globalization.Calendar&", "System.Globalization.DateTimeStyles" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)&cal;
	params[2] = (intptr_t)&styles;
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
mscorlib::System::String* mscorlib::System::DateTimeParse::ExpandPredefinedFormat(mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::ParsingInfo& parseInfo, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandPredefinedFormat", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo&", "System.ParsingInfo&", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&dtfi;
	params[2] = (intptr_t)&parseInfo;
	params[3] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::DateTimeParse::ParseByFormat(mscorlib::System::__DTString& str, mscorlib::System::__DTString& format, mscorlib::System::ParsingInfo& parseInfo, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseByFormat", std::vector<std::string> { "System.__DTString&", "System.__DTString&", "System.ParsingInfo&", "System.Globalization.DateTimeFormatInfo", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&format;
	params[2] = (intptr_t)&parseInfo;
	params[3] = (intptr_t)dtfi;
	params[4] = (intptr_t)&result;
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
bool mscorlib::System::DateTimeParse::TryParseQuoteString(mscorlib::System::String* format, int32_t pos, mscorlib::System::Text::StringBuilder* result, int32_t& returnValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseQuoteString", std::vector<std::string> { "System.String", "System.Int32", "System.Text.StringBuilder", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)result;
	params[3] = (intptr_t)&returnValue;
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
bool mscorlib::System::DateTimeParse::DoStrictParse(mscorlib::System::String* s, mscorlib::System::String* formatParam, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoStrictParse", std::vector<std::string> { "System.String", "System.String", "System.Globalization.DateTimeStyles", "System.Globalization.DateTimeFormatInfo", "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)formatParam;
	params[2] = (intptr_t)&styles;
	params[3] = (intptr_t)dtfi;
	params[4] = (intptr_t)&result;
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
mscorlib::System::Exception* mscorlib::System::DateTimeParse::GetDateTimeParseException(mscorlib::System::DateTimeResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateTimeParseException", std::vector<std::string> { "System.DateTimeResult&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
void mscorlib::System::DateTimeParse::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

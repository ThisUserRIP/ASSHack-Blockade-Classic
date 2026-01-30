#include "System_DateTimeFormat.h"

IL2CPP::Il2CppClass* mscorlib::System::DateTimeFormat::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "DateTimeFormat");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DateTimeFormat::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::DateTimeFormat::FormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatDigits", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)outputBuffer;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeFormat::FormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatDigits", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)outputBuffer;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&len;
	params[3] = (intptr_t)&overrideLengthLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeFormat::HebrewFormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t digits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HebrewFormatDigits", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)outputBuffer;
	params[1] = (intptr_t)&digits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::DateTimeFormat::ParseRepeatPattern(mscorlib::System::String* format, int32_t pos, wchar_t patternChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseRepeatPattern", std::vector<std::string> { "System.String", "System.Int32", "System.Char" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)&patternChar;
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
mscorlib::System::String* mscorlib::System::DateTimeFormat::FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatDayOfWeek", std::vector<std::string> { "System.Int32", "System.Int32", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dayOfWeek;
	params[1] = (intptr_t)&repeat;
	params[2] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::FormatMonth(int32_t month, int32_t repeatCount, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatMonth", std::vector<std::string> { "System.Int32", "System.Int32", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&month;
	params[1] = (intptr_t)&repeatCount;
	params[2] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::FormatHebrewMonthName(mscorlib::System::DateTime time, int32_t month, int32_t repeatCount, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatHebrewMonthName", std::vector<std::string> { "System.DateTime", "System.Int32", "System.Int32", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&repeatCount;
	params[3] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t mscorlib::System::DateTimeFormat::ParseQuoteString(mscorlib::System::String* format, int32_t pos, mscorlib::System::Text::StringBuilder* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseQuoteString", std::vector<std::string> { "System.String", "System.Int32", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)result;
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
int32_t mscorlib::System::DateTimeFormat::ParseNextChar(mscorlib::System::String* format, int32_t pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseNextChar", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&pos;
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
bool mscorlib::System::DateTimeFormat::IsUseGenitiveForm(mscorlib::System::String* format, int32_t index, int32_t tokenLen, wchar_t patternToMatch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUseGenitiveForm", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Char" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&tokenLen;
	params[3] = (intptr_t)&patternToMatch;
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
mscorlib::System::String* mscorlib::System::DateTimeFormat::FormatCustomized(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::TimeSpan offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatCustomized", std::vector<std::string> { "System.DateTime", "System.String", "System.Globalization.DateTimeFormatInfo", "System.TimeSpan" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::DateTimeFormat::FormatCustomizedTimeZone(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset, mscorlib::System::String* format, int32_t tokenLen, bool timeOnly, mscorlib::System::Text::StringBuilder* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatCustomizedTimeZone", std::vector<std::string> { "System.DateTime", "System.TimeSpan", "System.String", "System.Int32", "System.Boolean", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)format;
	params[3] = (intptr_t)&tokenLen;
	params[4] = (intptr_t)&timeOnly;
	params[5] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeFormat::FormatCustomizedRoundripTimeZone(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset, mscorlib::System::Text::StringBuilder* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatCustomizedRoundripTimeZone", std::vector<std::string> { "System.DateTime", "System.TimeSpan", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::GetRealFormat(mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRealFormat", std::vector<std::string> { "System.String", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::ExpandPredefinedFormat(mscorlib::System::String* format, mscorlib::System::DateTime& dateTime, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::TimeSpan& offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandPredefinedFormat", std::vector<std::string> { "System.String", "System.DateTime&", "System.Globalization.DateTimeFormatInfo&", "System.TimeSpan&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&dateTime;
	params[2] = (intptr_t)&dtfi;
	params[3] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::Format(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format", std::vector<std::string> { "System.DateTime", "System.String", "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::DateTimeFormat::Format(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::TimeSpan offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format", std::vector<std::string> { "System.DateTime", "System.String", "System.Globalization.DateTimeFormatInfo", "System.TimeSpan" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)dtfi;
	params[3] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::DateTimeFormat::InvalidFormatForLocal(mscorlib::System::String* format, mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvalidFormatForLocal", std::vector<std::string> { "System.String", "System.DateTime" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeFormat::InvalidFormatForUtc(mscorlib::System::String* format, mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvalidFormatForUtc", std::vector<std::string> { "System.String", "System.DateTime" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeFormat::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

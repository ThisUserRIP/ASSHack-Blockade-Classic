#include "System_Globalization_TimeSpanParse.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::TimeSpanParse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "TimeSpanParse");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::TimeSpanParse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Globalization::TimeSpanParse::TryTimeToTicks(bool positive, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken days, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken hours, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken minutes, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken seconds, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken fraction, int64_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryTimeToTicks", std::vector<std::string> { "System.Boolean", "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Int64&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&positive;
	params[1] = (intptr_t)&days;
	params[2] = (intptr_t)&hours;
	params[3] = (intptr_t)&minutes;
	params[4] = (intptr_t)&seconds;
	params[5] = (intptr_t)&fraction;
	params[6] = (intptr_t)&result;
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
mscorlib::System::TimeSpan mscorlib::System::Globalization::TimeSpanParse::Parse(mscorlib::System::String* input, mscorlib::System::IFormatProvider* formatProvider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)formatProvider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Globalization::TimeSpanParse::TryParseTimeSpan(mscorlib::System::String* input, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::IFormatProvider* formatProvider, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseTimeSpan", std::vector<std::string> { "System.String", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.IFormatProvider", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)formatProvider;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminalState(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminalState", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminal_DHMSF", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminal_HMS_F_D", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminal_HM_S_D", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminal_HM(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminal_HM", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
bool mscorlib::System::Globalization::TimeSpanParse::ProcessTerminal_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessTerminal_D", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanRawInfo&", "System.Globalization.TimeSpanParse/TimeSpanStandardStyles", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&raw;
	params[1] = (intptr_t)&style;
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
void mscorlib::System::Globalization::TimeSpanParse::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

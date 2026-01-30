#include "System_Globalization_TimeSpanParse_TimeSpanRawInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Globalization::TimeSpanParse::GetIl2CppClass(), "TimeSpanRawInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveInvariant()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PositiveInvariant");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals>(*(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeInvariant()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NegativeInvariant");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals>(*(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_PositiveLocalized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PositiveLocalized");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals>(*(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::get_NegativeLocalized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NegativeLocalized");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals>(*(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullAppCompatMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullAppCompatMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::PartialAppCompatMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PartialAppCompatMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullDMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullHMMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullDHMMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullHMSMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullDHMSMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullDHMSMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::FullHMSFMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FullHMSFMatch", std::vector<std::string> { "System.Globalization.TimeSpanFormat/FormatLiterals" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pattern;
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
void mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::Init(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::ProcessToken(mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken& tok, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessToken", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanToken&", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tok;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddSep(mscorlib::System::String* sep, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSep", std::vector<std::string> { "System.String", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sep;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo::AddNum(mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken num, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNum", std::vector<std::string> { "System.Globalization.TimeSpanParse/TimeSpanToken", "System.Globalization.TimeSpanParse/TimeSpanResult&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&num;
	params[1] = (intptr_t)&result;
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

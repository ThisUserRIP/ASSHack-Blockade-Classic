#include "System_TimeZoneInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::TimeZoneInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "TimeZoneInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TimeZoneInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::TimeZoneInfo::UtcOffsetOutOfRange(mscorlib::System::TimeSpan offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UtcOffsetOutOfRange", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&offset;
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
mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* mscorlib::System::TimeZoneInfo::CreateAdjustmentRule(int32_t year, IL2CPP::Array<int64_t>& data, IL2CPP::Array<mscorlib::System::String*>& names, mscorlib::System::String* standardNameCurrentYear, mscorlib::System::String* daylightNameCurrentYear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAdjustmentRule", std::vector<std::string> { "System.Int32", "System.Int64[]&", "System.String[]&", "System.String", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&year;
	params[1] = (intptr_t)&data;
	params[2] = (intptr_t)&names;
	params[3] = (intptr_t)standardNameCurrentYear;
	params[4] = (intptr_t)daylightNameCurrentYear;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::CreateLocalUnity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLocalUnity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
uint32_t mscorlib::System::TimeZoneInfo::EnumDynamicTimeZoneInformation(uint32_t dwIndex, mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnumDynamicTimeZoneInformation", std::vector<std::string> { "System.UInt32", "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dwIndex;
	params[1] = (intptr_t)&lpTimeZoneInformation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::TimeZoneInfo::GetDynamicTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicTimeZoneInformation", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pTimeZoneInformation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::TimeZoneInfo::GetDynamicTimeZoneInformationWin32(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicTimeZoneInformationWin32", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pTimeZoneInformation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::TimeZoneInfo::GetDynamicTimeZoneInformationEffectiveYears(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint32_t& FirstYear, uint32_t& LastYear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicTimeZoneInformationEffectiveYears", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&", "System.UInt32&", "System.UInt32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&lpTimeZoneInformation;
	params[1] = (intptr_t)&FirstYear;
	params[2] = (intptr_t)&LastYear;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::TimeZoneInfo::GetTimeZoneInformationForYear(uint16_t wYear, mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, mscorlib::System::TimeZoneInfo_TIME_ZONE_INFORMATION& ptzi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeZoneInformationForYear", std::vector<std::string> { "System.UInt16", "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&", "System.TimeZoneInfo/TIME_ZONE_INFORMATION&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&wYear;
	params[1] = (intptr_t)&pdtzi;
	params[2] = (intptr_t)&ptzi;
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
mscorlib::System::TimeZoneInfo_AdjustmentRule* mscorlib::System::TimeZoneInfo::CreateAdjustmentRuleFromTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, mscorlib::System::DateTime startDate, mscorlib::System::DateTime endDate, int32_t defaultBaseUtcOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAdjustmentRuleFromTimeZoneInformation", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION&", "System.DateTime", "System.DateTime", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&timeZoneInformation;
	params[1] = (intptr_t)&startDate;
	params[2] = (intptr_t)&endDate;
	params[3] = (intptr_t)&defaultBaseUtcOffset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo_AdjustmentRule*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::TransitionTimeFromTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, mscorlib::System::TimeZoneInfo_TransitionTime& transitionTime, bool readStartDate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransitionTimeFromTimeZoneInformation", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION", "System.TimeZoneInfo/TransitionTime&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&timeZoneInformation;
	params[1] = (intptr_t)&transitionTime;
	params[2] = (intptr_t)&readStartDate;
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::TryCreateTimeZone(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryCreateTimeZone", std::vector<std::string> { "System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&timeZoneInformation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::GetLocalTimeZoneInfoWinRTFallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalTimeZoneInfoWinRTFallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::GetLocalTimeZoneKeyNameWin32Fallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalTimeZoneKeyNameWin32Fallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::FindSystemTimeZoneByIdWinRTFallback(mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSystemTimeZoneByIdWinRTFallback", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo>* mscorlib::System::TimeZoneInfo::GetSystemTimeZonesWinRTFallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemTimeZonesWinRTFallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo>*)returnValue;
}
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::get_BaseUtcOffset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseUtcOffset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::get_DisplayName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DisplayName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::get_Id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Id");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::get_Local()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Local");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
int32_t mscorlib::System::TimeZoneInfo::readlink(mscorlib::System::String* path, IL2CPP::Array<uint8_t>* buffer, int32_t buflen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "readlink", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&buflen;
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
mscorlib::System::String* mscorlib::System::TimeZoneInfo::readlink(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "readlink", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::TryGetNameFromPath(mscorlib::System::String* path, mscorlib::System::String& name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetNameFromPath", std::vector<std::string> { "System.String", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&name;
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::CreateLocal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLocal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::FindSystemTimeZoneByIdCore(mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSystemTimeZoneByIdCore", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
void mscorlib::System::TimeZoneInfo::GetSystemTimeZonesCore(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo>* systemTimeZones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemTimeZonesCore", std::vector<std::string> { "System.Collections.Generic.List`1<System.TimeZoneInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)systemTimeZones;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::TimeZoneInfo::get_SupportsDaylightSavingTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsDaylightSavingTime");
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::get_Utc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Utc");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::get_TimeZoneDirectory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeZoneDirectory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::get_IsWindows()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsWindows");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::TrimSpecial(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrimSpecial", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::System::TimeZoneInfo::get_TimeZoneKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeZoneKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::System::TimeZoneInfo::get_LocalZoneKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalZoneKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::TryAddTicks(mscorlib::System::DateTime date, int64_t ticks, mscorlib::System::DateTime& result, mscorlib::System::DateTimeKind kind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryAddTicks", std::vector<std::string> { "System.DateTime", "System.Int64", "System.DateTime&", "System.DateTimeKind" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&date;
	params[1] = (intptr_t)&ticks;
	params[2] = (intptr_t)&result;
	params[3] = (intptr_t)&kind;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone, mscorlib::System::TimeZoneInfo* destinationTimeZone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTime", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo", "System.TimeZoneInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)sourceTimeZone;
	params[2] = (intptr_t)destinationTimeZone;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTimeFromUtc(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTimeFromUtc", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTimeFromUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* destinationTimeZone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTimeFromUtc", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)destinationTimeZone;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTimeToUtc", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfoOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&flags;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTimeToUtc", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)sourceTimeZone;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone, mscorlib::System::TimeZoneInfoOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTimeToUtc", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo", "System.TimeZoneInfoOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)sourceTimeZone;
	params[2] = (intptr_t)&flags;
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(mscorlib::System::DateTime time, bool& isAmbiguousLocalDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateTimeNowUtcOffsetFromUtc", std::vector<std::string> { "System.DateTime", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&isAmbiguousLocalDst;
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCustomTimeZone", std::vector<std::string> { "System.String", "System.TimeSpan", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&baseUtcOffset;
	params[2] = (intptr_t)displayName;
	params[3] = (intptr_t)standardDisplayName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCustomTimeZone", std::vector<std::string> { "System.String", "System.TimeSpan", "System.String", "System.String", "System.String", "System.TimeZoneInfo/AdjustmentRule[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&baseUtcOffset;
	params[2] = (intptr_t)displayName;
	params[3] = (intptr_t)standardDisplayName;
	params[4] = (intptr_t)daylightDisplayName;
	params[5] = (intptr_t)adjustmentRules;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCustomTimeZone", std::vector<std::string> { "System.String", "System.TimeSpan", "System.String", "System.String", "System.String", "System.TimeZoneInfo/AdjustmentRule[]", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&baseUtcOffset;
	params[2] = (intptr_t)displayName;
	params[3] = (intptr_t)standardDisplayName;
	params[4] = (intptr_t)daylightDisplayName;
	params[5] = (intptr_t)adjustmentRules;
	params[6] = (intptr_t)&disableDaylightSavingTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::TimeZoneInfo::Equals(mscorlib::System::TimeZoneInfo* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.TimeZoneInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::FindSystemTimeZoneById(mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSystemTimeZoneById", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::FindSystemTimeZoneByFileName(mscorlib::System::String* id, mscorlib::System::String* filepath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSystemTimeZoneByFileName", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)filepath;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::FromRegistryKey(mscorlib::System::String* id, mscorlib::Microsoft::Win32::RegistryKey* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromRegistryKey", std::vector<std::string> { "System.String", "Microsoft.Win32.RegistryKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
void mscorlib::System::TimeZoneInfo::ParseRegTzi(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* adjustmentRules, int32_t start_year, int32_t end_year, IL2CPP::Array<uint8_t>* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseRegTzi", std::vector<std::string> { "System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>", "System.Int32", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)adjustmentRules;
	params[1] = (intptr_t)&start_year;
	params[2] = (intptr_t)&end_year;
	params[3] = (intptr_t)buffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* mscorlib::System::TimeZoneInfo::GetAdjustmentRules()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAdjustmentRules");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>*)returnValue;
}
int32_t mscorlib::System::TimeZoneInfo::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::TimeZoneInfo>* mscorlib::System::TimeZoneInfo::GetSystemTimeZones()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemTimeZones");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::TimeZoneInfo>*)returnValue;
}
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetUtcOffset(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffset", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetUtcOffset(mscorlib::System::DateTime dateTime, bool& isDST, bool forOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffset", std::vector<std::string> { "System.DateTime", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&isDST;
	params[2] = (intptr_t)&forOffset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetUtcOffsetHelper(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* tz, bool& isDST, bool forOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffsetHelper", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)tz;
	params[2] = (intptr_t)&isDST;
	params[3] = (intptr_t)&forOffset;
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
bool mscorlib::System::TimeZoneInfo::HasSameRules(mscorlib::System::TimeZoneInfo* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasSameRules", std::vector<std::string> { "System.TimeZoneInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
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
bool mscorlib::System::TimeZoneInfo::IsAmbiguousTime(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAmbiguousTime", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
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
bool mscorlib::System::TimeZoneInfo::IsAmbiguousLocalDstFromUtc(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAmbiguousLocalDstFromUtc", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
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
bool mscorlib::System::TimeZoneInfo::IsInDST(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule, mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInDST", std::vector<std::string> { "System.TimeZoneInfo/AdjustmentRule", "System.DateTime" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rule;
	params[1] = (intptr_t)&dateTime;
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
bool mscorlib::System::TimeZoneInfo::IsInDSTForYear(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule, mscorlib::System::DateTime dateTime, int32_t year)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInDSTForYear", std::vector<std::string> { "System.TimeZoneInfo/AdjustmentRule", "System.DateTime", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rule;
	params[1] = (intptr_t)&dateTime;
	params[2] = (intptr_t)&year;
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
bool mscorlib::System::TimeZoneInfo::IsInvalidTime(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInvalidTime", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
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
void mscorlib::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sender;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo::Validate(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate", std::vector<std::string> { "System.String", "System.TimeSpan", "System.TimeZoneInfo/AdjustmentRule[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&baseUtcOffset;
	params[2] = (intptr_t)adjustmentRules;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::TimeZoneInfo::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::TimeZoneInfo::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo::_ctor(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.TimeSpan", "System.String", "System.String", "System.String", "System.TimeZoneInfo/AdjustmentRule[]", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&baseUtcOffset;
	params[2] = (intptr_t)displayName;
	params[3] = (intptr_t)standardDisplayName;
	params[4] = (intptr_t)daylightDisplayName;
	params[5] = (intptr_t)adjustmentRules;
	params[6] = (intptr_t)&disableDaylightSavingTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeZoneInfo_AdjustmentRule* mscorlib::System::TimeZoneInfo::GetApplicableRule(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetApplicableRule", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo_AdjustmentRule*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::TryGetTransitionOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan& offset, bool& isDst, bool forOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetTransitionOffset", std::vector<std::string> { "System.DateTime", "System.TimeSpan&", "System.Boolean&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&isDst;
	params[3] = (intptr_t)&forOffset;
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
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::TransitionPoint(mscorlib::System::TimeZoneInfo_TransitionTime transition, int32_t year)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransitionPoint", std::vector<std::string> { "System.TimeZoneInfo/TransitionTime", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&transition;
	params[1] = (intptr_t)&year;
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
IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* mscorlib::System::TimeZoneInfo::ValidateRules(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* adjustmentRules)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateRules", std::vector<std::string> { "System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)adjustmentRules;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>*)returnValue;
}
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::BuildFromStream(mscorlib::System::String* id, mscorlib::System::IO::Stream* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildFromStream", std::vector<std::string> { "System.String", "System.IO.Stream" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
bool mscorlib::System::TimeZoneInfo::ValidTZFile(IL2CPP::Array<uint8_t>* buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidTZFile", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&length;
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
int32_t mscorlib::System::TimeZoneInfo::SwapInt32(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwapInt32", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
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
int32_t mscorlib::System::TimeZoneInfo::ReadBigEndianInt32(IL2CPP::Array<uint8_t>* buffer, int32_t start)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadBigEndianInt32", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&start;
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
mscorlib::System::TimeZoneInfo* mscorlib::System::TimeZoneInfo::ParseTZBuffer(mscorlib::System::String* id, IL2CPP::Array<uint8_t>* buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTZBuffer", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* mscorlib::System::TimeZoneInfo::ParseAbbreviations(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAbbreviations", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::TimeType>* mscorlib::System::TimeZoneInfo::ParseTimesTypes(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* abbreviations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTimesTypes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Collections.Generic.Dictionary`2<System.Int32,System.String>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)abbreviations;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::TimeType>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::DateTime, mscorlib::System::TimeType>>* mscorlib::System::TimeZoneInfo::ParseTransitions(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::TimeType>* time_types)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTransitions", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Collections.Generic.Dictionary`2<System.Int32,System.TimeType>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)time_types;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::DateTime, mscorlib::System::TimeType>>*)returnValue;
}
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo::DateTimeFromUnixTime(int64_t unix_time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DateTimeFromUnixTime", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unix_time;
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetLocalUtcOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalUtcOffset", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfoOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&flags;
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetUtcOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffset", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfoOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo::GetUtcOffsetFromUtc(mscorlib::System::DateTime time, mscorlib::System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffsetFromUtc", std::vector<std::string> { "System.DateTime", "System.TimeZoneInfo", "System.Boolean&", "System.Boolean&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)zone;
	params[2] = (intptr_t)&isDaylightSavings;
	params[3] = (intptr_t)&isAmbiguousLocalDst;
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
void mscorlib::System::TimeZoneInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_CurrentSystemTimeZone.h"

IL2CPP::Il2CppClass* mscorlib::System::CurrentSystemTimeZone::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "CurrentSystemTimeZone");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::CurrentSystemTimeZone::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::CurrentSystemTimeZone::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeSpan mscorlib::System::CurrentSystemTimeZone::GetUtcOffset(mscorlib::System::DateTime dateTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUtcOffset", std::vector<std::string> { "System.DateTime" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dateTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::CurrentSystemTimeZone::GetTimeZoneData(int32_t year, IL2CPP::Array<int64_t>& data, IL2CPP::Array<mscorlib::System::String*>& names, bool& daylight_inverted)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeZoneData", std::vector<std::string> { "System.Int32", "System.Int64[]&", "System.String[]&", "System.Boolean&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&year;
	params[1] = (intptr_t)&data;
	params[2] = (intptr_t)&names;
	params[3] = (intptr_t)&daylight_inverted;
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

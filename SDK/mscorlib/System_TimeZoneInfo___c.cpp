#include "System_TimeZoneInfo___c.h"

IL2CPP::Il2CppClass* mscorlib::System::TimeZoneInfo___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::TimeZoneInfo::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TimeZoneInfo___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::TimeZoneInfo___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::TimeZoneInfo___c::_CreateLocalUnity_b__19_0(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule1, mscorlib::System::TimeZoneInfo_AdjustmentRule* rule2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<CreateLocalUnity>b__19_0", std::vector<std::string> { "System.TimeZoneInfo/AdjustmentRule", "System.TimeZoneInfo/AdjustmentRule" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rule1;
	params[1] = (intptr_t)rule2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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

#include "Rewired_Data_UserDataStore_PlayerPrefs___c__DisplayClass78_2.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass78_2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs::GetIl2CppClass(), "<>c__DisplayClass78_2");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass78_2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass78_2::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs___c__DisplayClass78_2::_LoadJoystickAssignmentsNow_b__2(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<LoadJoystickAssignmentsNow>b__2", std::vector<std::string> { "Rewired.Data.UserDataStore_PlayerPrefs/JoystickAssignmentHistoryInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
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

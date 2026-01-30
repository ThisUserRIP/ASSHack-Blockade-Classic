#include "Rewired_Data_UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs::GetIl2CppClass(), "JoystickAssignmentHistoryInfo");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo::_ctor(Rewired_Core::Rewired::Joystick* joystick, int32_t oldJoystickId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Joystick", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)joystick;
	params[1] = (intptr_t)&oldJoystickId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

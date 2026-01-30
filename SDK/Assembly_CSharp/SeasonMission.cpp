#include "SeasonMission.h"

IL2CPP::Il2CppClass* Assembly_CSharp::SeasonMission::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "SeasonMission");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::SeasonMission::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::SeasonMission::_ctor(int32_t _mID, mscorlib::System::String* _target, mscorlib::System::String* _current, int32_t _reward, int32_t _stat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&_mID;
	params[1] = (intptr_t)_target;
	params[2] = (intptr_t)_current;
	params[3] = (intptr_t)&_reward;
	params[4] = (intptr_t)&_stat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

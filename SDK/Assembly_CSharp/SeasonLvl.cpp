#include "SeasonLvl.h"

IL2CPP::Il2CppClass* Assembly_CSharp::SeasonLvl::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "SeasonLvl");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::SeasonLvl::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::SeasonLvl::_ctor(int32_t _lvl, mscorlib::System::String* _freeRewardRaw, mscorlib::System::String* _premiumRewardRaw)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_lvl;
	params[1] = (intptr_t)_freeRewardRaw;
	params[2] = (intptr_t)_premiumRewardRaw;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

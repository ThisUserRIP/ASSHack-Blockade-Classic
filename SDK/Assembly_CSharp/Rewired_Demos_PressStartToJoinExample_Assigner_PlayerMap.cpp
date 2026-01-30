#include "Rewired_Demos_PressStartToJoinExample_Assigner_PlayerMap.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner_PlayerMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner::GetIl2CppClass(), "PlayerMap");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner_PlayerMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner_PlayerMap::_ctor(int32_t rewiredPlayerId, int32_t gamePlayerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rewiredPlayerId;
	params[1] = (intptr_t)&gamePlayerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

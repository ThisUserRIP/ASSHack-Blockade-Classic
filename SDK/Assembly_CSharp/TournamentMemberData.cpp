#include "TournamentMemberData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::TournamentMemberData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "TournamentMemberData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::TournamentMemberData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::TournamentMemberData::_ctor(int32_t _place, int32_t _network, mscorlib::System::String* _nickname, bool _premium, int32_t _exp, int32_t _reward)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.String", "System.Boolean", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&_place;
	params[1] = (intptr_t)&_network;
	params[2] = (intptr_t)_nickname;
	params[3] = (intptr_t)&_premium;
	params[4] = (intptr_t)&_exp;
	params[5] = (intptr_t)&_reward;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TournamentMemberData::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TournamentMemberData::DrawMemberData(int32_t x, int32_t y, bool my_place)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMemberData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&my_place;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

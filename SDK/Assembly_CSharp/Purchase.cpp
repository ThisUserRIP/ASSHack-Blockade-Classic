#include "Purchase.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Purchase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Purchase");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Purchase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Purchase::_ctor(int32_t _PID, int32_t _PTime, int32_t _PMoney, int32_t _PCost, int32_t _PItem, int32_t _PStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&_PID;
	params[1] = (intptr_t)&_PTime;
	params[2] = (intptr_t)&_PMoney;
	params[3] = (intptr_t)&_PCost;
	params[4] = (intptr_t)&_PItem;
	params[5] = (intptr_t)&_PStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

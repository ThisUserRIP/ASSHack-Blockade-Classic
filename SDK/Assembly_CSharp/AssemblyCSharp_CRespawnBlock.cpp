#include "AssemblyCSharp_CRespawnBlock.h"

IL2CPP::Il2CppClass* Assembly_CSharp::AssemblyCSharp::CRespawnBlock::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "AssemblyCSharp", "CRespawnBlock");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::AssemblyCSharp::CRespawnBlock::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::AssemblyCSharp::CRespawnBlock::_ctor(int32_t t, int32_t x, int32_t y, int32_t z, int32_t gm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&t;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&z;
	params[4] = (intptr_t)&gm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

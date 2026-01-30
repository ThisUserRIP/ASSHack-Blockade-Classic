#include "flakesnow.h"

IL2CPP::Il2CppClass* Assembly_CSharp::flakesnow::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "flakesnow");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::flakesnow::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::flakesnow::_ctor(UnityEngine_CoreModule::UnityEngine::Texture2D* tex_fl, UnityEngine_CoreModule::UnityEngine::Rect rec_fl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tex_fl;
	params[1] = (intptr_t)&rec_fl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

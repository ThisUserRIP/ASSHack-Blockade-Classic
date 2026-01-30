#include "GUIUtils.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GUIUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "GUIUtils");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GUIUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* Assembly_CSharp::GUIUtils::Separate(UnityEngine_CoreModule::UnityEngine::Rect mainRect, int32_t xCount, int32_t yCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Separate", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&mainRect;
	params[1] = (intptr_t)&xCount;
	params[2] = (intptr_t)&yCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>*)returnValue;
}
void Assembly_CSharp::GUIUtils::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

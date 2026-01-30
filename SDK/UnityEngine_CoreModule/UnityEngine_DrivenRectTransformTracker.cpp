#include "UnityEngine_DrivenRectTransformTracker.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "DrivenRectTransformTracker");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker::Add(UnityEngine_CoreModule::UnityEngine::Object* driver, UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_CoreModule::UnityEngine::DrivenTransformProperties drivenProperties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "UnityEngine.Object", "UnityEngine.RectTransform", "UnityEngine.DrivenTransformProperties" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)driver;
	params[1] = (intptr_t)rectTransform;
	params[2] = (intptr_t)&drivenProperties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

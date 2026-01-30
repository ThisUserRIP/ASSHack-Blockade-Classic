#include "UnityEngine_UISystemProfilerApi.h"

IL2CPP::Il2CppClass* UnityEngine_UIModule::UnityEngine::UISystemProfilerApi::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIModule.dll", "UnityEngine", "UISystemProfilerApi");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIModule::UnityEngine::UISystemProfilerApi::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UIModule::UnityEngine::UISystemProfilerApi::BeginSample(UnityEngine_UIModule::UnityEngine::UISystemProfilerApi_SampleType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSample", std::vector<std::string> { "UnityEngine.UISystemProfilerApi/SampleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::UISystemProfilerApi::EndSample(UnityEngine_UIModule::UnityEngine::UISystemProfilerApi_SampleType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSample", std::vector<std::string> { "UnityEngine.UISystemProfilerApi/SampleType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::UISystemProfilerApi::AddMarker(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMarker", std::vector<std::string> { "System.String", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

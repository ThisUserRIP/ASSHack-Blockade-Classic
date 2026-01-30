#include "UnityEngine_Experimental_GlobalIllumination_Lightmapping___c.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c::__cctor_b__7_0(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Light*>* requests, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<.cctor>b__7_0", std::vector<std::string> { "UnityEngine.Light[]", "Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)requests;
	params[1] = (intptr_t)&lightsOutput;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

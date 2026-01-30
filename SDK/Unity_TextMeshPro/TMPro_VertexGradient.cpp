#include "TMPro_VertexGradient.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::VertexGradient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "VertexGradient");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::VertexGradient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::VertexGradient::_ctor(UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::VertexGradient::_ctor(UnityEngine_CoreModule::UnityEngine::Color color0, UnityEngine_CoreModule::UnityEngine::Color color1, UnityEngine_CoreModule::UnityEngine::Color color2, UnityEngine_CoreModule::UnityEngine::Color color3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&color0;
	params[1] = (intptr_t)&color1;
	params[2] = (intptr_t)&color2;
	params[3] = (intptr_t)&color3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

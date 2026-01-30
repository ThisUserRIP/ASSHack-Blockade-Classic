#include "TMPro_Compute_DT_EventArgs.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::Compute_DT_EventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "Compute_DT_EventArgs");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::Compute_DT_EventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::Compute_DT_EventArgs::_ctor(Unity_TextMeshPro::TMPro::Compute_DistanceTransform_EventTypes type, float progress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.Compute_DistanceTransform_EventTypes", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&progress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::Compute_DT_EventArgs::_ctor(Unity_TextMeshPro::TMPro::Compute_DistanceTransform_EventTypes type, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.Compute_DistanceTransform_EventTypes", "UnityEngine.Color[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)colors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "TMPro_SetPropertyUtility.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::SetPropertyUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "SetPropertyUtility");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::SetPropertyUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_TextMeshPro::TMPro::SetPropertyUtility::SetColor(UnityEngine_CoreModule::UnityEngine::Color& currentValue, UnityEngine_CoreModule::UnityEngine::Color newValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColor", std::vector<std::string> { "UnityEngine.Color&", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&currentValue;
	params[1] = (intptr_t)&newValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

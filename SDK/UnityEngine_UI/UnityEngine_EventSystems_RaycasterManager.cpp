#include "UnityEngine_EventSystems_RaycasterManager.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "RaycasterManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::AddRaycaster(UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRaycaster", std::vector<std::string> { "UnityEngine.EventSystems.BaseRaycaster" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)baseRaycaster;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster>* UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::GetRaycasters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRaycasters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster>*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters(UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveRaycasters", std::vector<std::string> { "UnityEngine.EventSystems.BaseRaycaster" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)baseRaycaster;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::RaycasterManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

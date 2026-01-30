#include "TMPro_TMPro_EventManager.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMPro_EventManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMPro_EventManager");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMPro_EventManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Material* mat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_MATERIAL_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&isChanged;
	params[1] = (intptr_t)mat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_FONT_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_FONT_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&isChanged;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_SPRITE_ASSET_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&isChanged;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_TEXTMESHPRO_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&isChanged;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine_CoreModule::UnityEngine::GameObject* sender, UnityEngine_CoreModule::UnityEngine::Material* currentMaterial, UnityEngine_CoreModule::UnityEngine::Material* newMaterial)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_DRAG_AND_DROP_MATERIAL_CHANGED", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Material", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sender;
	params[1] = (intptr_t)currentMaterial;
	params[2] = (intptr_t)newMaterial;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_TEXT_STYLE_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isChanged;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_COLOR_GRADIENT_PROPERTY_CHANGED(UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_COLOR_GRADIENT_PROPERTY_CHANGED", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_TEXT_CHANGED(UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_TEXT_CHANGED", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_TMP_SETTINGS_CHANGED()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_TMP_SETTINGS_CHANGED");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_RESOURCES_LOADED()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_RESOURCES_LOADED");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED", std::vector<std::string> { "System.Boolean", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&isChanged;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::ON_COMPUTE_DT_EVENT(mscorlib::System::Object* Sender, Unity_TextMeshPro::TMPro::Compute_DT_EventArgs* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ON_COMPUTE_DT_EVENT", std::vector<std::string> { "System.Object", "TMPro.Compute_DT_EventArgs" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Sender;
	params[1] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMPro_EventManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

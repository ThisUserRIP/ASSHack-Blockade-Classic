#include "TMPro_TMP_DefaultControls.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_DefaultControls::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_DefaultControls");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_DefaultControls::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateUIElementRoot(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIElementRoot", std::vector<std::string> { "System.String", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateUIObject(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIObject", std::vector<std::string> { "System.String", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_DefaultControls::SetDefaultTextValues(Unity_TextMeshPro::TMPro::TMP_Text* lbl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultTextValues", std::vector<std::string> { "TMPro.TMP_Text" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lbl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues(UnityEngine_UI::UnityEngine::UI::Selectable* slider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultColorTransitionValues", std::vector<std::string> { "UnityEngine.UI.Selectable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)slider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_DefaultControls::SetParentAndAlign(UnityEngine_CoreModule::UnityEngine::GameObject* child, UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetParentAndAlign", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)child;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_DefaultControls::SetLayerRecursively(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLayerRecursively", std::vector<std::string> { "UnityEngine.GameObject", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)go;
	params[1] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateScrollbar(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateScrollbar", std::vector<std::string> { "TMPro.TMP_DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateButton(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateButton", std::vector<std::string> { "TMPro.TMP_DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateText(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateText", std::vector<std::string> { "TMPro.TMP_DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateInputField(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInputField", std::vector<std::string> { "TMPro.TMP_DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_TextMeshPro::TMPro::TMP_DefaultControls::CreateDropdown(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDropdown", std::vector<std::string> { "TMPro.TMP_DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_DefaultControls::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

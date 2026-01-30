#include "UnityEngine_UI_DefaultControls.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::DefaultControls::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "DefaultControls");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::DefaultControls::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls* UnityEngine_UI::UnityEngine::UI::DefaultControls::get_factory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_factory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateUIElementRoot(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 size, IL2CPP::Array<mscorlib::System::Type*>* components)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIElementRoot", std::vector<std::string> { "System.String", "UnityEngine.Vector2", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&size;
	params[2] = (intptr_t)components;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateUIObject(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::GameObject* parent, IL2CPP::Array<mscorlib::System::Type*>* components)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIObject", std::vector<std::string> { "System.String", "UnityEngine.GameObject", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)parent;
	params[2] = (intptr_t)components;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::DefaultControls::SetDefaultTextValues(UnityEngine_UI::UnityEngine::UI::Text* lbl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultTextValues", std::vector<std::string> { "UnityEngine.UI.Text" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lbl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues(UnityEngine_UI::UnityEngine::UI::Selectable* slider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultColorTransitionValues", std::vector<std::string> { "UnityEngine.UI.Selectable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)slider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::DefaultControls::SetParentAndAlign(UnityEngine_CoreModule::UnityEngine::GameObject* child, UnityEngine_CoreModule::UnityEngine::GameObject* parent)
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
void UnityEngine_UI::UnityEngine::UI::DefaultControls::SetLayerRecursively(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t layer)
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
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreatePanel(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePanel", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateButton(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateButton", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateText(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateText", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateImage(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateImage", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateRawImage(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRawImage", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateSlider(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSlider", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateScrollbar(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateScrollbar", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateToggle(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateToggle", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateInputField(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInputField", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateDropdown(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDropdown", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls::CreateScrollView(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateScrollView", std::vector<std::string> { "UnityEngine.UI.DefaultControls/Resources" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::DefaultControls::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

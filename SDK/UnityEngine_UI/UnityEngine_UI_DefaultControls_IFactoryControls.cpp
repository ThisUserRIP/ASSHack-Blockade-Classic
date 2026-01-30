#include "UnityEngine_UI_DefaultControls_IFactoryControls.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_UI::UnityEngine::UI::DefaultControls::GetIl2CppClass(), "IFactoryControls");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls::CreateGameObject(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Type*>* components)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGameObject", std::vector<std::string> { "System.String", "System.Type[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)components;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}

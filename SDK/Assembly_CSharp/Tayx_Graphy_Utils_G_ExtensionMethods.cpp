#include "Tayx_Graphy_Utils_G_ExtensionMethods.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Tayx::Graphy::Utils::G_ExtensionMethods::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Tayx.Graphy.Utils", "G_ExtensionMethods");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Tayx::Graphy::Utils::G_ExtensionMethods::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* Assembly_CSharp::Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* gameObjects, bool active)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllActive", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.GameObject>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObjects;
	params[1] = (intptr_t)&active;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* Assembly_CSharp::Tayx::Graphy::Utils::G_ExtensionMethods::SetOneActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* images, int32_t active)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOneActive", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UI.Image>", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)images;
	params[1] = (intptr_t)&active;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* Assembly_CSharp::Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* images, bool active)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllActive", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UI.Image>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)images;
	params[1] = (intptr_t)&active;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>*)returnValue;
}

#include "Rewired_Utils_GUITools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::GUITools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "GUITools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::GUITools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* Rewired_Core::Rewired::Utils::GUITools::GetRotatedTexture(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, float angle, UnityEngine_CoreModule::UnityEngine::Color backgroundColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRotatedTexture", std::vector<std::string> { "UnityEngine.Texture2D", "System.Single", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&angle;
	params[2] = (intptr_t)&backgroundColor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* Rewired_Core::Rewired::Utils::GUITools::ToGUIContentArray(IL2CPP::Array<mscorlib::System::String*>* items)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToGUIContentArray", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)items;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>*)returnValue;
}
IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* Rewired_Core::Rewired::Utils::GUITools::ToGUIContentArray(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* items)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToGUIContentArray", std::vector<std::string> { "System.Collections.Generic.IList`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)items;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>*)returnValue;
}

#include "UnityEngine_UI_GraphicRegistry.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::GraphicRegistry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "GraphicRegistry");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::GraphicRegistry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::GraphicRegistry* UnityEngine_UI::UnityEngine::UI::GraphicRegistry::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::GraphicRegistry*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterGraphicForCanvas", std::vector<std::string> { "UnityEngine.Canvas", "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)graphic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::RegisterRaycastGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterRaycastGraphicForCanvas", std::vector<std::string> { "UnityEngine.Canvas", "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)graphic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterGraphicForCanvas", std::vector<std::string> { "UnityEngine.Canvas", "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)graphic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::UnregisterRaycastGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterRaycastGraphicForCanvas", std::vector<std::string> { "UnityEngine.Canvas", "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)graphic;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* UnityEngine_UI::UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* canvas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsForCanvas", std::vector<std::string> { "UnityEngine.Canvas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)canvas;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* UnityEngine_UI::UnityEngine::UI::GraphicRegistry::GetRaycastableGraphicsForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* canvas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRaycastableGraphicsForCanvas", std::vector<std::string> { "UnityEngine.Canvas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)canvas;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::GraphicRegistry::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

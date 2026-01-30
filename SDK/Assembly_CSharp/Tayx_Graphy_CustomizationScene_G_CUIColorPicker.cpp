#include "Tayx_Graphy_CustomizationScene_G_CUIColorPicker.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Tayx.Graphy.CustomizationScene", "G_CUIColorPicker");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Color Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::get_Color()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Color");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::set_Color(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Color", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::SetOnValueChangeCallback(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Color>* onValueChange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOnValueChangeCallback", std::vector<std::string> { "System.Action`1<UnityEngine.Color>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)onValueChange;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::RGBToHSV(UnityEngine_CoreModule::UnityEngine::Color color, float& h, float& s, float& v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RGBToHSV", std::vector<std::string> { "UnityEngine.Color", "System.Single&", "System.Single&", "System.Single&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&h;
	params[2] = (intptr_t)&s;
	params[3] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::GetLocalMouse(UnityEngine_CoreModule::UnityEngine::GameObject* go, UnityEngine_CoreModule::UnityEngine::Vector2& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalMouse", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)go;
	params[1] = (intptr_t)&result;
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
UnityEngine_CoreModule::UnityEngine::Vector2 Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::GetWidgetSize(UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWidgetSize", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::GO(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GO", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::Setup(UnityEngine_CoreModule::UnityEngine::Color inputColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inputColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::SetRandomColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRandomColor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::CustomizationScene::G_CUIColorPicker::_Start_b__16_0(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Start>b__16_0", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

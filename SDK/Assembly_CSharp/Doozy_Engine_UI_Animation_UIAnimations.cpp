#include "Doozy_Engine_UI_Animation_UIAnimations.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Animation", "UIAnimations");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::CreateDatabase(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* newPresetCategory, bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDatabase", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&databaseType;
	params[1] = (intptr_t)newPresetCategory;
	params[2] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&databaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationsDatabase*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* databaseName, mscorlib::System::String* animationName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&databaseType;
	params[1] = (intptr_t)databaseName;
	params[2] = (intptr_t)animationName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::Get(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType databaseType, mscorlib::System::String* databaseName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&databaseType;
	params[1] = (intptr_t)databaseName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::SearchForUnregisteredDatabases(bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchForUnregisteredDatabases", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::SetDirty(bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDirty", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::LoadPreset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, mscorlib::System::String* presetCategory, mscorlib::System::String* presetName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadPreset", std::vector<std::string> { "Doozy.Engine.UI.Animation.AnimationType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&animationType;
	params[1] = (intptr_t)presetCategory;
	params[2] = (intptr_t)presetName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimations::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

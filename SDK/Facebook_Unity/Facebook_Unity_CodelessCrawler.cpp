#include "Facebook_Unity_CodelessCrawler.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::CodelessCrawler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "CodelessCrawler");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::CodelessCrawler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::CaptureViewHierarchy(mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CaptureViewHierarchy", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Facebook_Unity::Facebook::Unity::CodelessCrawler::GenSnapshot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenSnapshot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::SendAndroid(mscorlib::System::String* json)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendAndroid", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)json;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::SendIos(mscorlib::System::String* json)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendIos", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)json;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::CodelessCrawler::GenBase64Screenshot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenBase64Screenshot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::CodelessCrawler::GenViewJson()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenViewJson");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::GenChild(UnityEngine_CoreModule::UnityEngine::GameObject* curObj, mscorlib::System::Text::StringBuilder* builder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenChild", std::vector<std::string> { "UnityEngine.GameObject", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)curObj;
	params[1] = (intptr_t)builder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::onActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg0, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onActiveSceneChanged", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&arg0;
	params[1] = (intptr_t)&arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::updateMainCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "updateMainCamera");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Facebook_Unity::Facebook::Unity::CodelessCrawler::getScreenCoordinate(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_UIModule::UnityEngine::RenderMode renderMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getScreenCoordinate", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.RenderMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&renderMode;
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
mscorlib::System::String* Facebook_Unity::Facebook::Unity::CodelessCrawler::getClasstypeBitmaskButton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getClasstypeBitmaskButton");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::CodelessCrawler::getVisibility(UnityEngine_CoreModule::UnityEngine::GameObject* gameObj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getVisibility", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gameObj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessCrawler::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

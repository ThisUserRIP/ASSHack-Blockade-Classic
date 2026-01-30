#include "Doozy_Engine_Utils_DoozyUtils.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Utils", "DoozyUtils");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::UI::Image* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::AddImageToGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddImageToGameObject", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Image*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::CreateGameObjectWithAnImageComponent(mscorlib::System::String* objectName, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGameObjectWithAnImageComponent", std::vector<std::string> { "System.String", "UnityEngine.Color", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectName;
	params[1] = (intptr_t)&color;
	params[2] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::CreateBackgroundImage(UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateBackgroundImage", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::CreateOverlayImage(UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateOverlayImage", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::AddObjectToAsset(UnityEngine_CoreModule::UnityEngine::Object* objectToAdd, UnityEngine_CoreModule::UnityEngine::Object* assetObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddObjectToAsset", std::vector<std::string> { "UnityEngine.Object", "UnityEngine.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectToAdd;
	params[1] = (intptr_t)assetObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::DisplayDialog(mscorlib::System::String* title, mscorlib::System::String* message, mscorlib::System::String* ok)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisplayDialog", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)title;
	params[1] = (intptr_t)message;
	params[2] = (intptr_t)ok;
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
bool Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::DisplayDialog(mscorlib::System::String* title, mscorlib::System::String* message, mscorlib::System::String* ok, mscorlib::System::String* cancel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisplayDialog", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)title;
	params[1] = (intptr_t)message;
	params[2] = (intptr_t)ok;
	params[3] = (intptr_t)cancel;
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
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::DisplayProgressBar(mscorlib::System::String* title, mscorlib::System::String* info, float progress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisplayProgressBar", std::vector<std::string> { "System.String", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)title;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)&progress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::DisplayCancelableProgressBar(mscorlib::System::String* title, mscorlib::System::String* info, float progress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisplayCancelableProgressBar", std::vector<std::string> { "System.String", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)title;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)&progress;
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
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::ClearProgressBar()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearProgressBar");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::MoveAssetToTrash(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveAssetToTrash", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
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
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::SaveAssets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveAssets");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::SetDirty(UnityEngine_CoreModule::UnityEngine::Object* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDirty", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::SetDirty(UnityEngine_CoreModule::UnityEngine::Object* target, bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDirty", std::vector<std::string> { "UnityEngine.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::UndoRecordObject(UnityEngine_CoreModule::UnityEngine::Object* objectToUndo, mscorlib::System::String* undoMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UndoRecordObject", std::vector<std::string> { "UnityEngine.Object", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectToUndo;
	params[1] = (intptr_t)undoMessage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::UndoRecordObject(UnityEngine_CoreModule::UnityEngine::Object* objectToUndo, mscorlib::System::String* undoMessage, bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UndoRecordObject", std::vector<std::string> { "UnityEngine.Object", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectToUndo;
	params[1] = (intptr_t)undoMessage;
	params[2] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::UndoRecordObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* objectsToUndo, mscorlib::System::String* undoMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UndoRecordObjects", std::vector<std::string> { "UnityEngine.Object[]", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectsToUndo;
	params[1] = (intptr_t)undoMessage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::UndoRecordObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* objectsToUndo, mscorlib::System::String* undoMessage, bool saveAssets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UndoRecordObjects", std::vector<std::string> { "UnityEngine.Object[]", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectsToUndo;
	params[1] = (intptr_t)undoMessage;
	params[2] = (intptr_t)&saveAssets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::DoozyUtils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

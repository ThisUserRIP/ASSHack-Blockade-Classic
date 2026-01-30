#include "UnityEngine_U2D_SpriteAtlasManager.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.U2D", "SpriteAtlasManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::RequestAtlas(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestAtlas", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
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
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_atlasRegistered", std::vector<std::string> { "System.Action`1<UnityEngine.U2D.SpriteAtlas>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_atlasRegistered", std::vector<std::string> { "System.Action`1<UnityEngine.U2D.SpriteAtlas>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostRegisteredAtlas", std::vector<std::string> { "UnityEngine.U2D.SpriteAtlas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)spriteAtlas;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::Register(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Register", std::vector<std::string> { "UnityEngine.U2D.SpriteAtlas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)spriteAtlas;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlasManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

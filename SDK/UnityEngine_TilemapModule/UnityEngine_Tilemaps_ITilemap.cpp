#include "UnityEngine_Tilemaps_ITilemap.h"

IL2CPP::Il2CppClass* UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TilemapModule.dll", "UnityEngine.Tilemaps", "ITilemap");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap::RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshTile", std::vector<std::string> { "UnityEngine.Vector3Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap::CreateInstance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap*)returnValue;
}

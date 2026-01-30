#include "UnityEngine_Tilemaps_Tilemap.h"

IL2CPP::Il2CppClass* UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tilemap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TilemapModule.dll", "UnityEngine.Tilemaps", "Tilemap");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tilemap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tilemap::RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshTile", std::vector<std::string> { "UnityEngine.Vector3Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected(UnityEngine_CoreModule::UnityEngine::Vector3Int& position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshTile_Injected", std::vector<std::string> { "UnityEngine.Vector3Int&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityEngine_Tilemaps_TileData.h"

IL2CPP::Il2CppClass* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TilemapModule.dll", "UnityEngine.Tilemaps", "TileData");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_sprite(UnityEngine_CoreModule::UnityEngine::Sprite* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sprite", std::vector<std::string> { "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_color(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_color", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_transform(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transform", std::vector<std::string> { "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_gameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_gameObject", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_flags(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_flags", std::vector<std::string> { "UnityEngine.Tilemaps.TileFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData::set_colliderType(UnityEngine_TilemapModule::UnityEngine::Tilemaps::Tile_ColliderType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_colliderType", std::vector<std::string> { "UnityEngine.Tilemaps.Tile/ColliderType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

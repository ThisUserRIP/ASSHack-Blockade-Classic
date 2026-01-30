#include "UnityEngine_Tilemaps_TileBase.h"

IL2CPP::Il2CppClass* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TilemapModule.dll", "UnityEngine.Tilemaps", "TileBase");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::RefreshTile(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshTile", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetTileData(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData& tileData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileData", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap", "UnityEngine.Tilemaps.TileData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	params[2] = (intptr_t)&tileData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetTileDataNoRef(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileDataNoRef", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData));
		return ret;
	}
	return static_cast<UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData>(*(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileData*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetTileAnimationData(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData& tileAnimationData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileAnimationData", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap", "UnityEngine.Tilemaps.TileAnimationData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	params[2] = (intptr_t)&tileAnimationData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileAnimationDataNoRef", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData));
		return ret;
	}
	return static_cast<UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData>(*(UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileAnimationData*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::StartUp(UnityEngine_CoreModule::UnityEngine::Vector3Int position, UnityEngine_TilemapModule::UnityEngine::Tilemaps::ITilemap* tilemap, UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartUp", std::vector<std::string> { "UnityEngine.Vector3Int", "UnityEngine.Tilemaps.ITilemap", "UnityEngine.GameObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)tilemap;
	params[2] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TileBase::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

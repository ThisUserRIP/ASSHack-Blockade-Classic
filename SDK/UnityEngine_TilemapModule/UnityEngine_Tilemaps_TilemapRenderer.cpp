#include "UnityEngine_Tilemaps_TilemapRenderer.h"

IL2CPP::Il2CppClass* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TilemapRenderer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TilemapModule.dll", "UnityEngine.Tilemaps", "TilemapRenderer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TilemapModule::UnityEngine::Tilemaps::TilemapRenderer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterSpriteAtlasRegistered");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterSpriteAtlasRegistered");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TilemapModule::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* atlas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSpriteAtlasRegistered", std::vector<std::string> { "UnityEngine.U2D.SpriteAtlas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)atlas;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

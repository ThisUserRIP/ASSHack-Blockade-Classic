#include "UnityEngine_Experimental_TerrainAPI_TerrainCallbacks.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TerrainModule.dll", "UnityEngine.Experimental.TerrainAPI", "TerrainCallbacks");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeHeightmapChangedCallback(UnityEngine_TerrainModule::UnityEngine::TerrainData* terrainData, UnityEngine_CoreModule::UnityEngine::RectInt heightRegion, bool synched)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeHeightmapChangedCallback", std::vector<std::string> { "UnityEngine.TerrainData", "UnityEngine.RectInt", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)terrainData;
	params[1] = (intptr_t)&heightRegion;
	params[2] = (intptr_t)&synched;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeTextureChangedCallback(UnityEngine_TerrainModule::UnityEngine::TerrainData* terrainData, mscorlib::System::String* textureName, UnityEngine_CoreModule::UnityEngine::RectInt texelRegion, bool synched)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeTextureChangedCallback", std::vector<std::string> { "UnityEngine.TerrainData", "System.String", "UnityEngine.RectInt", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)terrainData;
	params[1] = (intptr_t)textureName;
	params[2] = (intptr_t)&texelRegion;
	params[3] = (intptr_t)&synched;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

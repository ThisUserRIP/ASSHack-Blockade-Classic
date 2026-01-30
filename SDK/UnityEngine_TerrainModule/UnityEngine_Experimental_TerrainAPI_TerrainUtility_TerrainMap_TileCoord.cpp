#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TileCoord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::GetIl2CppClass(), "TileCoord");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TileCoord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TileCoord::_ctor(int32_t tileX, int32_t tileZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tileX;
	params[1] = (intptr_t)&tileZ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

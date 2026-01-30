#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::GetIl2CppClass(), "TerrainMap");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_TerrainModule::UnityEngine::Terrain* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::GetTerrain(int32_t tileX, int32_t tileZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTerrain", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tileX;
	params[1] = (intptr_t)&tileZ;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TerrainModule::UnityEngine::Terrain*)returnValue;
}
UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::CreateFromPlacement(UnityEngine_TerrainModule::UnityEngine::Terrain* originTerrain, UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, bool fullValidation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFromPlacement", std::vector<std::string> { "UnityEngine.Terrain", "UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)originTerrain;
	params[1] = (intptr_t)filter;
	params[2] = (intptr_t)&fullValidation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*)returnValue;
}
UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::CreateFromPlacement(UnityEngine_CoreModule::UnityEngine::Vector2 gridOrigin, UnityEngine_CoreModule::UnityEngine::Vector2 gridSize, UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter* filter, bool fullValidation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFromPlacement", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&gridOrigin;
	params[1] = (intptr_t)&gridSize;
	params[2] = (intptr_t)filter;
	params[3] = (intptr_t)&fullValidation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*)returnValue;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::AddTerrainInternal(int32_t x, int32_t z, UnityEngine_TerrainModule::UnityEngine::Terrain* terrain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTerrainInternal", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Terrain" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&z;
	params[2] = (intptr_t)terrain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::TryToAddTerrain(int32_t tileX, int32_t tileZ, UnityEngine_TerrainModule::UnityEngine::Terrain* terrain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryToAddTerrain", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Terrain" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&tileX;
	params[1] = (intptr_t)&tileZ;
	params[2] = (intptr_t)terrain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::ValidateTerrain(int32_t tileX, int32_t tileZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateTerrain", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tileX;
	params[1] = (intptr_t)&tileZ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap::Validate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode));
		return ret;
	}
	return static_cast<UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode>(*(UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_ErrorCode*)il2cpp_object_unbox(returnValue));
}

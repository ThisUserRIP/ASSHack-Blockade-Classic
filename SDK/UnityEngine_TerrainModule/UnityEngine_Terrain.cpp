#include "UnityEngine_Terrain.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Terrain::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TerrainModule.dll", "UnityEngine", "Terrain");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Terrain::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_TerrainModule::UnityEngine::TerrainData* UnityEngine_TerrainModule::UnityEngine::Terrain::get_terrainData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_terrainData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TerrainModule::UnityEngine::TerrainData*)returnValue;
}
bool UnityEngine_TerrainModule::UnityEngine::Terrain::get_allowAutoConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allowAutoConnect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_TerrainModule::UnityEngine::Terrain::get_groupingID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_groupingID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TerrainModule::UnityEngine::Terrain::SetNeighbors(UnityEngine_TerrainModule::UnityEngine::Terrain* left, UnityEngine_TerrainModule::UnityEngine::Terrain* top, UnityEngine_TerrainModule::UnityEngine::Terrain* right, UnityEngine_TerrainModule::UnityEngine::Terrain* bottom)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNeighbors", std::vector<std::string> { "UnityEngine.Terrain", "UnityEngine.Terrain", "UnityEngine.Terrain", "UnityEngine.Terrain" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)left;
	params[1] = (intptr_t)top;
	params[2] = (intptr_t)right;
	params[3] = (intptr_t)bottom;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_TerrainModule::UnityEngine::Terrain*>* UnityEngine_TerrainModule::UnityEngine::Terrain::get_activeTerrains()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_activeTerrains");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_TerrainModule::UnityEngine::Terrain*>*)returnValue;
}
void UnityEngine_TerrainModule::UnityEngine::Terrain::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TerrainModule.dll", "UnityEngine.Experimental.TerrainAPI", "TerrainUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::HasValidTerrains()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasValidTerrains");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::ClearConnectivity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearConnectivity");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::CollectTerrains(bool onlyAutoConnectedTerrains)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CollectTerrains", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&onlyAutoConnectedTerrains;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups*)returnValue;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility::AutoConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AutoConnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityEngine_Rendering_TileLayoutUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TileLayoutUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "TileLayoutUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TileLayoutUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByTiles(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& topRow, UnityEngine_CoreModule::UnityEngine::RectInt& rightCol, UnityEngine_CoreModule::UnityEngine::RectInt& topRight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryLayoutByTiles", std::vector<std::string> { "UnityEngine.RectInt", "System.UInt32", "UnityEngine.RectInt&", "UnityEngine.RectInt&", "UnityEngine.RectInt&", "UnityEngine.RectInt&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&src;
	params[1] = (intptr_t)&tileSize;
	params[2] = (intptr_t)&main;
	params[3] = (intptr_t)&topRow;
	params[4] = (intptr_t)&rightCol;
	params[5] = (intptr_t)&topRight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByRow(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryLayoutByRow", std::vector<std::string> { "UnityEngine.RectInt", "System.UInt32", "UnityEngine.RectInt&", "UnityEngine.RectInt&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&src;
	params[1] = (intptr_t)&tileSize;
	params[2] = (intptr_t)&main;
	params[3] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByCol(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryLayoutByCol", std::vector<std::string> { "UnityEngine.RectInt", "System.UInt32", "UnityEngine.RectInt&", "UnityEngine.RectInt&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&src;
	params[1] = (intptr_t)&tileSize;
	params[2] = (intptr_t)&main;
	params[3] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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

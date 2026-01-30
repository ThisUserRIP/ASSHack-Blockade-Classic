#include "UnityEngine_Experimental_TerrainAPI_TerrainCallbacks_HeightmapChangedCallback.h"

IL2CPP::Il2CppClass* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::GetIl2CppClass(), "HeightmapChangedCallback");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::Invoke(UnityEngine_TerrainModule::UnityEngine::Terrain* terrain, UnityEngine_CoreModule::UnityEngine::RectInt heightRegion, bool synched)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Terrain", "UnityEngine.RectInt", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)terrain;
	params[1] = (intptr_t)&heightRegion;
	params[2] = (intptr_t)&synched;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::BeginInvoke(UnityEngine_TerrainModule::UnityEngine::Terrain* terrain, UnityEngine_CoreModule::UnityEngine::RectInt heightRegion, bool synched, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "UnityEngine.Terrain", "UnityEngine.RectInt", "System.Boolean", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)terrain;
	params[1] = (intptr_t)&heightRegion;
	params[2] = (intptr_t)&synched;
	params[3] = (intptr_t)callback;
	params[4] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks_HeightmapChangedCallback::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

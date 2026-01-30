#include "UnityEngine_ResourcesAPI.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "ResourcesAPI");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::ResourcesAPI* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::get_ActiveAPI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActiveAPI");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::ResourcesAPI*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::ResourcesAPI* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::get_overrideAPI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_overrideAPI");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::ResourcesAPI*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::ResourcesAPI::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::FindObjectsOfTypeAll(mscorlib::System::Type* systemTypeInstance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindObjectsOfTypeAll", std::vector<std::string> { "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)systemTypeInstance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Shader* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::FindShaderByName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindShaderByName", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Shader*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::Load(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Load", std::vector<std::string> { "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)systemTypeInstance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* UnityEngine_CoreModule::UnityEngine::ResourcesAPI::LoadAll(mscorlib::System::String* path, mscorlib::System::Type* systemTypeInstance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAll", std::vector<std::string> { "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)systemTypeInstance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::ResourcesAPI::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

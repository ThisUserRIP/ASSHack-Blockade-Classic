#include "I2_Loc_IResourceManager_Bundles.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::IResourceManager_Bundles::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "IResourceManager_Bundles");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::IResourceManager_Bundles::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Object* Assembly_CSharp::I2::Loc::IResourceManager_Bundles::LoadFromBundle(mscorlib::System::String* path, mscorlib::System::Type* assetType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromBundle", std::vector<std::string> { "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)assetType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}

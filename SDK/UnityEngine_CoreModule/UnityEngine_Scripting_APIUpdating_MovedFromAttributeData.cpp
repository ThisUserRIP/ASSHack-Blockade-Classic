#include "UnityEngine_Scripting_APIUpdating_MovedFromAttributeData.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::Set(bool autoUpdateAPI, mscorlib::System::String* sourceNamespace, mscorlib::System::String* sourceAssembly, mscorlib::System::String* sourceClassName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.Boolean", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&autoUpdateAPI;
	params[1] = (intptr_t)sourceNamespace;
	params[2] = (intptr_t)sourceAssembly;
	params[3] = (intptr_t)sourceClassName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

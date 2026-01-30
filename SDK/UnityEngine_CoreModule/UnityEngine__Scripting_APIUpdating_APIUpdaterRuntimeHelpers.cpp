#include "UnityEngine__Scripting_APIUpdating_APIUpdaterRuntimeHelpers.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType(mscorlib::System::Type* sourceType, mscorlib::System::String& assembly, mscorlib::System::String& nsp, mscorlib::System::String& klass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMovedFromAttributeDataForType", std::vector<std::string> { "System.Type", "System.String&", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sourceType;
	params[1] = (intptr_t)&assembly;
	params[2] = (intptr_t)&nsp;
	params[3] = (intptr_t)&klass;
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
bool UnityEngine_CoreModule::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection(mscorlib::System::Type* sourceType, mscorlib::System::String& assemblyName, mscorlib::System::String& nsp, mscorlib::System::String& className)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObsoleteTypeRedirection", std::vector<std::string> { "System.Type", "System.String&", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sourceType;
	params[1] = (intptr_t)&assemblyName;
	params[2] = (intptr_t)&nsp;
	params[3] = (intptr_t)&className;
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

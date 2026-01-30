#include "UnityEngine_SendMouseEvents_HitInfo.h"

IL2CPP::Il2CppClass* UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::GetIl2CppClass(), "HitInfo");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo::SendMessage(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendMessage", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo::op_Implicit(UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo exists)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.SendMouseEvents/HitInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&exists;
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
bool UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo::Compare(UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo lhs, UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "UnityEngine.SendMouseEvents/HitInfo", "UnityEngine.SendMouseEvents/HitInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
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

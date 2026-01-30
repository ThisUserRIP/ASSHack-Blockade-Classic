#include "UnityEngine_CullingGroup.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::CullingGroup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "CullingGroup");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::CullingGroup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::CullingGroup::SendEvents(UnityEngine_CoreModule::UnityEngine::CullingGroup* cullingGroup, intptr_t eventsPtr, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendEvents", std::vector<std::string> { "UnityEngine.CullingGroup", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cullingGroup;
	params[1] = (intptr_t)&eventsPtr;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

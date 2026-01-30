#include "Unity_Profiling_ProfilerMarker.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Profiling", "ProfilerMarker");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker::_ctor(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker::Auto()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Auto");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope>(*(UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope*)il2cpp_object_unbox(returnValue));
}

#include "Unity_Profiling_ProfilerMarker_AutoScope.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker::GetIl2CppClass(), "AutoScope");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope::_ctor(intptr_t markerPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markerPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker_AutoScope::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

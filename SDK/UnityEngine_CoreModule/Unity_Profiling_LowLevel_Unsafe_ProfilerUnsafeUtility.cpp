#include "Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t UnityEngine_CoreModule::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker(mscorlib::System::String* name, uint16_t categoryId, UnityEngine_CoreModule::Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMarker", std::vector<std::string> { "System.String", "System.UInt16", "Unity.Profiling.LowLevel.MarkerFlags", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&flags;
	params[3] = (intptr_t)&metadataCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample(intptr_t markerPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSample", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markerPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample(intptr_t markerPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSample", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markerPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityEngine_Profiling_Memory_Experimental_MemoryProfiler.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::PrepareMetadata()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareMetadata");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
int32_t UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteIntToByteArray(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteIntToByteArray", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)array;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::WriteStringToByteArray(IL2CPP::Array<uint8_t>* array, int32_t offset, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStringToByteArray", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)array;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::FinalizeSnapshot(mscorlib::System::String* path, bool result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinalizeSnapshot", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler::SaveScreenshotToDisk(mscorlib::System::String* path, bool result, intptr_t pixelsPtr, int32_t pixelsCount, UnityEngine_CoreModule::UnityEngine::TextureFormat format, int32_t width, int32_t height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveScreenshotToDisk", std::vector<std::string> { "System.String", "System.Boolean", "System.IntPtr", "System.Int32", "UnityEngine.TextureFormat", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&result;
	params[2] = (intptr_t)&pixelsPtr;
	params[3] = (intptr_t)&pixelsCount;
	params[4] = (intptr_t)&format;
	params[5] = (intptr_t)&width;
	params[6] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

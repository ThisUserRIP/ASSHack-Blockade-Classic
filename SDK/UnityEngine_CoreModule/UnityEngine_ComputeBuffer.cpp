#include "UnityEngine_ComputeBuffer.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::ComputeBuffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "ComputeBuffer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::ComputeBuffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_CoreModule::UnityEngine::ComputeBuffer::InitBuffer(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitBuffer", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.ComputeBufferType", "UnityEngine.ComputeBufferMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)&stride;
	params[2] = (intptr_t)&type;
	params[3] = (intptr_t)&usage;
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
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::DestroyBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buf)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyBuffer", std::vector<std::string> { "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buf;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::_ctor(int32_t count, int32_t stride)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)&stride;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::_ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.ComputeBufferType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)&stride;
	params[2] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::_ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.ComputeBufferType", "UnityEngine.ComputeBufferMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)&stride;
	params[2] = (intptr_t)&type;
	params[3] = (intptr_t)&usage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::_ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type, UnityEngine_CoreModule::UnityEngine::ComputeBufferMode usage, int32_t stackDepth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.ComputeBufferType", "UnityEngine.ComputeBufferMode", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&count;
	params[1] = (intptr_t)&stride;
	params[2] = (intptr_t)&type;
	params[3] = (intptr_t)&usage;
	params[4] = (intptr_t)&stackDepth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::Release()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::ComputeBuffer::get_count()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_count");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::ComputeBuffer::get_stride()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_stride");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::SetData(mscorlib::System::Array* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::InternalSetNativeData(intptr_t data, int32_t nativeBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetNativeData", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&data;
	params[1] = (intptr_t)&nativeBufferStartIndex;
	params[2] = (intptr_t)&computeBufferStartIndex;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&elemSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::InternalSetData(mscorlib::System::Array* data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetData", std::vector<std::string> { "System.Array", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&managedBufferStartIndex;
	params[2] = (intptr_t)&computeBufferStartIndex;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&elemSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::SetName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ComputeBuffer::CopyCount(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* src, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* dst, int32_t dstOffsetBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyCount", std::vector<std::string> { "UnityEngine.ComputeBuffer", "UnityEngine.ComputeBuffer", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)dst;
	params[2] = (intptr_t)&dstOffsetBytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_IO_Compression_DeflateStreamNative_UnmanagedReadOrWrite.h"

IL2CPP::Il2CppClass* System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::IO::Compression::DeflateStreamNative::GetIl2CppClass(), "UnmanagedReadOrWrite");
	return il2cppclass;
}
mscorlib::System::Type* System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::Invoke(intptr_t buffer, int32_t length, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
mscorlib::System::IAsyncResult* System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::BeginInvoke(intptr_t buffer, int32_t length, intptr_t data, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&data;
	params[3] = (intptr_t)callback;
	params[4] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
int32_t System::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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

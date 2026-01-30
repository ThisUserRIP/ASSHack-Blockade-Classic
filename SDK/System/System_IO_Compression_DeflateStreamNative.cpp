#include "System_IO_Compression_DeflateStreamNative.h"

IL2CPP::Il2CppClass* System::System::IO::Compression::DeflateStreamNative::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.IO.Compression", "DeflateStreamNative");
	return il2cppclass;
}
mscorlib::System::Type* System::System::IO::Compression::DeflateStreamNative::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::IO::Compression::DeflateStreamNative::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::IO::Compression::DeflateStreamNative* System::System::IO::Compression::DeflateStreamNative::Create(mscorlib::System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool gzip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.IO.Stream", "System.IO.Compression.CompressionMode", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)compressedStream;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)&gzip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::IO::Compression::DeflateStreamNative*)returnValue;
}
void System::System::IO::Compression::DeflateStreamNative::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::IO::Compression::DeflateStreamNative::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::IO::Compression::DeflateStreamNative::Flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::IO::Compression::DeflateStreamNative::ReadZStream(intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadZStream", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void System::System::IO::Compression::DeflateStreamNative::WriteZStream(intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteZStream", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::IO::Compression::DeflateStreamNative::UnmanagedRead(intptr_t buffer, int32_t length, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmanagedRead", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&data;
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
int32_t System::System::IO::Compression::DeflateStreamNative::UnmanagedRead(intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmanagedRead", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t System::System::IO::Compression::DeflateStreamNative::UnmanagedWrite(intptr_t buffer, int32_t length, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmanagedWrite", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&data;
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
int32_t System::System::IO::Compression::DeflateStreamNative::UnmanagedWrite(intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmanagedWrite", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void System::System::IO::Compression::DeflateStreamNative::CheckResult(int32_t result, mscorlib::System::String* where)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckResult", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&result;
	params[1] = (intptr_t)where;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* System::System::IO::Compression::DeflateStreamNative::CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateZStream", std::vector<std::string> { "System.IO.Compression.CompressionMode", "System.Boolean", "System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite", "System.IntPtr" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&compress;
	params[1] = (intptr_t)&gzip;
	params[2] = (intptr_t)feeder;
	params[3] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*)returnValue;
}
int32_t System::System::IO::Compression::DeflateStreamNative::CloseZStream(intptr_t stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseZStream", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
int32_t System::System::IO::Compression::DeflateStreamNative::Flush(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush", std::vector<std::string> { "System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stream;
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
int32_t System::System::IO::Compression::DeflateStreamNative::ReadZStream(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadZStream", std::vector<std::string> { "System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&length;
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
int32_t System::System::IO::Compression::DeflateStreamNative::WriteZStream(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteZStream", std::vector<std::string> { "System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&length;
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

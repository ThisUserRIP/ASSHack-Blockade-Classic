#include "System_IO_MonoIO.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::MonoIO::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.IO", "MonoIO");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::MonoIO::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Exception* mscorlib::System::IO::MonoIO::GetException(mscorlib::System::IO::MonoIOError error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetException", std::vector<std::string> { "System.IO.MonoIOError" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* mscorlib::System::IO::MonoIO::GetException(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetException", std::vector<std::string> { "System.String", "System.IO.MonoIOError" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
bool mscorlib::System::IO::MonoIO::CreateDirectory(wchar_t* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDirectory", std::vector<std::string> { "System.Char*", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::CreateDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDirectory", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::RemoveDirectory(wchar_t* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveDirectory", std::vector<std::string> { "System.Char*", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::RemoveDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveDirectory", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
mscorlib::System::String* mscorlib::System::IO::MonoIO::GetCurrentDirectory(mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentDirectory", std::vector<std::string> { "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::IO::MonoIO::CopyFile(wchar_t* path, wchar_t* dest, bool overwrite, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFile", std::vector<std::string> { "System.Char*", "System.Char*", "System.Boolean", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&overwrite;
	params[3] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::CopyFile(mscorlib::System::String* path, mscorlib::System::String* dest, bool overwrite, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFile", std::vector<std::string> { "System.String", "System.String", "System.Boolean", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&overwrite;
	params[3] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::DeleteFile(wchar_t* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteFile", std::vector<std::string> { "System.Char*", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::DeleteFile(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteFile", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
mscorlib::System::IO::FileAttributes mscorlib::System::IO::MonoIO::GetFileAttributes(wchar_t* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileAttributes", std::vector<std::string> { "System.Char*", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::IO::FileAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::IO::FileAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::IO::FileAttributes>(*(mscorlib::System::IO::FileAttributes*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IO::FileAttributes mscorlib::System::IO::MonoIO::GetFileAttributes(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileAttributes", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::IO::FileAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::IO::FileAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::IO::FileAttributes>(*(mscorlib::System::IO::FileAttributes*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::IO::MonoIO::SetFileAttributes(wchar_t* path, mscorlib::System::IO::FileAttributes attrs, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFileAttributes", std::vector<std::string> { "System.Char*", "System.IO.FileAttributes", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&attrs;
	params[2] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::SetFileAttributes(mscorlib::System::String* path, mscorlib::System::IO::FileAttributes attrs, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFileAttributes", std::vector<std::string> { "System.String", "System.IO.FileAttributes", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&attrs;
	params[2] = (intptr_t)&error;
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
mscorlib::System::IO::MonoFileType mscorlib::System::IO::MonoIO::GetFileType(intptr_t handle, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileType", std::vector<std::string> { "System.IntPtr", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::IO::MonoFileType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::IO::MonoFileType));
		return ret;
	}
	return static_cast<mscorlib::System::IO::MonoFileType>(*(mscorlib::System::IO::MonoFileType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IO::MonoFileType mscorlib::System::IO::MonoIO::GetFileType(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileType", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::IO::MonoFileType ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::IO::MonoFileType));
		return ret;
	}
	return static_cast<mscorlib::System::IO::MonoFileType>(*(mscorlib::System::IO::MonoFileType*)il2cpp_object_unbox(returnValue));
}
intptr_t mscorlib::System::IO::MonoIO::FindFirstFile(wchar_t* pathWithPattern, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindFirstFile", std::vector<std::string> { "System.Char*", "System.String&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pathWithPattern;
	params[1] = (intptr_t)&fileName;
	params[2] = (intptr_t)&fileAttr;
	params[3] = (intptr_t)&error;
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
intptr_t mscorlib::System::IO::MonoIO::FindFirstFile(mscorlib::System::String* pathWithPattern, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindFirstFile", std::vector<std::string> { "System.String", "System.String&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pathWithPattern;
	params[1] = (intptr_t)&fileName;
	params[2] = (intptr_t)&fileAttr;
	params[3] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::FindNextFile(intptr_t hnd, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindNextFile", std::vector<std::string> { "System.IntPtr", "System.String&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hnd;
	params[1] = (intptr_t)&fileName;
	params[2] = (intptr_t)&fileAttr;
	params[3] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::FindCloseFile(intptr_t hnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindCloseFile", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hnd;
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
bool mscorlib::System::IO::MonoIO::Exists(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Exists", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::ExistsFile(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExistsFile", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::ExistsDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExistsDirectory", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::ExistsSymlink(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExistsSymlink", std::vector<std::string> { "System.String", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::GetFileStat(wchar_t* path, mscorlib::System::IO::MonoIOStat& stat, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileStat", std::vector<std::string> { "System.Char*", "System.IO.MonoIOStat&", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&stat;
	params[2] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::GetFileStat(mscorlib::System::String* path, mscorlib::System::IO::MonoIOStat& stat, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFileStat", std::vector<std::string> { "System.String", "System.IO.MonoIOStat&", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&stat;
	params[2] = (intptr_t)&error;
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
intptr_t mscorlib::System::IO::MonoIO::Open(wchar_t* filename, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, mscorlib::System::IO::FileOptions options, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Open", std::vector<std::string> { "System.Char*", "System.IO.FileMode", "System.IO.FileAccess", "System.IO.FileShare", "System.IO.FileOptions", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)filename;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)&access;
	params[3] = (intptr_t)&share;
	params[4] = (intptr_t)&options;
	params[5] = (intptr_t)&error;
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
intptr_t mscorlib::System::IO::MonoIO::Open(mscorlib::System::String* filename, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, mscorlib::System::IO::FileOptions options, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Open", std::vector<std::string> { "System.String", "System.IO.FileMode", "System.IO.FileAccess", "System.IO.FileShare", "System.IO.FileOptions", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)filename;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)&access;
	params[3] = (intptr_t)&share;
	params[4] = (intptr_t)&options;
	params[5] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::Close(intptr_t handle, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close", std::vector<std::string> { "System.IntPtr", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&error;
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
int32_t mscorlib::System::IO::MonoIO::Read(intptr_t handle, IL2CPP::Array<uint8_t>* dest, int32_t dest_offset, int32_t count, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.IntPtr", "System.Byte[]", "System.Int32", "System.Int32", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&dest_offset;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&error;
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
int32_t mscorlib::System::IO::MonoIO::Read(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, IL2CPP::Array<uint8_t>* dest, int32_t dest_offset, int32_t count, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.Byte[]", "System.Int32", "System.Int32", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)&dest_offset;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&error;
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
int32_t mscorlib::System::IO::MonoIO::Write(intptr_t handle, IL2CPP::Array<uint8_t>* src, int32_t src_offset, int32_t count, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.IntPtr", "System.Byte[]", "System.Int32", "System.Int32", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&src_offset;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&error;
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
int32_t mscorlib::System::IO::MonoIO::Write(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, IL2CPP::Array<uint8_t>* src, int32_t src_offset, int32_t count, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.Byte[]", "System.Int32", "System.Int32", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&src_offset;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&error;
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
int64_t mscorlib::System::IO::MonoIO::Seek(intptr_t handle, int64_t offset, mscorlib::System::IO::SeekOrigin origin, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Seek", std::vector<std::string> { "System.IntPtr", "System.Int64", "System.IO.SeekOrigin", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&origin;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::IO::MonoIO::Seek(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, mscorlib::System::IO::SeekOrigin origin, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Seek", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.Int64", "System.IO.SeekOrigin", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&origin;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::IO::MonoIO::GetLength(intptr_t handle, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLength", std::vector<std::string> { "System.IntPtr", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::IO::MonoIO::GetLength(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLength", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::IO::MonoIO::SetLength(intptr_t handle, int64_t length, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLength", std::vector<std::string> { "System.IntPtr", "System.Int64", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&error;
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
bool mscorlib::System::IO::MonoIO::SetLength(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLength", std::vector<std::string> { "System.Runtime.InteropServices.SafeHandle", "System.Int64", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)safeHandle;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&error;
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
intptr_t mscorlib::System::IO::MonoIO::get_ConsoleOutput()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConsoleOutput");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t mscorlib::System::IO::MonoIO::get_ConsoleInput()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConsoleInput");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t mscorlib::System::IO::MonoIO::get_ConsoleError()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConsoleError");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::IO::MonoIO::DuplicateHandle(intptr_t source_process_handle, intptr_t source_handle, intptr_t target_process_handle, intptr_t& target_handle, int32_t access, int32_t inherit, int32_t options, mscorlib::System::IO::MonoIOError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DuplicateHandle", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr", "System.IntPtr&", "System.Int32", "System.Int32", "System.Int32", "System.IO.MonoIOError&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&source_process_handle;
	params[1] = (intptr_t)&source_handle;
	params[2] = (intptr_t)&target_process_handle;
	params[3] = (intptr_t)&target_handle;
	params[4] = (intptr_t)&access;
	params[5] = (intptr_t)&inherit;
	params[6] = (intptr_t)&options;
	params[7] = (intptr_t)&error;
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
wchar_t mscorlib::System::IO::MonoIO::get_VolumeSeparatorChar()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_VolumeSeparatorChar");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
wchar_t mscorlib::System::IO::MonoIO::get_DirectorySeparatorChar()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DirectorySeparatorChar");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
wchar_t mscorlib::System::IO::MonoIO::get_AltDirectorySeparatorChar()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AltDirectorySeparatorChar");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
wchar_t mscorlib::System::IO::MonoIO::get_PathSeparator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PathSeparator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::IO::MonoIO::DumpHandles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DumpHandles");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::IO::MonoIO::RemapPath(mscorlib::System::String* path, mscorlib::System::String& newPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemapPath", std::vector<std::string> { "System.String", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&newPath;
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
void mscorlib::System::IO::MonoIO::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

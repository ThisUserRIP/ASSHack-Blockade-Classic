#include "System_IO_Directory.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::Directory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.IO", "Directory");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::Directory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::GetFiles(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFiles", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::InternalGetFiles(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetFiles", std::vector<std::string> { "System.String", "System.String", "System.IO.SearchOption" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)searchPattern;
	params[2] = (intptr_t)&searchOption;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::GetDirectories(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDirectories", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::GetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDirectories", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)searchPattern;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::GetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDirectories", std::vector<std::string> { "System.String", "System.String", "System.IO.SearchOption" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)searchPattern;
	params[2] = (intptr_t)&searchOption;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::InternalGetDirectories(mscorlib::System::String* path, mscorlib::System::String* searchPattern, mscorlib::System::IO::SearchOption searchOption)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetDirectories", std::vector<std::string> { "System.String", "System.String", "System.IO.SearchOption" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)searchPattern;
	params[2] = (intptr_t)&searchOption;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::IO::Directory::InternalGetFileDirectoryNames(mscorlib::System::String* path, mscorlib::System::String* userPathOriginal, mscorlib::System::String* searchPattern, bool includeFiles, bool includeDirs, mscorlib::System::IO::SearchOption searchOption, bool checkHost)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetFileDirectoryNames", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Boolean", "System.Boolean", "System.IO.SearchOption", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)userPathOriginal;
	params[2] = (intptr_t)searchPattern;
	params[3] = (intptr_t)&includeFiles;
	params[4] = (intptr_t)&includeDirs;
	params[5] = (intptr_t)&searchOption;
	params[6] = (intptr_t)&checkHost;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::IO::DirectoryInfo* mscorlib::System::IO::Directory::CreateDirectory_(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDirectory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::DirectoryInfo*)returnValue;
}
mscorlib::System::IO::DirectoryInfo* mscorlib::System::IO::Directory::CreateDirectoriesInternal(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDirectoriesInternal", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::DirectoryInfo*)returnValue;
}
void mscorlib::System::IO::Directory::Delete(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Delete", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Directory::RecursiveDelete(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecursiveDelete", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Directory::Delete(mscorlib::System::String* path, bool recursive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Delete", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)&recursive;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::IO::Directory::Exists(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Exists", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
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
mscorlib::System::String* mscorlib::System::IO::Directory::GetCurrentDirectory_()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentDirectory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::IO::Directory::InsecureGetCurrentDirectory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsecureGetCurrentDirectory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::IO::Directory::IsRootDirectory(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRootDirectory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
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
mscorlib::System::IO::DirectoryInfo* mscorlib::System::IO::Directory::GetParent(mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParent", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::DirectoryInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::IO::Directory::GetDemandDir(mscorlib::System::String* fullPath, bool thisDirOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDemandDir", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)fullPath;
	params[1] = (intptr_t)&thisDirOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

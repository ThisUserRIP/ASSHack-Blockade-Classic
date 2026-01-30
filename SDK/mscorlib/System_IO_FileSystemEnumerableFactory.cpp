#include "System_IO_FileSystemEnumerableFactory.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::FileSystemEnumerableFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.IO", "FileSystemEnumerableFactory");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::FileSystemEnumerableFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* mscorlib::System::IO::FileSystemEnumerableFactory::CreateFileNameIterator(mscorlib::System::String* path, mscorlib::System::String* originalUserPath, mscorlib::System::String* searchPattern, bool includeFiles, bool includeDirs, mscorlib::System::IO::SearchOption searchOption, bool checkHost)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFileNameIterator", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Boolean", "System.Boolean", "System.IO.SearchOption", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)path;
	params[1] = (intptr_t)originalUserPath;
	params[2] = (intptr_t)searchPattern;
	params[3] = (intptr_t)&includeFiles;
	params[4] = (intptr_t)&includeDirs;
	params[5] = (intptr_t)&searchOption;
	params[6] = (intptr_t)&checkHost;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>*)returnValue;
}

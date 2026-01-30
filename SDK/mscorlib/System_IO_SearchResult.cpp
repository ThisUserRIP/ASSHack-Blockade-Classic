#include "System_IO_SearchResult.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::SearchResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.IO", "SearchResult");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::SearchResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::IO::SearchResult::_ctor(mscorlib::System::String* fullPath, mscorlib::System::String* userPath, mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "Microsoft.Win32.Win32Native/WIN32_FIND_DATA" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)fullPath;
	params[1] = (intptr_t)userPath;
	params[2] = (intptr_t)findData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::IO::SearchResult::get_UserPath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserPath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* mscorlib::System::IO::SearchResult::get_FindData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FindData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA*)returnValue;
}

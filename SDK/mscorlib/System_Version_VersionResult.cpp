#include "System_Version_VersionResult.h"

IL2CPP::Il2CppClass* mscorlib::System::Version_VersionResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Version::GetIl2CppClass(), "VersionResult");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Version_VersionResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Version_VersionResult::Init(mscorlib::System::String* argumentName, bool canThrow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)argumentName;
	params[1] = (intptr_t)&canThrow;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Version_VersionResult::SetFailure(mscorlib::System::Version_ParseFailureKind failure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Version/ParseFailureKind" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&failure;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Version_VersionResult::SetFailure(mscorlib::System::Version_ParseFailureKind failure, mscorlib::System::String* argument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Version/ParseFailureKind", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)argument;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* mscorlib::System::Version_VersionResult::GetVersionParseException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVersionParseException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}

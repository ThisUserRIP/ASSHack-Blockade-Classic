#include "System_DateTimeResult.h"

IL2CPP::Il2CppClass* mscorlib::System::DateTimeResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "DateTimeResult");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DateTimeResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::DateTimeResult::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeResult::SetDate(int32_t year, int32_t month, int32_t day)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDate", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&year;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&day;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeResult::SetFailure(mscorlib::System::ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.ParseFailureKind", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)failureMessageID;
	params[2] = (intptr_t)failureMessageFormatArgument;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::DateTimeResult::SetFailure(mscorlib::System::ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument, mscorlib::System::String* failureArgumentName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.ParseFailureKind", "System.String", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)failureMessageID;
	params[2] = (intptr_t)failureMessageFormatArgument;
	params[3] = (intptr_t)failureArgumentName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

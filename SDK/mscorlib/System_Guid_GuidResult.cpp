#include "System_Guid_GuidResult.h"

IL2CPP::Il2CppClass* mscorlib::System::Guid_GuidResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Guid::GetIl2CppClass(), "GuidResult");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Guid_GuidResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Guid_GuidResult::Init(mscorlib::System::Guid_GuidParseThrowStyle canThrow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Guid/GuidParseThrowStyle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&canThrow;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Guid_GuidResult::SetFailure(mscorlib::System::Exception* nativeException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Exception" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nativeException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Guid_GuidResult::SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Guid/ParseFailureKind", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)failureMessageID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Guid_GuidResult::SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Guid/ParseFailureKind", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)failureMessageID;
	params[2] = (intptr_t)failureMessageFormatArgument;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Guid_GuidResult::SetFailure(mscorlib::System::Guid_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument, mscorlib::System::String* failureArgumentName, mscorlib::System::Exception* innerException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailure", std::vector<std::string> { "System.Guid/ParseFailureKind", "System.String", "System.Object", "System.String", "System.Exception" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&failure;
	params[1] = (intptr_t)failureMessageID;
	params[2] = (intptr_t)failureMessageFormatArgument;
	params[3] = (intptr_t)failureArgumentName;
	params[4] = (intptr_t)innerException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* mscorlib::System::Guid_GuidResult::GetGuidParseException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGuidParseException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}

#include "System_UriParser_BuiltInUriParser.h"

IL2CPP::Il2CppClass* System::System::UriParser_BuiltInUriParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::UriParser::GetIl2CppClass(), "BuiltInUriParser");
	return il2cppclass;
}
mscorlib::System::Type* System::System::UriParser_BuiltInUriParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::UriParser_BuiltInUriParser::_ctor(mscorlib::System::String* lwrCaseScheme, int32_t defaultPort, System::UriSyntaxFlags syntaxFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.UriSyntaxFlags" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)lwrCaseScheme;
	params[1] = (intptr_t)&defaultPort;
	params[2] = (intptr_t)&syntaxFlags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

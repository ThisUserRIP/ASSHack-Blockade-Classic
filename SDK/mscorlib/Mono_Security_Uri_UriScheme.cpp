#include "Mono_Security_Uri_UriScheme.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Security::Uri_UriScheme::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Mono::Security::Uri::GetIl2CppClass(), "UriScheme");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Security::Uri_UriScheme::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Security::Uri_UriScheme::_ctor(mscorlib::System::String* s, mscorlib::System::String* d, int32_t p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)d;
	params[2] = (intptr_t)&p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

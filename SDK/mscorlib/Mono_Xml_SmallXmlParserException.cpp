#include "Mono_Xml_SmallXmlParserException.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Xml::SmallXmlParserException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Xml", "SmallXmlParserException");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Xml::SmallXmlParserException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Xml::SmallXmlParserException::_ctor(mscorlib::System::String* msg, int32_t line, int32_t column)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)&line;
	params[2] = (intptr_t)&column;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

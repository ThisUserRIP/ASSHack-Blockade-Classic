#include "System_Xml_DtdParser_UndeclaredNotation.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::DtdParser_UndeclaredNotation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::DtdParser::GetIl2CppClass(), "UndeclaredNotation");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::DtdParser_UndeclaredNotation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::DtdParser_UndeclaredNotation::_ctor(mscorlib::System::String* name, int32_t lineNo, int32_t linePos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&lineNo;
	params[2] = (intptr_t)&linePos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

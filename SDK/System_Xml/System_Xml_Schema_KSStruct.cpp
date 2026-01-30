#include "System_Xml_Schema_KSStruct.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::KSStruct::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "KSStruct");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::KSStruct::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::KSStruct::_ctor(System_Xml::System::Xml::Schema::KeySequence* ks, int32_t dim)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.KeySequence", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ks;
	params[1] = (intptr_t)&dim;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

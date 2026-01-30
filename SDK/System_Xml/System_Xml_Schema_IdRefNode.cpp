#include "System_Xml_Schema_IdRefNode.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::IdRefNode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "IdRefNode");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::IdRefNode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::IdRefNode::_ctor(System_Xml::System::Xml::Schema::IdRefNode* next, mscorlib::System::String* id, int32_t lineNo, int32_t linePos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.IdRefNode", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)next;
	params[1] = (intptr_t)id;
	params[2] = (intptr_t)&lineNo;
	params[3] = (intptr_t)&linePos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

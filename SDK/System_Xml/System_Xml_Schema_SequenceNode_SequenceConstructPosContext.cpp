#include "System_Xml_Schema_SequenceNode_SequenceConstructPosContext.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::SequenceNode_SequenceConstructPosContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::SequenceNode::GetIl2CppClass(), "SequenceConstructPosContext");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::SequenceNode_SequenceConstructPosContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::SequenceNode_SequenceConstructPosContext::_ctor(System_Xml::System::Xml::Schema::SequenceNode* node, System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.SequenceNode", "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)firstpos;
	params[2] = (intptr_t)lastpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

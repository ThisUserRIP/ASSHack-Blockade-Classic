#include "System_Xml_Schema_NamespaceListNode.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::NamespaceListNode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "NamespaceListNode");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::NamespaceListNode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::NamespaceListNode::_ctor(System_Xml::System::Xml::Schema::NamespaceList* namespaceList, mscorlib::System::Object* particle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.NamespaceList", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)namespaceList;
	params[1] = (intptr_t)particle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ICollection* System_Xml::System::Xml::Schema::NamespaceListNode::GetResolvedSymbols(System_Xml::System::Xml::Schema::SymbolsDictionary* symbols)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResolvedSymbols", std::vector<std::string> { "System.Xml.Schema.SymbolsDictionary" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)symbols;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}
void System_Xml::System::Xml::Schema::NamespaceListNode::ExpandTree(System_Xml::System::Xml::Schema::InteriorNode* parent, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandTree", std::vector<std::string> { "System.Xml.Schema.InteriorNode", "System.Xml.Schema.SymbolsDictionary", "System.Xml.Schema.Positions" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)symbols;
	params[2] = (intptr_t)positions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::NamespaceListNode::ConstructPos(System_Xml::System::Xml::Schema::BitSet* firstpos, System_Xml::System::Xml::Schema::BitSet* lastpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConstructPos", std::vector<std::string> { "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet", "System.Xml.Schema.BitSet[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)firstpos;
	params[1] = (intptr_t)lastpos;
	params[2] = (intptr_t)followpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::NamespaceListNode::get_IsNullable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsNullable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

#include "System_Xml_XmlWellFormedWriter_AttributeValueCache_Item.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache::GetIl2CppClass(), "Item");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item::Set(System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

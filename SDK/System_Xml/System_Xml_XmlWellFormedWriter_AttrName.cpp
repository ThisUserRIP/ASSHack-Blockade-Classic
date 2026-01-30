#include "System_Xml_XmlWellFormedWriter_AttrName.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlWellFormedWriter_AttrName::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlWellFormedWriter::GetIl2CppClass(), "AttrName");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlWellFormedWriter_AttrName::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlWellFormedWriter_AttrName::Set(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlWellFormedWriter_AttrName::IsDuplicate(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDuplicate", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)namespaceUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

#include "System_Xml_XmlNamespaceManager_NamespaceDeclaration.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlNamespaceManager_NamespaceDeclaration::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlNamespaceManager::GetIl2CppClass(), "NamespaceDeclaration");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlNamespaceManager_NamespaceDeclaration::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlNamespaceManager_NamespaceDeclaration::Set(mscorlib::System::String* prefix, mscorlib::System::String* uri, int32_t scopeId, int32_t previousNsIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)uri;
	params[2] = (intptr_t)&scopeId;
	params[3] = (intptr_t)&previousNsIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

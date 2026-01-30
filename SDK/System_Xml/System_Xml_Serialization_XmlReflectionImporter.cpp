#include "System_Xml_Serialization_XmlReflectionImporter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlReflectionImporter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::_ctor(System_Xml::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlAttributeOverrides", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attributeOverrides;
	params[1] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportTypeMapping", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(mscorlib::System::Type* type, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportTypeMapping", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportTypeMapping", std::vector<std::string> { "System.Type", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportTypeMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::CreateTypeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultXmlType, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTypeMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultXmlType;
	params[3] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, bool isBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportClassMapping", std::vector<std::string> { "System.Type", "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	params[3] = (intptr_t)&isBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, bool isBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportClassMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	params[3] = (intptr_t)&isBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::RegisterDerivedMap(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, System_Xml::System::Xml::Serialization::XmlTypeMapping* derivedMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterDerivedMap", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)derivedMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetTypeNamespace(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeNamespace", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportListMapping", std::vector<std::string> { "System.Type", "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.Xml.Serialization.XmlAttributes", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	params[3] = (intptr_t)atts;
	params[4] = (intptr_t)&nestingLevel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportListMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.Xml.Serialization.XmlAttributes", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	params[3] = (intptr_t)atts;
	params[4] = (intptr_t)&nestingLevel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportXmlNodeMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportXmlNodeMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportPrimitiveMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportPrimitiveMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportEnumMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportEnumMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapping* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportXmlSerializableMapping(System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportXmlSerializableMapping", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlRootAttribute", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapping*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportIncludedTypes(mscorlib::System::Type* type, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportIncludedTypes", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Serialization::XmlReflectionMember>* System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetReflectionMembers(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReflectionMembers", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::Serialization::XmlReflectionMember>*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapMember* System_Xml::System::Xml::Serialization::XmlReflectionImporter::CreateMapMember(mscorlib::System::Type* declaringType, System_Xml::System::Xml::Serialization::XmlReflectionMember* rmember, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMapMember", std::vector<std::string> { "System.Type", "System.Xml.Serialization.XmlReflectionMember", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)declaringType;
	params[1] = (intptr_t)rmember;
	params[2] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapMember*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportElementInfo(mscorlib::System::Type* cls, mscorlib::System::String* defaultName, mscorlib::System::String* defaultNamespace, mscorlib::System::Type* defaultType, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportElementInfo", std::vector<std::string> { "System.Type", "System.String", "System.String", "System.Type", "System.Xml.Serialization.XmlTypeMapMemberElement", "System.Xml.Serialization.XmlAttributes" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cls;
	params[1] = (intptr_t)defaultName;
	params[2] = (intptr_t)defaultNamespace;
	params[3] = (intptr_t)defaultType;
	params[4] = (intptr_t)member;
	params[5] = (intptr_t)atts;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportAnyElementInfo(mscorlib::System::String* defaultNamespace, System_Xml::System::Xml::Serialization::XmlReflectionMember* rmember, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportAnyElementInfo", std::vector<std::string> { "System.String", "System.Xml.Serialization.XmlReflectionMember", "System.Xml.Serialization.XmlTypeMapMemberElement", "System.Xml.Serialization.XmlAttributes" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)defaultNamespace;
	params[1] = (intptr_t)rmember;
	params[2] = (intptr_t)member;
	params[3] = (intptr_t)atts;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::ImportTextElementInfo(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* list, mscorlib::System::Type* defaultType, System_Xml::System::Xml::Serialization::XmlTypeMapMemberElement* member, System_Xml::System::Xml::Serialization::XmlAttributes* atts, mscorlib::System::String* defaultNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportTextElementInfo", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapElementInfoList", "System.Type", "System.Xml.Serialization.XmlTypeMapMemberElement", "System.Xml.Serialization.XmlAttributes", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)list;
	params[1] = (intptr_t)defaultType;
	params[2] = (intptr_t)member;
	params[3] = (intptr_t)atts;
	params[4] = (intptr_t)defaultNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Serialization::XmlReflectionImporter::CanBeNull(System_Xml::System::Xml::Serialization::TypeData* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanBeNull", std::vector<std::string> { "System.Xml.Serialization.TypeData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::IncludeType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IncludeType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetDefaultValue(System_Xml::System::Xml::Serialization::TypeData* typeData, mscorlib::System::Object* defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultValue", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeData;
	params[1] = (intptr_t)defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

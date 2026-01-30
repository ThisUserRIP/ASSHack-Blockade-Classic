#include "System_Xml_Serialization_XmlSerializationWriterInterpreter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializationWriterInterpreter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::_ctor(System_Xml::System::Xml::Serialization::XmlMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlMapping" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::InitCallbacks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCallbacks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteRoot(mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRoot", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp, bool isNullable, bool needType, bool writeWrappingElem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObject", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object", "System.String", "System.String", "System.Boolean", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)element;
	params[3] = (intptr_t)namesp;
	params[4] = (intptr_t)&isNullable;
	params[5] = (intptr_t)&needType;
	params[6] = (intptr_t)&writeWrappingElem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMessage(System_Xml::System::Xml::Serialization::XmlMembersMapping* membersMap, IL2CPP::Array<mscorlib::System::Object*>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMessage", std::vector<std::string> { "System.Xml.Serialization.XmlMembersMapping", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)membersMap;
	params[1] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)element;
	params[3] = (intptr_t)namesp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectElementAttributes", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementElements(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectElementElements", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAttributeMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAttributeMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteElementMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMemberValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMember", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::MemberHasValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MemberHasValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMember", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
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
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMemberElement(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem, mscorlib::System::Object* memberValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMemberElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapElementInfo", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elem;
	params[1] = (intptr_t)memberValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::ImplicitConvert(mscorlib::System::Object* obj, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplicitConvert", std::vector<std::string> { "System.Object", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(mscorlib::System::Object* memberValue, mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::Serialization::XmlTypeMapping* mappedType, System_Xml::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePrimitiveValueLiteral", std::vector<std::string> { "System.Object", "System.String", "System.String", "System.Xml.Serialization.XmlTypeMapping", "System.Xml.Serialization.TypeData", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)memberValue;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)mappedType;
	params[4] = (intptr_t)typeData;
	params[5] = (intptr_t)&wrapped;
	params[6] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(mscorlib::System::Object* memberValue, mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* xsiType, System_Xml::System::Xml::Serialization::XmlTypeMapping* mappedType, System_Xml::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePrimitiveValueEncoded", std::vector<std::string> { "System.Object", "System.String", "System.String", "System.Xml.XmlQualifiedName", "System.Xml.Serialization.XmlTypeMapping", "System.Xml.Serialization.TypeData", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)memberValue;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)xsiType;
	params[4] = (intptr_t)mappedType;
	params[5] = (intptr_t)typeData;
	params[6] = (intptr_t)&wrapped;
	params[7] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteListElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)element;
	params[3] = (intptr_t)namesp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListContent(mscorlib::System::Object* container, System_Xml::System::Xml::Serialization::TypeData* listType, System_Xml::System::Xml::Serialization::ListMap* map, mscorlib::System::Object* ob, mscorlib::System::Text::StringBuilder* targetString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteListContent", std::vector<std::string> { "System.Object", "System.Xml.Serialization.TypeData", "System.Xml.Serialization.ListMap", "System.Object", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)container;
	params[1] = (intptr_t)listType;
	params[2] = (intptr_t)map;
	params[3] = (intptr_t)ob;
	params[4] = (intptr_t)targetString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetListCount(System_Xml::System::Xml::Serialization::TypeData* listType, mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetListCount", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)listType;
	params[1] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAnyElementContent(System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyElement* member, mscorlib::System::Object* memberValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAnyElementContent", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMemberAnyElement", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)memberValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WritePrimitiveElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)element;
	params[3] = (intptr_t)namesp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteEnumElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEnumElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)element;
	params[3] = (intptr_t)namesp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetStringValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, System_Xml::System::Xml::Serialization::TypeData* type, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStringValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Xml.Serialization.TypeData", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetEnumXmlValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumXmlValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

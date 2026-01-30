#include "System_Xml_Serialization_XmlSerializationReaderInterpreter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor(System_Xml::System::Xml::Serialization::XmlMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlMapping" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCallbacks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitIDs");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadRoot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadEncodedObject", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage(System_Xml::System::Xml::Serialization::XmlMembersMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadMessage", std::vector<std::string> { "System.Xml.Serialization.XmlMembersMapping" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot(System_Xml::System::Xml::Serialization::XmlTypeMapping* rootMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadRoot", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rootMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadObject", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	params[2] = (intptr_t)&checkType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadClassInstance", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	params[2] = (intptr_t)&checkType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadClassInstanceMembers", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)ob;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadAttributeMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList, bool readBySoapOrder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	params[3] = (intptr_t)&readBySoapOrder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetListMembersDefaults", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* obfixup, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupMembers", std::vector<std::string> { "System.Xml.Serialization.ClassMap", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)map;
	params[1] = (intptr_t)obfixup;
	params[2] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute(mscorlib::System::Object* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessUnknownAttribute", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement(mscorlib::System::Object* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessUnknownElement", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, System_Xml::System::Xml::Serialization::TypeData* memType, mscorlib::System::Object* ob, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsReadOnly", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMember", "System.Xml.Serialization.TypeData", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)memType;
	params[2] = (intptr_t)ob;
	params[3] = (intptr_t)&isValueList;
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
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, mscorlib::System::Object* value, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMemberValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMember", "System.Object", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, mscorlib::System::Object* value, bool isValueList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMemberValueFromAttr", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapMember", "System.Object", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)ob;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)&isValueList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList)
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
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadObjectElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapElementInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPrimitiveValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapElementInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString(mscorlib::System::String* value, System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValueFromXmlString", std::vector<std::string> { "System.String", "System.Xml.Serialization.TypeData", "System.Xml.Serialization.XmlTypeMapping" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)typeData;
	params[2] = (intptr_t)typeMap;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, mscorlib::System::Object* list, bool canCreateInstance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadListElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	params[2] = (intptr_t)list;
	params[3] = (intptr_t)&canCreateInstance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::String* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadListString", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue(System_Xml::System::Xml::Serialization::TypeData* listType, mscorlib::System::Object& list, int32_t index, mscorlib::System::Object* value, bool canCreateInstance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListValue", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Object&", "System.Int32", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)listType;
	params[1] = (intptr_t)&list;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)value;
	params[4] = (intptr_t)&canCreateInstance;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(mscorlib::System::Type* type, bool nonPublic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&nonPublic;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList(mscorlib::System::Type* listType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateList", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList(System_Xml::System::Xml::Serialization::TypeData* listType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeList", std::vector<std::string> { "System.Xml.Serialization.TypeData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList(mscorlib::System::Object* list, mscorlib::System::Object* items)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillList", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)list;
	params[1] = (intptr_t)items;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList(mscorlib::System::Object* source, mscorlib::System::Object* dest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyEnumerableList", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadXmlNodeElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode(System_Xml::System::Xml::Serialization::TypeData* type, bool wrapped)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadXmlNode", std::vector<std::string> { "System.Xml.Serialization.TypeData", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&wrapped;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPrimitiveElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadEnumElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::String* val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumValue", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)val;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadXmlSerializableElement", std::vector<std::string> { "System.Xml.Serialization.XmlTypeMapping", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeMap;
	params[1] = (intptr_t)&isNullable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System_Xml::System::Xml::Serialization::XmlSerializationReaderInterpreter::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Xml_Schema_XmlSchemaCollection.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaCollection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaCollection");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaCollection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XmlSchemaCollection::_ctor(System_Xml::System::Xml::XmlNameTable* nametable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nametable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Schema::XmlSchemaCollection::get_Count()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Count");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::XmlNameTable* System_Xml::System::Xml::Schema::XmlSchemaCollection::get_NameTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NameTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNameTable*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaCollection::set_XmlResolver(System_Xml::System::Xml::XmlResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_XmlResolver", std::vector<std::string> { "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaCollection::get_Item(mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
mscorlib::System::Collections::IEnumerator* System_Xml::System::Xml::Schema::XmlSchemaCollection::System_Collections_IEnumerable_GetEnumerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerable.GetEnumerator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaCollectionEnumerator* System_Xml::System::Xml::Schema::XmlSchemaCollection::GetEnumerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumerator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaCollectionEnumerator*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.CopyTo", std::vector<std::string> { "System.Array", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_IsSynchronized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_IsSynchronized");
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
mscorlib::System::Object* System_Xml::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_SyncRoot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_SyncRoot");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t System_Xml::System::Xml::Schema::XmlSchemaCollection::System_Collections_ICollection_get_Count()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_Count");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::SchemaInfo* System_Xml::System::Xml::Schema::XmlSchemaCollection::GetSchemaInfo(mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaInfo", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaInfo*)returnValue;
}
System_Xml::System::Xml::Schema::SchemaNames* System_Xml::System::Xml::Schema::XmlSchemaCollection::GetSchemaNames(System_Xml::System::Xml::XmlNameTable* nt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSchemaNames", std::vector<std::string> { "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaNames*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaCollection::Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, System_Xml::System::Xml::Schema::XmlSchema* schema, bool compile)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Xml.Schema.SchemaInfo", "System.Xml.Schema.XmlSchema", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)schemaInfo;
	params[2] = (intptr_t)schema;
	params[3] = (intptr_t)&compile;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchema* System_Xml::System::Xml::Schema::XmlSchemaCollection::Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, System_Xml::System::Xml::Schema::XmlSchema* schema, bool compile, System_Xml::System::Xml::XmlResolver* resolver)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Xml.Schema.SchemaInfo", "System.Xml.Schema.XmlSchema", "System.Boolean", "System.Xml.XmlResolver" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)schemaInfo;
	params[2] = (intptr_t)schema;
	params[3] = (intptr_t)&compile;
	params[4] = (intptr_t)resolver;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchema*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaCollection::Add(mscorlib::System::String* ns, System_Xml::System::Xml::Schema::XmlSchemaCollectionNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Xml.Schema.XmlSchemaCollectionNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::ValidationEventHandler* System_Xml::System::Xml::Schema::XmlSchemaCollection::get_EventHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ValidationEventHandler*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaCollection::set_EventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_EventHandler", std::vector<std::string> { "System.Xml.Schema.ValidationEventHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

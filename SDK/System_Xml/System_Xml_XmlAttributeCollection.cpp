#include "System_Xml_XmlAttributeCollection.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlAttributeCollection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlAttributeCollection");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlAttributeCollection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlAttributeCollection::_ctor(System_Xml::System::Xml::XmlNode* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlAttributeCollection::get_ItemOf(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ItemOf", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlAttributeCollection::SetNamedItem(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNamedItem", std::vector<std::string> { "System.Xml.XmlNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlAttributeCollection::Append(System_Xml::System::Xml::XmlAttribute* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlAttributeCollection::Remove(System_Xml::System::Xml::XmlAttribute* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlAttributeCollection::RemoveAt(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAt", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}
void System_Xml::System::Xml::XmlAttributeCollection::RemoveAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAttributeCollection::System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index)
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
bool System_Xml::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_IsSynchronized()
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
mscorlib::System::Object* System_Xml::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_SyncRoot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.ICollection.get_SyncRoot");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t System_Xml::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_Count()
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
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlAttributeCollection::AddNode(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNode", std::vector<std::string> { "System.Xml.XmlNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlAttributeCollection::InsertNodeAt(int32_t i, System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertNodeAt", std::vector<std::string> { "System.Int32", "System.Xml.XmlNode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
System_Xml::System::Xml::XmlNode* System_Xml::System::Xml::XmlAttributeCollection::RemoveNodeAt(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveNodeAt", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
void System_Xml::System::Xml::XmlAttributeCollection::Detach(System_Xml::System::Xml::XmlAttribute* attr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Detach", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAttributeCollection::InsertParentIntoElementIdAttrMap(System_Xml::System::Xml::XmlAttribute* attr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertParentIntoElementIdAttrMap", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAttributeCollection::RemoveParentFromElementIdAttrMap(System_Xml::System::Xml::XmlAttribute* attr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveParentFromElementIdAttrMap", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::XmlAttributeCollection::RemoveDuplicateAttribute(System_Xml::System::Xml::XmlAttribute* attr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveDuplicateAttribute", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attr;
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
bool System_Xml::System::Xml::XmlAttributeCollection::PrepareParentInElementIdAttrMap(mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareParentInElementIdAttrMap", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrPrefix;
	params[1] = (intptr_t)attrLocalName;
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
void System_Xml::System::Xml::XmlAttributeCollection::ResetParentInElementIdAttrMap(mscorlib::System::String* oldVal, mscorlib::System::String* newVal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetParentInElementIdAttrMap", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)oldVal;
	params[1] = (intptr_t)newVal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlAttribute* System_Xml::System::Xml::XmlAttributeCollection::InternalAppendAttribute(System_Xml::System::Xml::XmlAttribute* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalAppendAttribute", std::vector<std::string> { "System.Xml.XmlAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlAttribute*)returnValue;
}

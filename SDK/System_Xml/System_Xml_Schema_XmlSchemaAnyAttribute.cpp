#include "System_Xml_Schema_XmlSchemaAnyAttribute.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaAnyAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::set_Namespace(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Namespace", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XmlSchemaContentProcessing System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProcessContents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaContentProcessing>(*(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::set_ProcessContents(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ProcessContents", std::vector<std::string> { "System.Xml.Schema.XmlSchemaContentProcessing" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::NamespaceList* System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::get_NamespaceList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NamespaceList");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::NamespaceList*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaContentProcessing System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::get_ProcessContentsCorrect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProcessContentsCorrect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XmlSchemaContentProcessing>(*(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceList(mscorlib::System::String* targetNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildNamespaceList", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::BuildNamespaceListV1Compat(mscorlib::System::String* targetNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildNamespaceListV1Compat", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::Allows(System_Xml::System::Xml::XmlQualifiedName* qname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Allows", std::vector<std::string> { "System.Xml.XmlQualifiedName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qname;
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
bool System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::IsSubset(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* sub, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* super)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSubset", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaAnyAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sub;
	params[1] = (intptr_t)super;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::Intersection(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o1, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Intersection", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)o1;
	params[1] = (intptr_t)o2;
	params[2] = (intptr_t)&v1Compat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute*)returnValue;
}
System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::Union(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o1, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Union", std::vector<std::string> { "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Xml.Schema.XmlSchemaAnyAttribute", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)o1;
	params[1] = (intptr_t)o2;
	params[2] = (intptr_t)&v1Compat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute*)returnValue;
}
void System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

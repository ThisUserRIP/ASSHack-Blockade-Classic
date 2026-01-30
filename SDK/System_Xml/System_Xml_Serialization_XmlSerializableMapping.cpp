#include "System_Xml_Serialization_XmlSerializableMapping.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlSerializableMapping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializableMapping");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlSerializableMapping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlSerializableMapping::_ctor(System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* elementName, mscorlib::System::String* ns, System_Xml::System::Xml::Serialization::TypeData* typeData, mscorlib::System::String* xmlType, mscorlib::System::String* xmlTypeNamespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Serialization.XmlRootAttribute", "System.String", "System.String", "System.Xml.Serialization.TypeData", "System.String", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)root;
	params[1] = (intptr_t)elementName;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)typeData;
	params[4] = (intptr_t)xmlType;
	params[5] = (intptr_t)xmlTypeNamespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

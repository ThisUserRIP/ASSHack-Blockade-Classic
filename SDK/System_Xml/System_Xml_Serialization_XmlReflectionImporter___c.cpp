#include "System_Xml_Serialization_XmlReflectionImporter___c.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlReflectionImporter___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Serialization::XmlReflectionImporter::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlReflectionImporter___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlReflectionImporter___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System_Xml::System::Xml::Serialization::XmlReflectionImporter___c::_ImportClassMapping_b__28_0(System_Xml::System::Xml::Serialization::XmlReflectionMember* m1, System_Xml::System::Xml::Serialization::XmlReflectionMember* m2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ImportClassMapping>b__28_0", std::vector<std::string> { "System.Xml.Serialization.XmlReflectionMember", "System.Xml.Serialization.XmlReflectionMember" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)m1;
	params[1] = (intptr_t)m2;
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

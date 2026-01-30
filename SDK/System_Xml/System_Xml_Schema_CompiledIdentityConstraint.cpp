#include "System_Xml_Schema_CompiledIdentityConstraint.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::CompiledIdentityConstraint::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "CompiledIdentityConstraint");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::CompiledIdentityConstraint::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System_Xml::System::Xml::Schema::CompiledIdentityConstraint::get_Role()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Role");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole>(*(System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::Asttree* System_Xml::System::Xml::Schema::CompiledIdentityConstraint::get_Selector()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Selector");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::Asttree*)returnValue;
}
IL2CPP::Array<System_Xml::System::Xml::Schema::Asttree*>* System_Xml::System::Xml::Schema::CompiledIdentityConstraint::get_Fields()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Fields");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System_Xml::System::Xml::Schema::Asttree*>*)returnValue;
}
void System_Xml::System::Xml::Schema::CompiledIdentityConstraint::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::CompiledIdentityConstraint::_ctor(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, System_Xml::System::Xml::XmlNamespaceManager* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XmlSchemaIdentityConstraint", "System.Xml.XmlNamespaceManager" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)constraint;
	params[1] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::CompiledIdentityConstraint::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

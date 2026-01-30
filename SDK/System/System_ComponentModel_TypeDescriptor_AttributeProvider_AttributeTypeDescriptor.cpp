#include "System_ComponentModel_TypeDescriptor_AttributeProvider_AttributeTypeDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::TypeDescriptor_AttributeProvider::GetIl2CppClass(), "AttributeTypeDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor::_ctor(IL2CPP::Array<mscorlib::System::Attribute*>* attrs, System::ComponentModel::ICustomTypeDescriptor* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Attribute[]", "System.ComponentModel.ICustomTypeDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrs;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::AttributeCollection* System::System::ComponentModel::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor::GetAttributes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttributes");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::AttributeCollection*)returnValue;
}

#include "System_ComponentModel_TypeDescriptor_AttributeProvider.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::TypeDescriptor_AttributeProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::TypeDescriptor::GetIl2CppClass(), "AttributeProvider");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::TypeDescriptor_AttributeProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::TypeDescriptor_AttributeProvider::_ctor(System::ComponentModel::TypeDescriptionProvider* existingProvider, IL2CPP::Array<mscorlib::System::Attribute*>* attrs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.TypeDescriptionProvider", "System.Attribute[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)existingProvider;
	params[1] = (intptr_t)attrs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::ICustomTypeDescriptor* System::System::ComponentModel::TypeDescriptor_AttributeProvider::GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeDescriptor", std::vector<std::string> { "System.Type", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::ICustomTypeDescriptor*)returnValue;
}

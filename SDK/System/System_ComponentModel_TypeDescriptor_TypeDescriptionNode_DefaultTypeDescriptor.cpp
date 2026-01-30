#include "System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetIl2CppClass(), "DefaultTypeDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::_ctor(System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, mscorlib::System::Type* objectType, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.TypeDescriptor/TypeDescriptionNode", "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::AttributeCollection* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::AttributeCollection*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetClassName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetComponentName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::ComponentModel::TypeConverter* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetConverter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::TypeConverter*)returnValue;
}
System::System::ComponentModel::EventDescriptor* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptor*)returnValue;
}
System::System::ComponentModel::PropertyDescriptor* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptor*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(mscorlib::System::Type* editorBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)editorBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System::System::ComponentModel::EventDescriptorCollection* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetEvents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptorCollection*)returnValue;
}
System::System::ComponentModel::EventDescriptorCollection* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(IL2CPP::Array<mscorlib::System::Attribute*>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::vector<std::string> { "System.Attribute[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptorCollection*)returnValue;
}
System::System::ComponentModel::PropertyDescriptorCollection* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetProperties");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptorCollection*)returnValue;
}
System::System::ComponentModel::PropertyDescriptorCollection* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(IL2CPP::Array<mscorlib::System::Attribute*>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<std::string> { "System.Attribute[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptorCollection*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor* pd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<std::string> { "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}

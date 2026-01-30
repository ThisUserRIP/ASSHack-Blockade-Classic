#include "System_ComponentModel_ReflectTypeDescriptionProvider.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ReflectTypeDescriptionProvider");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Guid System::System::ComponentModel::ReflectTypeDescriptionProvider::get_ExtenderProviderKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ExtenderProviderKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
void System::System::ComponentModel::ReflectTypeDescriptionProvider::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Hashtable* System::System::ComponentModel::ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IntrinsicTypeConverters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Hashtable*)returnValue;
}
void System::System::ComponentModel::ReflectTypeDescriptionProvider::AddEditorTable(mscorlib::System::Type* editorBaseType, mscorlib::System::Collections::Hashtable* table)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEditorTable", std::vector<std::string> { "System.Type", "System.Collections.Hashtable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)editorBaseType;
	params[1] = (intptr_t)table;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance(mscorlib::System::IServiceProvider* provider, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.IServiceProvider", "System.Type", "System.Type[]", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)argTypes;
	params[3] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance(mscorlib::System::Type* objectType, mscorlib::System::Type* callingType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)callingType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System::System::ComponentModel::AttributeCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetAttributes(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttributes", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::AttributeCollection*)returnValue;
}
mscorlib::System::Collections::IDictionary* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetCache(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCache", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IDictionary*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetClassName(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClassName", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetComponentName(mscorlib::System::Type* type, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetComponentName", std::vector<std::string> { "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::ComponentModel::TypeConverter* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetConverter(mscorlib::System::Type* type, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConverter", std::vector<std::string> { "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::TypeConverter*)returnValue;
}
System::System::ComponentModel::EventDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultEvent(mscorlib::System::Type* type, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultEvent", std::vector<std::string> { "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptor*)returnValue;
}
System::System::ComponentModel::PropertyDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultProperty(mscorlib::System::Type* type, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultProperty", std::vector<std::string> { "System.Type", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptor*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetEditor(mscorlib::System::Type* type, mscorlib::System::Object* instance, mscorlib::System::Type* editorBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEditor", std::vector<std::string> { "System.Type", "System.Object", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	params[2] = (intptr_t)editorBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Collections::Hashtable* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetEditorTable(mscorlib::System::Type* editorBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEditorTable", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)editorBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Hashtable*)returnValue;
}
System::System::ComponentModel::EventDescriptorCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetEvents(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEvents", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptorCollection*)returnValue;
}
System::System::ComponentModel::AttributeCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedAttributes(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedAttributes", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::AttributeCollection*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedClassName(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedClassName", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedComponentName(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedComponentName", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::ComponentModel::TypeConverter* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedConverter(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedConverter", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::TypeConverter*)returnValue;
}
System::System::ComponentModel::EventDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultEvent(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedDefaultEvent", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptor*)returnValue;
}
System::System::ComponentModel::PropertyDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultProperty(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedDefaultProperty", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptor*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEditor(mscorlib::System::Object* instance, mscorlib::System::Type* editorBaseType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedEditor", std::vector<std::string> { "System.Object", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)instance;
	params[1] = (intptr_t)editorBaseType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System::System::ComponentModel::EventDescriptorCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEvents(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedEvents", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::EventDescriptorCollection*)returnValue;
}
System::System::ComponentModel::PropertyDescriptorCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedProperties(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedProperties", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptorCollection*)returnValue;
}
IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenderProviders(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtenderProviders", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::IExtenderProvider*>*)returnValue;
}
IL2CPP::Array<System::ComponentModel::IExtenderProvider*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenders(mscorlib::System::Collections::ICollection* components, mscorlib::System::Object* instance, mscorlib::System::Collections::IDictionary* cache)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtenders", std::vector<std::string> { "System.Collections.ICollection", "System.Object", "System.Collections.IDictionary" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)components;
	params[1] = (intptr_t)instance;
	params[2] = (intptr_t)cache;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::IExtenderProvider*>*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedPropertyOwner(mscorlib::System::Object* instance, System::ComponentModel::PropertyDescriptor* pd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedPropertyOwner", std::vector<std::string> { "System.Object", "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)instance;
	params[1] = (intptr_t)pd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System::System::ComponentModel::ICustomTypeDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor(mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtendedTypeDescriptor", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::ICustomTypeDescriptor*)returnValue;
}
mscorlib::System::String* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetFullComponentName(mscorlib::System::Object* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFullComponentName", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)component;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<mscorlib::System::Type*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetPopulatedTypes(mscorlib::System::Reflection::Module* module)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPopulatedTypes", std::vector<std::string> { "System.Reflection.Module" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)module;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
System::System::ComponentModel::PropertyDescriptorCollection* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetProperties(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperties", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptorCollection*)returnValue;
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetPropertyOwner(mscorlib::System::Type* type, mscorlib::System::Object* instance, System::ComponentModel::PropertyDescriptor* pd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPropertyOwner", std::vector<std::string> { "System.Type", "System.Object", "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)instance;
	params[2] = (intptr_t)pd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Type* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetReflectionType(mscorlib::System::Type* objectType, mscorlib::System::Object* instance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReflectionType", std::vector<std::string> { "System.Type", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)instance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
System::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeData(mscorlib::System::Type* type, bool createIfNeeded)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeData", std::vector<std::string> { "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&createIfNeeded;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*)returnValue;
}
System::System::ComponentModel::ICustomTypeDescriptor* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeDescriptor(mscorlib::System::Type* objectType, mscorlib::System::Object* instance)
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
mscorlib::System::Type* System::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeFromName(mscorlib::System::String* typeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
bool System::System::ComponentModel::ReflectTypeDescriptionProvider::IsPopulated(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPopulated", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
IL2CPP::Array<mscorlib::System::Attribute*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReflectGetAttributes", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Attribute*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes(mscorlib::System::Reflection::MemberInfo* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReflectGetAttributes", std::vector<std::string> { "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
IL2CPP::Array<System::ComponentModel::EventDescriptor*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetEvents(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReflectGetEvents", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::EventDescriptor*>*)returnValue;
}
IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetExtendedProperties(System::ComponentModel::IExtenderProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReflectGetExtendedProperties", std::vector<std::string> { "System.ComponentModel.IExtenderProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>*)returnValue;
}
IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* System::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetProperties(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReflectGetProperties", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>*)returnValue;
}
void System::System::ComponentModel::ReflectTypeDescriptionProvider::Refresh(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Refresh", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::ReflectTypeDescriptionProvider::SearchIntrinsicTable(mscorlib::System::Collections::Hashtable* table, mscorlib::System::Type* callingType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SearchIntrinsicTable", std::vector<std::string> { "System.Collections.Hashtable", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)table;
	params[1] = (intptr_t)callingType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void System::System::ComponentModel::ReflectTypeDescriptionProvider::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

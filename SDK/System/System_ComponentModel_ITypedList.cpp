#include "System_ComponentModel_ITypedList.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ITypedList::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ITypedList");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ITypedList::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::ComponentModel::ITypedList::GetListName(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* listAccessors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetListName", std::vector<std::string> { "System.ComponentModel.PropertyDescriptor[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listAccessors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::ComponentModel::PropertyDescriptorCollection* System::System::ComponentModel::ITypedList::GetItemProperties(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* listAccessors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetItemProperties", std::vector<std::string> { "System.ComponentModel.PropertyDescriptor[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listAccessors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptorCollection*)returnValue;
}

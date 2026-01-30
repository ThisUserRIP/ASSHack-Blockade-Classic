#include "System_ComponentModel_ListSortDescription.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ListSortDescription::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "ListSortDescription");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ListSortDescription::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ListSortDescription::_ctor(System::ComponentModel::PropertyDescriptor* property, System::ComponentModel::ListSortDirection direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.PropertyDescriptor", "System.ComponentModel.ListSortDirection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)property;
	params[1] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::PropertyDescriptor* System::System::ComponentModel::ListSortDescription::get_PropertyDescriptor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PropertyDescriptor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::ComponentModel::PropertyDescriptor*)returnValue;
}
void System::System::ComponentModel::ListSortDescription::set_PropertyDescriptor(System::ComponentModel::PropertyDescriptor* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PropertyDescriptor", std::vector<std::string> { "System.ComponentModel.PropertyDescriptor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::ComponentModel::ListSortDirection System::System::ComponentModel::ListSortDescription::get_SortDirection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SortDirection");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::ComponentModel::ListSortDirection ret;
		std::memset(&ret, 0, sizeof(System::ComponentModel::ListSortDirection));
		return ret;
	}
	return static_cast<System::ComponentModel::ListSortDirection>(*(System::ComponentModel::ListSortDirection*)il2cpp_object_unbox(returnValue));
}
void System::System::ComponentModel::ListSortDescription::set_SortDirection(System::ComponentModel::ListSortDirection value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SortDirection", std::vector<std::string> { "System.ComponentModel.ListSortDirection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_ComponentModel_INotifyPropertyChanged.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::INotifyPropertyChanged::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "INotifyPropertyChanged");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::INotifyPropertyChanged::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::INotifyPropertyChanged::add_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_PropertyChanged", std::vector<std::string> { "System.ComponentModel.PropertyChangedEventHandler" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::INotifyPropertyChanged::remove_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_PropertyChanged", std::vector<std::string> { "System.ComponentModel.PropertyChangedEventHandler" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_ComponentModel_CompModSwitches.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::CompModSwitches::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel", "CompModSwitches");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::CompModSwitches::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Diagnostics::BooleanSwitch* System::System::ComponentModel::CompModSwitches::get_CommonDesignerServices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CommonDesignerServices");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Diagnostics::BooleanSwitch*)returnValue;
}
System::System::Diagnostics::TraceSwitch* System::System::ComponentModel::CompModSwitches::get_EventLog()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventLog");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Diagnostics::TraceSwitch*)returnValue;
}

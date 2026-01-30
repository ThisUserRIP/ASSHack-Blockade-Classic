#include "Rewired_Data_IConfigVars_Internal.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::IConfigVars_Internal::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "IConfigVars_Internal");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::IConfigVars_Internal::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>* Rewired_Core::Rewired::Data::IConfigVars_Internal::get_values()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_values");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>*)returnValue;
}

#include "System_Reflection_IReflectableType.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::IReflectableType::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "IReflectableType");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::IReflectableType::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Reflection::TypeInfo* mscorlib::System::Reflection::IReflectableType::GetTypeInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInfo");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::TypeInfo*)returnValue;
}

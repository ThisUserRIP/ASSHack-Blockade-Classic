#include "Rewired_Utils_Interfaces_IDeepCloneable.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Interfaces::IDeepCloneable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Interfaces", "IDeepCloneable");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Interfaces::IDeepCloneable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* Rewired_Core::Rewired::Utils::Interfaces::IDeepCloneable::DeepClone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeepClone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}

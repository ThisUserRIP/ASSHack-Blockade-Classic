#include "Rewired_UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::UnityInputHelper::GetIl2CppClass(), "xrWZoZmrVvNIkALVloJCAwCjzBI");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI::_ctor(int32_t joystickIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&joystickIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

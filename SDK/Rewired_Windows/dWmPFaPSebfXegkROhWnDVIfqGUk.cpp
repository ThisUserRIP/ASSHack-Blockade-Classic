#include "dWmPFaPSebfXegkROhWnDVIfqGUk.h"

IL2CPP::Il2CppClass* Rewired_Windows::dWmPFaPSebfXegkROhWnDVIfqGUk::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "dWmPFaPSebfXegkROhWnDVIfqGUk");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::dWmPFaPSebfXegkROhWnDVIfqGUk::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Windows::dWmPFaPSebfXegkROhWnDVIfqGUk::get_SizeInBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SizeInBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}

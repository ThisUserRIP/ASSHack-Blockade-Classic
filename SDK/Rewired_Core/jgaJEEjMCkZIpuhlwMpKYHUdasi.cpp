#include "jgaJEEjMCkZIpuhlwMpKYHUdasi.h"

IL2CPP::Il2CppClass* Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "jgaJEEjMCkZIpuhlwMpKYHUdasi");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::_ctor(Rewired_Core::ZIAAVUtCRuggKkjYOeCeJntDlQmQ* nativeGameController, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "ZIAAVUtCRuggKkjYOeCeJntDlQmQ", "spZDJRewmbxAsUKXRWZDtdnqsYI" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nativeGameController;
	params[1] = (intptr_t)joystickInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::IsAttached()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAttached");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::get_DeviceType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeviceType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq));
		return ret;
	}
	return static_cast<Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq>(*(Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::InitializeHaptic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeHaptic");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::jgaJEEjMCkZIpuhlwMpKYHUdasi::CloseDevice()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseDevice");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

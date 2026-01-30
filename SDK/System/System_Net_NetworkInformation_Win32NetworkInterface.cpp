#include "System_Net_NetworkInformation_Win32NetworkInterface.h"

IL2CPP::Il2CppClass* System::System::Net::NetworkInformation::Win32NetworkInterface::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.NetworkInformation", "Win32NetworkInterface");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::NetworkInformation::Win32NetworkInterface::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t System::System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams(intptr_t ptr, int32_t& size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNetworkParams", std::vector<std::string> { "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ptr;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
System::System::Net::NetworkInformation::Win32_FIXED_INFO System::System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FixedInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::NetworkInformation::Win32_FIXED_INFO ret;
		std::memset(&ret, 0, sizeof(System::Net::NetworkInformation::Win32_FIXED_INFO));
		return ret;
	}
	return static_cast<System::Net::NetworkInformation::Win32_FIXED_INFO>(*(System::Net::NetworkInformation::Win32_FIXED_INFO*)il2cpp_object_unbox(returnValue));
}

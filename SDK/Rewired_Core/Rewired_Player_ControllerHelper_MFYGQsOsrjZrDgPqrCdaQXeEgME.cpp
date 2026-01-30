#include "Rewired_Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Player_ControllerHelper::GetIl2CppClass(), "MFYGQsOsrjZrDgPqrCdaQXeEgME");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::VuPCublfnEonOHYjswRWsBZbjCI* Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME::get_mapSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mapSet");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::VuPCublfnEonOHYjswRWsBZbjCI*)returnValue;
}
Rewired_Core::Rewired::Controller* Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME::get_controller()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controller");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller*)returnValue;
}
double Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME::get_lastActiveTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lastActiveTime");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}

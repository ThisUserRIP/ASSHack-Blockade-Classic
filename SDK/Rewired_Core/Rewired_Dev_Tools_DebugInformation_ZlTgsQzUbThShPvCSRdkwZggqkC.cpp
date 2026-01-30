#include "Rewired_Dev_Tools_DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Dev::Tools::DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Dev::Tools::DebugInformation::GetIl2CppClass(), "ZlTgsQzUbThShPvCSRdkwZggqkC");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Dev::Tools::DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::Dev::Tools::DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC::get_indentLevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_indentLevel");
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
void Rewired_Core::Rewired::Dev::Tools::DebugInformation_ZlTgsQzUbThShPvCSRdkwZggqkC::set_indentLevel(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_indentLevel", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

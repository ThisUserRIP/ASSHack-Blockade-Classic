#include "System_ComponentModel_LicenseManager_LicenseInteropHelper.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::LicenseManager_LicenseInteropHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::LicenseManager::GetIl2CppClass(), "LicenseInteropHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::LicenseManager_LicenseInteropHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* System::System::ComponentModel::LicenseManager_LicenseInteropHelper::AllocateAndValidateLicense(mscorlib::System::RuntimeTypeHandle rth, intptr_t bstrKey, int32_t fDesignTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocateAndValidateLicense", std::vector<std::string> { "System.RuntimeTypeHandle", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rth;
	params[1] = (intptr_t)&bstrKey;
	params[2] = (intptr_t)&fDesignTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t System::System::ComponentModel::LicenseManager_LicenseInteropHelper::RequestLicKey(mscorlib::System::RuntimeTypeHandle rth, intptr_t& pbstrKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestLicKey", std::vector<std::string> { "System.RuntimeTypeHandle", "System.IntPtr&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rth;
	params[1] = (intptr_t)&pbstrKey;
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
void System::System::ComponentModel::LicenseManager_LicenseInteropHelper::GetLicInfo(mscorlib::System::RuntimeTypeHandle rth, int32_t& pRuntimeKeyAvail, int32_t& pLicVerified)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLicInfo", std::vector<std::string> { "System.RuntimeTypeHandle", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rth;
	params[1] = (intptr_t)&pRuntimeKeyAvail;
	params[2] = (intptr_t)&pLicVerified;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::LicenseManager_LicenseInteropHelper::GetCurrentContextInfo(int32_t& fDesignTime, intptr_t& bstrKey, mscorlib::System::RuntimeTypeHandle rth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentContextInfo", std::vector<std::string> { "System.Int32&", "System.IntPtr&", "System.RuntimeTypeHandle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fDesignTime;
	params[1] = (intptr_t)&bstrKey;
	params[2] = (intptr_t)&rth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::LicenseManager_LicenseInteropHelper::SaveKeyInCurrentContext(intptr_t bstrKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveKeyInCurrentContext", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bstrKey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::LicenseManager_LicenseInteropHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "System_Net_ICertificatePolicy.h"

IL2CPP::Il2CppClass* System::System::Net::ICertificatePolicy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "ICertificatePolicy");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ICertificatePolicy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool System::System::Net::ICertificatePolicy::CheckValidationResult(System::Net::ServicePoint* srvPoint, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Net::WebRequest* request, int32_t certificateProblem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValidationResult", std::vector<std::string> { "System.Net.ServicePoint", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Net.WebRequest", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)srvPoint;
	params[1] = (intptr_t)certificate;
	params[2] = (intptr_t)request;
	params[3] = (intptr_t)&certificateProblem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

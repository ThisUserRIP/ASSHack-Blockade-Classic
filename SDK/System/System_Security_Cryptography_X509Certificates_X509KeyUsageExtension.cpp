#include "System_Security_Cryptography_X509Certificates_X509KeyUsageExtension.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor(System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.AsnEncodedData", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)encodedKeyUsage;
	params[1] = (intptr_t)&critical;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509KeyUsageFlags", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keyUsages;
	params[1] = (intptr_t)&critical;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_KeyUsages");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags ret;
		std::memset(&ret, 0, sizeof(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags));
		return ret;
	}
	return static_cast<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(*(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*)il2cpp_object_unbox(returnValue));
}
void System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFrom", std::vector<std::string> { "System.Security.Cryptography.AsnEncodedData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asnEncodedData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValidFlags", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509KeyUsageFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags ret;
		std::memset(&ret, 0, sizeof(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags));
		return ret;
	}
	return static_cast<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(*(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*)il2cpp_object_unbox(returnValue));
}
System::System::Security::Cryptography::AsnDecodeStatus System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode(IL2CPP::Array<uint8_t>* extension)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)extension;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Security::Cryptography::AsnDecodeStatus ret;
		std::memset(&ret, 0, sizeof(System::Security::Cryptography::AsnDecodeStatus));
		return ret;
	}
	return static_cast<System::Security::Cryptography::AsnDecodeStatus>(*(System::Security::Cryptography::AsnDecodeStatus*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::String* System::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString(bool multiLine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&multiLine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

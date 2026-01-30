#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_Pem_PemObjectParser.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IO.Pem", "PemObjectParser");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseObject", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IO.Pem.PemObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}

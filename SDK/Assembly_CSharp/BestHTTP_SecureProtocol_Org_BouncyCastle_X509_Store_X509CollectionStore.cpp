#include "BestHTTP_SecureProtocol_Org_BouncyCastle_X509_Store_X509CollectionStore.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CollectionStore::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store", "X509CollectionStore");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CollectionStore::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor(mscorlib::System::Collections::ICollection* collection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.ICollection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)collection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ICollection* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMatches", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Selector" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)selector;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}

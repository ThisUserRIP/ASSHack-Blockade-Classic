#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_WTauNafMultiplier.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* point, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyPositive", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)point;
	params[1] = (intptr_t)k;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a, int8_t mu)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyWTnaf", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.AbstractF2mPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Abc.ZTauElement", "System.SByte", "System.SByte" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)lambda;
	params[2] = (intptr_t)&a;
	params[3] = (intptr_t)&mu;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, IL2CPP::Array<int8_t>* u)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyFromWTnaf", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.AbstractF2mPoint", "System.SByte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)u;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

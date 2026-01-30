#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Endo_ECEndomorphism.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_PointMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PointMap");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_HasEfficientPointMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasEfficientPointMap");
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

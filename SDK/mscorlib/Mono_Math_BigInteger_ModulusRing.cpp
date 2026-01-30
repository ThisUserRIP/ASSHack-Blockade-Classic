#include "Mono_Math_BigInteger_ModulusRing.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Math::BigInteger_ModulusRing::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Mono::Math::BigInteger::GetIl2CppClass(), "ModulusRing");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Math::BigInteger_ModulusRing::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Math::BigInteger_ModulusRing::_ctor(mscorlib::Mono::Math::BigInteger* modulus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)modulus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Math::BigInteger_ModulusRing::BarrettReduction(mscorlib::Mono::Math::BigInteger* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BarrettReduction", std::vector<std::string> { "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_ModulusRing::Multiply(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Multiply", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_ModulusRing::Difference(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Difference", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_ModulusRing::Pow(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pow", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)k;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_ModulusRing::Pow(uint32_t b, mscorlib::Mono::Math::BigInteger* exp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pow", std::vector<std::string> { "System.UInt32", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&b;
	params[1] = (intptr_t)exp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}

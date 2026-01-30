#include "Mono_Math_Prime_Generator_PrimeGeneratorBase.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Math::Prime::ConfidenceFactor Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_Confidence()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Confidence");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Math::Prime::ConfidenceFactor ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Math::Prime::ConfidenceFactor));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Math::Prime::ConfidenceFactor>(*(Mono_Security::Mono::Math::Prime::ConfidenceFactor*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Math::Prime::PrimalityTest* Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_PrimalityTest()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PrimalityTest");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::Prime::PrimalityTest*)returnValue;
}
int32_t Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::get_TrialDivisionBounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TrialDivisionBounds");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::GenerateNewPrime(int32_t bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateNewPrime", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bits;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
void Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

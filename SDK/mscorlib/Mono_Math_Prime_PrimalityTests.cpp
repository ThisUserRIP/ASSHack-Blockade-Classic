#include "Mono_Math_Prime_PrimalityTests.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Math::Prime::PrimalityTests::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Math.Prime", "PrimalityTests");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Math::Prime::PrimalityTests::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t mscorlib::Mono::Math::Prime::PrimalityTests::GetSPPRounds(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSPPRounds", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.Prime.ConfidenceFactor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&confidence;
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
bool mscorlib::Mono::Math::Prime::PrimalityTests::Test(mscorlib::Mono::Math::BigInteger* n, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Test", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.Prime.ConfidenceFactor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&confidence;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::Mono::Math::Prime::PrimalityTests::RabinMillerTest(mscorlib::Mono::Math::BigInteger* n, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RabinMillerTest", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.Prime.ConfidenceFactor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&confidence;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::Mono::Math::Prime::PrimalityTests::SmallPrimeSppTest(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SmallPrimeSppTest", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.Prime.ConfidenceFactor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&confidence;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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

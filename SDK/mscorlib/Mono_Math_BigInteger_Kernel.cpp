#include "Mono_Math_BigInteger_Kernel.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Math::BigInteger_Kernel::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Mono::Math::BigInteger::GetIl2CppClass(), "Kernel");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Math::BigInteger_Kernel::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::AddSameSign(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSameSign", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::Subtract(mscorlib::Mono::Math::BigInteger* big, mscorlib::Mono::Math::BigInteger* small)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Subtract", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)big;
	params[1] = (intptr_t)small;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
void mscorlib::Mono::Math::BigInteger_Kernel::MinusEq(mscorlib::Mono::Math::BigInteger* big, mscorlib::Mono::Math::BigInteger* small)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MinusEq", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)big;
	params[1] = (intptr_t)small;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Math::BigInteger_Kernel::PlusEq(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlusEq", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Mono::Math::BigInteger_Sign mscorlib::Mono::Math::BigInteger_Kernel::Compare(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::Mono::Math::BigInteger_Sign ret;
		std::memset(&ret, 0, sizeof(mscorlib::Mono::Math::BigInteger_Sign));
		return ret;
	}
	return static_cast<mscorlib::Mono::Math::BigInteger_Sign>(*(mscorlib::Mono::Math::BigInteger_Sign*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::Mono::Math::BigInteger_Kernel::SingleByteDivideInPlace(mscorlib::Mono::Math::BigInteger* n, uint32_t d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SingleByteDivideInPlace", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::Mono::Math::BigInteger_Kernel::DwordMod(mscorlib::Mono::Math::BigInteger* n, uint32_t d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DwordMod", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>* mscorlib::Mono::Math::BigInteger_Kernel::DwordDivMod(mscorlib::Mono::Math::BigInteger* n, uint32_t d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DwordDivMod", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>*)returnValue;
}
IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>* mscorlib::Mono::Math::BigInteger_Kernel::multiByteDivide(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "multiByteDivide", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::LeftShift(mscorlib::Mono::Math::BigInteger* bi, int32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LeftShift", std::vector<std::string> { "Mono.Math.BigInteger", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::RightShift(mscorlib::Mono::Math::BigInteger* bi, int32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RightShift", std::vector<std::string> { "Mono.Math.BigInteger", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::MultiplyByDword(mscorlib::Mono::Math::BigInteger* n, uint32_t f)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyByDword", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&f;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}
void mscorlib::Mono::Math::BigInteger_Kernel::Multiply(IL2CPP::Array<uint32_t>* x, uint32_t xOffset, uint32_t xLen, IL2CPP::Array<uint32_t>* y, uint32_t yOffset, uint32_t yLen, IL2CPP::Array<uint32_t>* d, uint32_t dOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Multiply", std::vector<std::string> { "System.UInt32[]", "System.UInt32", "System.UInt32", "System.UInt32[]", "System.UInt32", "System.UInt32", "System.UInt32[]", "System.UInt32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&xOffset;
	params[2] = (intptr_t)&xLen;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOffset;
	params[5] = (intptr_t)&yLen;
	params[6] = (intptr_t)d;
	params[7] = (intptr_t)&dOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Math::BigInteger_Kernel::MultiplyMod2p32pmod(IL2CPP::Array<uint32_t>* x, int32_t xOffset, int32_t xLen, IL2CPP::Array<uint32_t>* y, int32_t yOffest, int32_t yLen, IL2CPP::Array<uint32_t>* d, int32_t dOffset, int32_t mod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyMod2p32pmod", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&xOffset;
	params[2] = (intptr_t)&xLen;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOffest;
	params[5] = (intptr_t)&yLen;
	params[6] = (intptr_t)d;
	params[7] = (intptr_t)&dOffset;
	params[8] = (intptr_t)&mod;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t mscorlib::Mono::Math::BigInteger_Kernel::modInverse(mscorlib::Mono::Math::BigInteger* bi, uint32_t modulus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "modInverse", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&modulus;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::Mono::Math::BigInteger* mscorlib::Mono::Math::BigInteger_Kernel::modInverse(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::BigInteger* modulus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "modInverse", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)modulus;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Math::BigInteger*)returnValue;
}

#include "Mono_Math_BigInteger.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Math::BigInteger::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Math", "BigInteger");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Math::BigInteger::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Math::BigInteger::_ctor(Mono_Security::Mono::Math::BigInteger_Sign sign, uint32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Math.BigInteger/Sign", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sign;
	params[1] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::_ctor(Mono_Security::Mono::Math::BigInteger* bi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bi;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::_ctor(Mono_Security::Mono::Math::BigInteger* bi, uint32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::_ctor(IL2CPP::Array<uint8_t>* inData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::_ctor(uint32_t ui)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ui;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Implicit(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Implicit(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Subtraction(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator-(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Subtraction(bi1, bi2);
}
uint32_t Mono_Security::Mono::Math::BigInteger::op_Modulus(Mono_Security::Mono::Math::BigInteger* bi, uint32_t ui)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Modulus", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi;
	params[1] = (intptr_t)&ui;
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
uint32_t Mono_Security::Mono::Math::operator%(Mono_Security::Mono::Math::BigInteger& bi, uint32_t ui)
{
	return Mono_Security::Mono::Math::BigInteger::op_Modulus(bi, ui);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Modulus(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Modulus", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator%(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Modulus(bi1, bi2);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Division(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator/(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Division(bi1, bi2);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_Multiply(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator*(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Multiply(bi1, bi2);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_LeftShift(Mono_Security::Mono::Math::BigInteger* bi1, int32_t shiftVal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LeftShift", std::vector<std::string> { "Mono.Math.BigInteger", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)&shiftVal;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator<<(Mono_Security::Mono::Math::BigInteger& bi1, int32_t shiftVal)
{
	return Mono_Security::Mono::Math::BigInteger::op_LeftShift(bi1, shiftVal);
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::op_RightShift(Mono_Security::Mono::Math::BigInteger* bi1, int32_t shiftVal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_RightShift", std::vector<std::string> { "Mono.Math.BigInteger", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)&shiftVal;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::operator>>(Mono_Security::Mono::Math::BigInteger& bi1, int32_t shiftVal)
{
	return Mono_Security::Mono::Math::BigInteger::op_RightShift(bi1, shiftVal);
}
mscorlib::System::Security::Cryptography::RandomNumberGenerator* Mono_Security::Mono::Math::BigInteger::get_Rng()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Rng");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RandomNumberGenerator*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::GenerateRandom(int32_t bits, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateRandom", std::vector<std::string> { "System.Int32", "System.Security.Cryptography.RandomNumberGenerator" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&bits;
	params[1] = (intptr_t)rng;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::GenerateRandom(int32_t bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateRandom", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bits;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
int32_t Mono_Security::Mono::Math::BigInteger::BitCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BitCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Mono_Security::Mono::Math::BigInteger::TestBit(int32_t bitNum)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TestBit", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bitNum;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Mono_Security::Mono::Math::BigInteger::SetBit(uint32_t bitNum)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBit", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bitNum;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::SetBit(uint32_t bitNum, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBit", std::vector<std::string> { "System.UInt32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&bitNum;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Mono_Security::Mono::Math::BigInteger::LowestSetBit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LowestSetBit");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Math::BigInteger::GetBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool Mono_Security::Mono::Math::BigInteger::op_Equality(Mono_Security::Mono::Math::BigInteger* bi1, uint32_t ui)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)&ui;
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
bool Mono_Security::Mono::Math::operator==(Mono_Security::Mono::Math::BigInteger& bi1, uint32_t& ui)
{
	return Mono_Security::Mono::Math::BigInteger::op_Equality(&bi1, ui);
}
bool Mono_Security::Mono::Math::BigInteger::op_Inequality(Mono_Security::Mono::Math::BigInteger* bi1, uint32_t ui)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "Mono.Math.BigInteger", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)&ui;
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
bool Mono_Security::Mono::Math::operator!=(Mono_Security::Mono::Math::BigInteger& bi1, uint32_t& ui)
{
	return Mono_Security::Mono::Math::BigInteger::op_Inequality(&bi1, ui);
}
bool Mono_Security::Mono::Math::BigInteger::op_Equality(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator==(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Equality(&bi1, &bi2);
}
bool Mono_Security::Mono::Math::BigInteger::op_Inequality(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator!=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_Inequality(&bi1, &bi2);
}
bool Mono_Security::Mono::Math::BigInteger::op_GreaterThan(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThan", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator>(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_GreaterThan(bi1, bi2);
}
bool Mono_Security::Mono::Math::BigInteger::op_LessThan(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThan", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator<(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_LessThan(bi1, bi2);
}
bool Mono_Security::Mono::Math::BigInteger::op_GreaterThanOrEqual(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThanOrEqual", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator>=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_GreaterThanOrEqual(bi1, bi2);
}
bool Mono_Security::Mono::Math::BigInteger::op_LessThanOrEqual(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThanOrEqual", std::vector<std::string> { "Mono.Math.BigInteger", "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bi1;
	params[1] = (intptr_t)bi2;
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
bool Mono_Security::Mono::Math::operator<=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2)
{
	return Mono_Security::Mono::Math::BigInteger::op_LessThanOrEqual(bi1, bi2);
}
mscorlib::System::String* Mono_Security::Mono::Math::BigInteger::ToString(uint32_t radix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&radix;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Mono_Security::Mono::Math::BigInteger::ToString(uint32_t radix, mscorlib::System::String* characterSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.UInt32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&radix;
	params[1] = (intptr_t)characterSet;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Mono_Security::Mono::Math::BigInteger::Normalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Normalize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Mono_Security::Mono::Math::BigInteger::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
mscorlib::System::String* Mono_Security::Mono::Math::BigInteger::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Mono_Security::Mono::Math::BigInteger::Equals(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
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
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::ModInverse(Mono_Security::Mono::Math::BigInteger* modulus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ModInverse", std::vector<std::string> { "Mono.Math.BigInteger" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)modulus;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
Mono_Security::Mono::Math::BigInteger* Mono_Security::Mono::Math::BigInteger::GeneratePseudoPrime(int32_t bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GeneratePseudoPrime", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bits;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Math::BigInteger*)returnValue;
}
void Mono_Security::Mono::Math::BigInteger::Incr2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Incr2");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Math::BigInteger::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

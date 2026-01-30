#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_RipeMD128Digest.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests", "RipeMD128Digest");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD128Digest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyIn", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD128Digest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::get_AlgorithmName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AlgorithmName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::GetDigestSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigestSize");
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessWord", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&inOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::ProcessLength(int64_t bitLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessLength", std::vector<std::string> { "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&bitLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::UnpackWord(int32_t word, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnpackWord", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&word;
	params[1] = (intptr_t)outBytes;
	params[2] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFinal", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)output;
	params[1] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::RL(int32_t x, int32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RL", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F1(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F1", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F2(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F2", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F3(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F3", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F4(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F4", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F1", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F2", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F3", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::F4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "F4", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::FF1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FF1", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::FF2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FF2", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::FF3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FF3", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::FF4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FF4", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&x;
	params[5] = (intptr_t)&s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::ProcessBlock()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessBlock");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::Copy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
